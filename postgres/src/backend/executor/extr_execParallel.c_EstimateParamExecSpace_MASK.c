
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_7__ {TYPE_1__* es_plannedstmt; TYPE_2__* es_param_exec_vals; } ;
struct TYPE_6__ {int isnull; int value; } ;
struct TYPE_5__ {int paramExecTypes; } ;
typedef int Size ;
typedef TYPE_2__ ParamExecData ;
typedef int Oid ;
typedef TYPE_3__ EState ;
typedef int Datum ;
typedef int Bitmapset ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static Size
FUNC_6(EState *VAR_0, Bitmapset *VAR_1)
{
 int VAR_2;
 Size VAR_3 = sizeof(int);

 VAR_2 = -1;
 while ((VAR_2 = FUNC_2(VAR_1, VAR_2)) >= 0)
 {
  Oid VAR_4;
  int16 VAR_5;
  bool VAR_6;
  ParamExecData *VAR_7;

  VAR_7 = &(VAR_0->es_param_exec_vals[VAR_2]);
  VAR_4 = FUNC_5(VAR_0->es_plannedstmt->paramExecTypes,
          VAR_2);

  VAR_3 = FUNC_1(VAR_3, sizeof(int));


  if (FUNC_0(VAR_4))
   FUNC_4(VAR_4, &VAR_5, &VAR_6);
  else
  {

   VAR_5 = sizeof(Datum);
   VAR_6 = 1;
  }
  VAR_3 = FUNC_1(VAR_3,
       FUNC_3(VAR_7->value, VAR_7->isnull,
           VAR_6, VAR_5));
 }
 return VAR_3;
}
