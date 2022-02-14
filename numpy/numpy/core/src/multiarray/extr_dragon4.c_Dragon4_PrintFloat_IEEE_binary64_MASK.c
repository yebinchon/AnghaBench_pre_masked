
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long npy_uint64 ;
typedef int npy_uint32 ;
typedef int npy_int32 ;
typedef int npy_float64 ;
typedef int npy_bool ;
struct TYPE_7__ {scalar_t__ sign; } ;
struct TYPE_6__ {char* repr; int * bigints; } ;
typedef TYPE_1__ Dragon4_Scratch ;
typedef TYPE_2__ Dragon4_Options ;
typedef int BigInt ;


 int FUNC_0 (int *,unsigned long long) ;
 int FUNC_1 (char*,int,int *,int,char,int,int,TYPE_2__*) ;
 int FUNC_2 (unsigned long long) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,unsigned long long,int,char) ;
 int FUNC_4 (int) ;
 unsigned long long FUNC_5 (int) ;

__attribute__((used)) static npy_uint32
FUNC_6(
        Dragon4_Scratch *VAR_1, npy_float64 *VAR_2, Dragon4_Options *VAR_3)
{
    char *VAR_4 = VAR_1->repr;
    npy_uint32 VAR_5 = sizeof(VAR_1->repr);
    BigInt *VAR_6 = VAR_1->bigints;

    union
    {
        npy_float64 floatingPoint;
        npy_uint64 integer;
    } VAR_7;
    npy_uint32 VAR_8, VAR_9;
    npy_uint64 VAR_10;

    npy_uint64 VAR_11;
    npy_int32 VAR_12;
    npy_uint32 VAR_13;
    npy_bool VAR_14;
    char VAR_15 = '\0';

    if (VAR_5 == 0) {
        return 0;
    }

    if (VAR_5 == 1) {
        VAR_4[0] = '\0';
        return 0;
    }


    VAR_7.floatingPoint = *VAR_2;
    VAR_10 = VAR_7.integer & FUNC_5(52);
    VAR_8 = (VAR_7.integer >> 52) & FUNC_4(11);
    VAR_9 = VAR_7.integer >> 63;


    if (VAR_9 != 0) {
        VAR_15 = '-';
    }
    else if (VAR_3->sign) {
        VAR_15 = '+';
    }


    if (VAR_8 == FUNC_4(11)) {
        return FUNC_3(VAR_4, VAR_5, VAR_10, 13, VAR_15);
    }



    if (VAR_8 != 0) {
        VAR_11 = (1ull << 52) | VAR_10;
        VAR_12 = VAR_8 - 1023 - 52;
        VAR_13 = 52;
        VAR_14 = (VAR_8 != 1) && (VAR_10 == 0);
    }
    else {
        VAR_11 = VAR_10;
        VAR_12 = 1 - 1023 - 52;
        VAR_13 = FUNC_2(VAR_11);
        VAR_14 = VAR_0;
    }

    FUNC_0(&VAR_6[0], VAR_11);
    return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_12,
                            VAR_15, VAR_13, VAR_14, VAR_3);
}
