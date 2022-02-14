
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_8__ {int emission_counter; int optimization_counter; int inlining_counter; } ;
struct TYPE_9__ {int flags; TYPE_1__ instr; } ;
struct TYPE_11__ {int compiled; TYPE_2__ base; int handles; int * module; int module_generation; } ;
struct TYPE_10__ {scalar_t__ orc_handle; int stack; } ;
typedef int MemoryContext ;
typedef int LLVMSharedModuleRef ;
typedef scalar_t__ LLVMOrcModuleHandle ;
typedef int LLVMOrcJITStackRef ;
typedef TYPE_3__ LLVMJitHandle ;
typedef TYPE_4__ LLVMJitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int *,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (int ,TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (TYPE_4__*,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_20(LLVMJitContext *VAR_10)
{
 LLVMOrcModuleHandle VAR_11;
 MemoryContext VAR_12;
 static LLVMOrcJITStackRef VAR_13;
 instr_time VAR_14;
 instr_time VAR_15;

 if (VAR_10->base.flags & VAR_4)
  VAR_13 = VAR_8;
 else
  VAR_13 = VAR_7;


 if (VAR_10->base.flags & VAR_3)
 {
  FUNC_2(VAR_14);
  FUNC_15(VAR_10->module);
  FUNC_2(VAR_15);
  FUNC_0(VAR_10->base.instr.inlining_counter,
         VAR_15, VAR_14);
 }

 if (VAR_6)
 {
  char *VAR_16;

  VAR_16 = FUNC_19("%u.%zu.bc",
       VAR_2,
       VAR_10->module_generation);
  FUNC_7(VAR_10->module, VAR_16);
  FUNC_18(VAR_16);
 }



 FUNC_2(VAR_14);
 FUNC_16(VAR_10, VAR_10->module);
 FUNC_2(VAR_15);
 FUNC_0(VAR_10->base.instr.optimization_counter,
        VAR_15, VAR_14);

 if (VAR_6)
 {
  char *VAR_17;

  VAR_17 = FUNC_19("%u.%zu.optimized.bc",
       VAR_2,
       VAR_10->module_generation);
  FUNC_7(VAR_10->module, VAR_17);
  FUNC_18(VAR_17);
 }







 FUNC_2(VAR_14);
 {
  VAR_11 = FUNC_4(VAR_13, VAR_10->module,
             VAR_9, ((void*)0));
  FUNC_3(VAR_10->module);
 }

 FUNC_2(VAR_15);
 FUNC_0(VAR_10->base.instr.emission_counter,
        VAR_15, VAR_14);

 VAR_10->module = ((void*)0);
 VAR_10->compiled = 1;


 VAR_12 = FUNC_8(VAR_5);
 {
  LLVMJitHandle *VAR_18;

  VAR_18 = (LLVMJitHandle *) FUNC_17(sizeof(LLVMJitHandle));
  VAR_18->stack = VAR_13;
  VAR_18->orc_handle = VAR_11;

  VAR_10->handles = FUNC_14(VAR_10->handles, VAR_18);
 }
 FUNC_8(VAR_12);

 FUNC_10(VAR_0,
   (FUNC_13("time to inline: %.3fs, opt: %.3fs, emit: %.3fs",
     FUNC_1(VAR_10->base.instr.inlining_counter),
     FUNC_1(VAR_10->base.instr.optimization_counter),
     FUNC_1(VAR_10->base.instr.emission_counter)),
    FUNC_12(1),
    FUNC_11(1)));
}
