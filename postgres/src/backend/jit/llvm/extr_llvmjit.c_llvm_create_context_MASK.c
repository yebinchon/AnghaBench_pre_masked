
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int resowner; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
typedef TYPE_2__ LLVMJitContext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

LLVMJitContext *
FUNC_6(int VAR_2)
{
 LLVMJitContext *VAR_3;

 FUNC_4();

 FUNC_5();

 FUNC_2(VAR_0);

 VAR_3 = FUNC_0(VAR_1,
          sizeof(LLVMJitContext));
 VAR_3->base.flags = VAR_2;


 VAR_3->base.resowner = VAR_0;
 FUNC_3(VAR_0, FUNC_1(VAR_3));

 return VAR_3;
}
