
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef int ListCell ;
typedef int List ;


 int FUNC_0 (TYPE_1__*,char*,char const*) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 char* FUNC_3 (int const) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;

const char *
FUNC_9(const char *VAR_0, int VAR_1,
        List *VAR_2, const Oid *VAR_3)
{
 StringInfoData VAR_4;
 int VAR_5;
 ListCell *VAR_6;
 int VAR_7;

 FUNC_4(&VAR_4);

 FUNC_0(&VAR_4, "%s(", VAR_0);

 VAR_5 = VAR_1 - FUNC_7(VAR_2);
 VAR_6 = FUNC_6(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
 {
  if (VAR_7)
   FUNC_2(&VAR_4, ", ");
  if (VAR_7 >= VAR_5)
  {
   FUNC_0(&VAR_4, "%s => ", (char *) FUNC_5(VAR_6));
   VAR_6 = FUNC_8(VAR_2, VAR_6);
  }
  FUNC_2(&VAR_4, FUNC_3(VAR_3[VAR_7]));
 }

 FUNC_1(&VAR_4, ')');

 return VAR_4.data;
}
