
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_tail {int funcs_off; int vars_off; int impls_off; int funcs_bytes; int vars_bytes; int impls_bytes; int tdescalias_vt; int res16; int cbAlignment; int res24; int res26; int res2a; int res2c; int res2e; int res30; scalar_t__ type_bytes; scalar_t__ res32; scalar_t__ cbSizeVft; scalar_t__ cbSizeInstance; scalar_t__ res1e; scalar_t__ simple_alias; scalar_t__ res1a; scalar_t__ res18; scalar_t__ res06; scalar_t__ cImplTypes; scalar_t__ cVars; scalar_t__ cFuncs; } ;



__attribute__((used)) static void FUNC_0(struct sltg_tail *VAR_0)
{
    VAR_0->cFuncs = 0;
    VAR_0->cVars = 0;
    VAR_0->cImplTypes = 0;
    VAR_0->res06 = 0;
    VAR_0->funcs_off = -1;
    VAR_0->vars_off = -1;
    VAR_0->impls_off = -1;
    VAR_0->funcs_bytes = -1;
    VAR_0->vars_bytes = -1;
    VAR_0->impls_bytes = -1;
    VAR_0->tdescalias_vt = -1;
    VAR_0->res16 = -1;
    VAR_0->res18 = 0;
    VAR_0->res1a = 0;
    VAR_0->simple_alias = 0;
    VAR_0->res1e = 0;
    VAR_0->cbSizeInstance = 0;
    VAR_0->cbAlignment = 4;
    VAR_0->res24 = -1;
    VAR_0->res26 = -1;
    VAR_0->cbSizeVft = 0;
    VAR_0->res2a = -1;
    VAR_0->res2c = -1;
    VAR_0->res2e = -1;
    VAR_0->res30 = -1;
    VAR_0->res32 = 0;
    VAR_0->type_bytes = 0;
}
