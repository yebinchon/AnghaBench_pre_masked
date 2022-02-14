
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int npy_uint64 ;
typedef scalar_t__ npy_uint32 ;
struct TYPE_5__ {scalar_t__ length; scalar_t__* blocks; } ;
typedef TYPE_1__ BigInt ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(BigInt *VAR_1, const BigInt *VAR_2, const BigInt *VAR_3)
{

    const BigInt *VAR_4, *VAR_5;
    npy_uint64 VAR_6 = 0;
    const npy_uint32 *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    npy_uint32 *VAR_11;

    if (VAR_2->length < VAR_3->length) {
        VAR_5 = VAR_2;
        VAR_4 = VAR_3;
    }
    else {
        VAR_5 = VAR_3;
        VAR_4 = VAR_2;
    }


    VAR_1->length = VAR_4->length;


    VAR_7 = VAR_4->blocks;
    VAR_9 = VAR_7 + VAR_4->length;
    VAR_8 = VAR_5->blocks;
    VAR_10 = VAR_8 + VAR_5->length;
    VAR_11 = VAR_1->blocks;
    while (VAR_8 != VAR_10) {
        npy_uint64 VAR_12 = VAR_6 + (npy_uint64)(*VAR_7) +
                                 (npy_uint64)(*VAR_8);
        VAR_6 = VAR_12 >> 32;
        *VAR_11 = VAR_12 & FUNC_1(32);
        ++VAR_7;
        ++VAR_8;
        ++VAR_11;
    }


    while (VAR_7 != VAR_9) {
        npy_uint64 VAR_13 = VAR_6 + (npy_uint64)(*VAR_7);
        VAR_6 = VAR_13 >> 32;
        (*VAR_11) = VAR_13 & FUNC_1(32);
        ++VAR_7;
        ++VAR_11;
    }


    if (VAR_6 != 0) {
        FUNC_0(VAR_6 == 1);
        FUNC_0((npy_uint32)(VAR_11 - VAR_1->blocks) ==
               VAR_4->length && (VAR_4->length < VAR_0));
        *VAR_11 = 1;
        VAR_1->length = VAR_4->length + 1;
    }
    else {
        VAR_1->length = VAR_4->length;
    }
}
