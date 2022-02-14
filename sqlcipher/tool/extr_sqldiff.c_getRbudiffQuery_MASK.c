
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Str ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,char*,char**,int) ;

__attribute__((used)) static void FUNC_2(
  const char *VAR_0,
  char **VAR_1,
  int VAR_2,
  int VAR_3,
  Str *VAR_4
){
  int VAR_5;


  FUNC_0(VAR_4, "SELECT ");
  FUNC_1(VAR_4, ", ", "%s", VAR_1, -1);
  FUNC_0(VAR_4, ", 0, ");
  FUNC_1(VAR_4, ", ", "NULL", VAR_1, -1);
  FUNC_0(VAR_4, " FROM aux.%Q AS n WHERE NOT EXISTS (\n", VAR_0);
  FUNC_0(VAR_4, "    SELECT 1 FROM ", VAR_0);
  FUNC_0(VAR_4, " main.%Q AS o WHERE ", VAR_0);
  FUNC_1(VAR_4, " AND ", "(n.%Q = o.%Q)", VAR_1, VAR_2);
  FUNC_0(VAR_4, "\n) AND ");
  FUNC_1(VAR_4, " AND ", "(n.%Q IS NOT NULL)", VAR_1, VAR_2);


  FUNC_0(VAR_4, "\nUNION ALL\nSELECT ");
  FUNC_1(VAR_4, ", ", "%s", VAR_1, VAR_2);
  if( VAR_1[VAR_2] ){
    FUNC_0(VAR_4, ", ");
    FUNC_1(VAR_4, ", ", "NULL", &VAR_1[VAR_2], -1);
  }
  FUNC_0(VAR_4, ", 1, ");
  FUNC_1(VAR_4, ", ", "NULL", VAR_1, -1);
  FUNC_0(VAR_4, " FROM main.%Q AS n WHERE NOT EXISTS (\n", VAR_0);
  FUNC_0(VAR_4, "    SELECT 1 FROM ", VAR_0);
  FUNC_0(VAR_4, " aux.%Q AS o WHERE ", VAR_0);
  FUNC_1(VAR_4, " AND ", "(n.%Q = o.%Q)", VAR_1, VAR_2);
  FUNC_0(VAR_4, "\n) AND ");
  FUNC_1(VAR_4, " AND ", "(n.%Q IS NOT NULL)", VAR_1, VAR_2);




  if( VAR_1[VAR_2] ){
    FUNC_0(VAR_4, "\nUNION ALL\nSELECT ");
    FUNC_1(VAR_4, ", ", "n.%s", VAR_1, VAR_2);
    FUNC_0(VAR_4, ",\n");
    FUNC_1(VAR_4, " ,\n",
        "    CASE WHEN n.%s IS o.%s THEN NULL ELSE n.%s END", &VAR_1[VAR_2], -1
    );

    if( VAR_3==0 ){
      FUNC_0(VAR_4, ", '");
      FUNC_1(VAR_4, "", ".", VAR_1, VAR_2);
      FUNC_0(VAR_4, "' ||\n");
    }else{
      FUNC_0(VAR_4, ",\n");
    }
    FUNC_1(VAR_4, " ||\n",
        "    CASE WHEN n.%s IS o.%s THEN '.' ELSE 'x' END", &VAR_1[VAR_2], -1
    );
    FUNC_0(VAR_4, "\nAS ota_control, ");
    FUNC_1(VAR_4, ", ", "NULL", VAR_1, VAR_2);
    FUNC_0(VAR_4, ",\n");
    FUNC_1(VAR_4, " ,\n",
        "    CASE WHEN n.%s IS o.%s THEN NULL ELSE o.%s END", &VAR_1[VAR_2], -1
    );

    FUNC_0(VAR_4, "\nFROM main.%Q AS o, aux.%Q AS n\nWHERE ", VAR_0, VAR_0);
    FUNC_1(VAR_4, " AND ", "(n.%Q = o.%Q)", VAR_1, VAR_2);
    FUNC_0(VAR_4, " AND ota_control LIKE '%%x%%'");
  }


  FUNC_0(VAR_4, "\nORDER BY ");
  for(VAR_5=1; VAR_5<=VAR_2; VAR_5++) FUNC_0(VAR_4, "%s%d", ((VAR_5>1)?", ":""), VAR_5);
}
