
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {scalar_t__ scratches; int verbose; } ;
typedef scalar_t__ sljit_s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct sljit_compiler *VAR_3, sljit_s32 VAR_4)
{
 if (VAR_4 < (VAR_1 + VAR_3->scratches))
  FUNC_0(VAR_3->verbose, "r%ld", VAR_4 - VAR_1);
 else if (VAR_4 != VAR_2)
  FUNC_0(VAR_3->verbose, "s%ld", VAR_0 - VAR_4);
 else
  FUNC_0(VAR_3->verbose, "sp");
}
