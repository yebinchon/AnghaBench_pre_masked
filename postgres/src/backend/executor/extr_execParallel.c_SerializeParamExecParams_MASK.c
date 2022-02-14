
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int16 ;
typedef int dsa_pointer ;
typedef int dsa_area ;
struct TYPE_8__ {TYPE_1__* es_plannedstmt; TYPE_2__* es_param_exec_vals; } ;
struct TYPE_7__ {int isnull; int value; } ;
struct TYPE_6__ {int paramExecTypes; } ;
typedef int Size ;
typedef TYPE_2__ ParamExecData ;
typedef int Oid ;
typedef TYPE_3__ EState ;
typedef int Datum ;
typedef int Bitmapset ;


 int FUNC_0 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int,int,char**) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int*,int*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int*,int) ;

__attribute__((used)) static dsa_pointer
FUNC_10(EState *VAR_0, Bitmapset *VAR_1, dsa_area *VAR_2)
{
 Size VAR_3;
 int VAR_4;
 int VAR_5;
 ParamExecData *VAR_6;
 dsa_pointer VAR_7;
 char *VAR_8;


 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_7 = FUNC_5(VAR_2, VAR_3);
 VAR_8 = FUNC_6(VAR_2, VAR_7);


 VAR_4 = FUNC_3(VAR_1);
 FUNC_9(VAR_8, &VAR_4, sizeof(int));
 VAR_8 += sizeof(int);


 VAR_5 = -1;
 while ((VAR_5 = FUNC_2(VAR_1, VAR_5)) >= 0)
 {
  Oid VAR_9;
  int16 VAR_10;
  bool VAR_11;

  VAR_6 = &(VAR_0->es_param_exec_vals[VAR_5]);
  VAR_9 = FUNC_8(VAR_0->es_plannedstmt->paramExecTypes,
          VAR_5);


  FUNC_9(VAR_8, &VAR_5, sizeof(int));
  VAR_8 += sizeof(int);


  if (FUNC_1(VAR_9))
   FUNC_7(VAR_9, &VAR_10, &VAR_11);
  else
  {

   VAR_10 = sizeof(Datum);
   VAR_11 = 1;
  }
  FUNC_4(VAR_6->value, VAR_6->isnull, VAR_11, VAR_10,
        &VAR_8);
 }

 return VAR_7;
}
