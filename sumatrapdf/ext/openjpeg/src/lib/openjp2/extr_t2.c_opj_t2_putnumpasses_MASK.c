
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_bio_t ;
typedef int OPJ_UINT32 ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(opj_bio_t *VAR_0, OPJ_UINT32 VAR_1)
{
    if (VAR_1 == 1) {
        FUNC_0(VAR_0, 0, 1);
    } else if (VAR_1 == 2) {
        FUNC_0(VAR_0, 2, 2);
    } else if (VAR_1 <= 5) {
        FUNC_0(VAR_0, 0xc | (VAR_1 - 3), 4);
    } else if (VAR_1 <= 36) {
        FUNC_0(VAR_0, 0x1e0 | (VAR_1 - 6), 9);
    } else if (VAR_1 <= 164) {
        FUNC_0(VAR_0, 0xff80 | (VAR_1 - 37), 16);
    }
}
