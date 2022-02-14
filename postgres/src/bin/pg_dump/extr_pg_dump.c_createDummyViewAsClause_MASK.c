
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numatts; int * attnames; int * attcollation; int * atttypnames; } ;
typedef TYPE_1__ TableInfo ;
typedef int PQExpBuffer ;
typedef int CollInfo ;
typedef int Archive ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static PQExpBuffer
FUNC_8(Archive *VAR_0, TableInfo *VAR_1)
{
 PQExpBuffer VAR_2 = FUNC_4();
 int VAR_3;

 FUNC_3(VAR_2, "SELECT");

 for (VAR_3 = 0; VAR_3 < VAR_1->numatts; VAR_3++)
 {
  if (VAR_3 > 0)
   FUNC_2(VAR_2, ',');
  FUNC_3(VAR_2, "\n    ");

  FUNC_1(VAR_2, "NULL::%s", VAR_1->atttypnames[VAR_3]);





  if (FUNC_0(VAR_1->attcollation[VAR_3]))
  {
   CollInfo *VAR_4;

   VAR_4 = FUNC_5(VAR_1->attcollation[VAR_3]);
   if (VAR_4)
    FUNC_1(VAR_2, " COLLATE %s",
          FUNC_7(VAR_4));
  }

  FUNC_1(VAR_2, " AS %s", FUNC_6(VAR_1->attnames[VAR_3]));
 }

 return VAR_2;
}
