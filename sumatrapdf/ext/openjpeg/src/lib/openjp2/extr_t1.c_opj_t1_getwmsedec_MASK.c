
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_FLOAT64 ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t,size_t) ;

__attribute__((used)) static OPJ_FLOAT64 FUNC_3(
    OPJ_INT32 VAR_0,
    OPJ_UINT32 VAR_1,
    OPJ_UINT32 VAR_2,
    OPJ_UINT32 VAR_3,
    OPJ_INT32 VAR_4,
    OPJ_UINT32 VAR_5,
    OPJ_FLOAT64 VAR_6,
    OPJ_UINT32 VAR_7,
    const OPJ_FLOAT64 * VAR_8,
    OPJ_UINT32 VAR_9)
{
    OPJ_FLOAT64 VAR_10 = 1, VAR_11, VAR_12;
    FUNC_0(VAR_7);

    if (VAR_8 && (VAR_1 < VAR_9)) {
        VAR_10 = VAR_8[VAR_1];
    }

    if (VAR_5 == 1) {
        VAR_11 = FUNC_1(VAR_2, VAR_3);
    } else {
        VAR_11 = FUNC_2(VAR_2, VAR_3);
    }

    VAR_12 = VAR_10 * VAR_11 * VAR_6 * (1 << VAR_4);
    VAR_12 *= VAR_12 * VAR_0 / 8192.0;

    return VAR_12;
}
