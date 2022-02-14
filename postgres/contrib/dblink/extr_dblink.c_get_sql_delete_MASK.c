
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_12__ {int attname; } ;
struct TYPE_11__ {int rd_att; } ;
struct TYPE_10__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* Form_pg_attribute ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 char* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static char *
FUNC_8(Relation VAR_0, int *VAR_1, int VAR_2, char **VAR_3)
{
 char *VAR_4;
 TupleDesc VAR_5;
 StringInfoData VAR_6;
 int VAR_7;

 FUNC_5(&VAR_6);


 VAR_4 = FUNC_4(VAR_0);

 VAR_5 = VAR_0->rd_att;

 FUNC_2(&VAR_6, "DELETE FROM %s WHERE ", VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
 {
  int VAR_8 = VAR_1[VAR_7];
  Form_pg_attribute VAR_9 = FUNC_1(VAR_5, VAR_8);

  if (VAR_7 > 0)
   FUNC_3(&VAR_6, " AND ");

  FUNC_3(&VAR_6,
          FUNC_6(FUNC_0(VAR_9->attname)));

  if (VAR_3[VAR_7] != ((void*)0))
   FUNC_2(&VAR_6, " = %s",
        FUNC_7(VAR_3[VAR_7]));
  else
   FUNC_3(&VAR_6, " IS NULL");
 }

 return VAR_6.data;
}
