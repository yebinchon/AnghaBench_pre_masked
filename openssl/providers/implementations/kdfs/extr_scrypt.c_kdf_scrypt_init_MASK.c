
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int N; int r; int p; int maxmem_bytes; } ;
typedef TYPE_1__ KDF_SCRYPT ;



__attribute__((used)) static void FUNC_0(KDF_SCRYPT *VAR_0)
{




    VAR_0->N = 1 << 20;
    VAR_0->r = 8;
    VAR_0->p = 1;
    VAR_0->maxmem_bytes = 1025 * 1024 * 1024;
}
