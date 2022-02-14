
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * fn_extra; int fn_mcxt; } ;
struct TYPE_4__ {TYPE_2__* flinfo; } ;
typedef int Oid ;
typedef TYPE_1__* FunctionCallInfo ;
typedef int FmgrInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *,int*) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static FmgrInfo *
FUNC_7(FunctionCallInfo VAR_1, int VAR_2)
{
 FmgrInfo *VAR_3;
 int VAR_4;


 VAR_3 = (FmgrInfo *) FUNC_0(VAR_1->flinfo->fn_mcxt,
            FUNC_2() * sizeof(FmgrInfo));

 for (VAR_4 = VAR_2; VAR_4 < FUNC_2(); VAR_4++)
 {
  Oid VAR_5;
  Oid VAR_6;
  bool VAR_7;

  VAR_5 = FUNC_6(VAR_1->flinfo, VAR_4);
  if (!FUNC_1(VAR_5))
   FUNC_3(VAR_0, "could not determine data type of concat() input");

  FUNC_5(VAR_5, &VAR_6, &VAR_7);
  FUNC_4(VAR_6, &VAR_3[VAR_4], VAR_1->flinfo->fn_mcxt);
 }

 VAR_1->flinfo->fn_extra = VAR_3;

 return VAR_3;
}
