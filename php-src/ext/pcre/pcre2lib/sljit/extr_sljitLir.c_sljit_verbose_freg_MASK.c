
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sljit_compiler {scalar_t__ fscratches; int verbose; } ;
typedef scalar_t__ sljit_s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sljit_compiler *VAR_2, sljit_s32 VAR_3)
{
 if (VAR_3 < (VAR_0 + VAR_2->fscratches))
  FUNC_0(VAR_2->verbose, "fr%ld", VAR_3 - VAR_0);
 else
  FUNC_0(VAR_2->verbose, "fs%ld", VAR_1 - VAR_3);
}
