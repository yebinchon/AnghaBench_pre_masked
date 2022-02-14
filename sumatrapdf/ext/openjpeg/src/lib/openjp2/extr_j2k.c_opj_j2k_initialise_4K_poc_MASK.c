
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tile; int layno1; int compno1; void* prg1; void* resno1; scalar_t__ compno0; void* resno0; } ;
typedef TYPE_1__ opj_poc_t ;
typedef void* OPJ_UINT32 ;


 void* VAR_0 ;

__attribute__((used)) static int FUNC_0(opj_poc_t *VAR_1, int VAR_2)
{
    VAR_1[0].tile = 1;
    VAR_1[0].resno0 = 0;
    VAR_1[0].compno0 = 0;
    VAR_1[0].layno1 = 1;
    VAR_1[0].resno1 = (OPJ_UINT32)(VAR_2 - 1);
    VAR_1[0].compno1 = 3;
    VAR_1[0].prg1 = VAR_0;
    VAR_1[1].tile = 1;
    VAR_1[1].resno0 = (OPJ_UINT32)(VAR_2 - 1);
    VAR_1[1].compno0 = 0;
    VAR_1[1].layno1 = 1;
    VAR_1[1].resno1 = (OPJ_UINT32)VAR_2;
    VAR_1[1].compno1 = 3;
    VAR_1[1].prg1 = VAR_0;
    return 2;
}
