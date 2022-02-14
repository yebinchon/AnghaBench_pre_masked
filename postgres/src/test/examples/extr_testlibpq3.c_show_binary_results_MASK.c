
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int PGresult ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(PGresult *VAR_0)
{
 int VAR_1,
    VAR_2;
 int VAR_3,
    VAR_4,
    VAR_5;


 VAR_3 = FUNC_0(VAR_0, "i");
 VAR_4 = FUNC_0(VAR_0, "t");
 VAR_5 = FUNC_0(VAR_0, "b");

 for (VAR_1 = 0; VAR_1 < FUNC_3(VAR_0); VAR_1++)
 {
  char *VAR_6;
  char *VAR_7;
  char *VAR_8;
  int VAR_9;
  int VAR_10;


  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_3);
  VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_4);
  VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_5);





  VAR_10 = FUNC_4(*((uint32_t *) VAR_6));
  VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_5);

  FUNC_5("tuple %d: got\n", VAR_1);
  FUNC_5(" i = (%d bytes) %d\n",
      FUNC_1(VAR_0, VAR_1, VAR_3), VAR_10);
  FUNC_5(" t = (%d bytes) '%s'\n",
      FUNC_1(VAR_0, VAR_1, VAR_4), VAR_7);
  FUNC_5(" b = (%d bytes) ", VAR_9);
  for (VAR_2 = 0; VAR_2 < VAR_9; VAR_2++)
   FUNC_5("\\%03o", VAR_8[VAR_2]);
  FUNC_5("\n\n");
 }
}
