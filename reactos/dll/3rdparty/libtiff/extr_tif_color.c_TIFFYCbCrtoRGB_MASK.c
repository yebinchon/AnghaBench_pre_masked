
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
typedef size_t int32 ;
struct TYPE_3__ {size_t* Y_tab; size_t* Cr_r_tab; int* Cb_g_tab; int* Cr_g_tab; size_t* Cb_b_tab; } ;
typedef TYPE_1__ TIFFYCbCrToRGB ;


 size_t FUNC_0 (size_t,int ,int) ;
 size_t FUNC_1 (size_t,int) ;
 int VAR_0 ;

void
FUNC_2(TIFFYCbCrToRGB *VAR_1, uint32 VAR_2, int32 VAR_3, int32 VAR_4,
        uint32 *VAR_5, uint32 *VAR_6, uint32 *VAR_7)
{
 int32 VAR_8;


 VAR_2 = FUNC_1(VAR_2, 255);
 VAR_3 = FUNC_0(VAR_3, 0, 255);
 VAR_4 = FUNC_0(VAR_4, 0, 255);

 VAR_8 = VAR_1->Y_tab[VAR_2] + VAR_1->Cr_r_tab[VAR_4];
 *VAR_5 = FUNC_0(VAR_8, 0, 255);
 VAR_8 = VAR_1->Y_tab[VAR_2]
     + (int)((VAR_1->Cb_g_tab[VAR_3] + VAR_1->Cr_g_tab[VAR_4]) >> VAR_0);
 *VAR_6 = FUNC_0(VAR_8, 0, 255);
 VAR_8 = VAR_1->Y_tab[VAR_2] + VAR_1->Cb_b_tab[VAR_3];
 *VAR_7 = FUNC_0(VAR_8, 0, 255);
}
