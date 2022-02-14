
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* start; int* end; int* bp; int backup; } ;
typedef TYPE_1__ opj_mqc_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(opj_mqc_t *VAR_1,
                                    OPJ_BYTE *VAR_2,
                                    OPJ_UINT32 VAR_3,
                                    OPJ_UINT32 VAR_4)
{
    (void)VAR_4;

    FUNC_0(VAR_4 >= VAR_0);
    VAR_1->start = VAR_2;
    VAR_1->end = VAR_2 + VAR_3;




    FUNC_1(VAR_1->backup, VAR_1->end, VAR_0);
    VAR_1->end[0] = 0xFF;
    VAR_1->end[1] = 0xFF;
    VAR_1->bp = VAR_2;
}
