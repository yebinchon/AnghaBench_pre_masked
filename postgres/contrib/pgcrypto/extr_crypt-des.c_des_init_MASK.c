
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32 ;


 size_t* VAR_0 ;
 long* VAR_1 ;
 int* VAR_2 ;
 long* VAR_3 ;
 long* VAR_4 ;
 long** VAR_5 ;
 long** VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 size_t* VAR_9 ;
 long** VAR_10 ;
 long** VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 long** VAR_15 ;
 long** VAR_16 ;
 int* VAR_17 ;
 long** VAR_18 ;
 long** VAR_19 ;
 int** VAR_20 ;
 long VAR_21 ;
 long VAR_22 ;
 long VAR_23 ;
 int* VAR_24 ;
 long** VAR_25 ;
 long VAR_26 ;
 int** VAR_27 ;
 int* VAR_28 ;
 int** VAR_29 ;
 size_t* VAR_30 ;

__attribute__((used)) static void
FUNC_0(void)
{
 int VAR_31,
    VAR_32,
    VAR_33,
    VAR_34,
    VAR_35,
    VAR_36;
 uint32 *VAR_37,
      *VAR_38,
      *VAR_39,
      *VAR_40,
      *VAR_41;

 VAR_21 = VAR_22 = 0L;
 VAR_26 = 0L;
 VAR_23 = 0L;
 VAR_3 = (VAR_4 = VAR_1 + 4) + 4;




 for (VAR_31 = 0; VAR_31 < 8; VAR_31++)
  for (VAR_32 = 0; VAR_32 < 64; VAR_32++)
  {
   VAR_33 = (VAR_32 & 0x20) | ((VAR_32 & 1) << 4) | ((VAR_32 >> 1) & 0xf);
   VAR_29[VAR_31][VAR_32] = VAR_27[VAR_31][VAR_33];
  }





 for (VAR_33 = 0; VAR_33 < 4; VAR_33++)
  for (VAR_31 = 0; VAR_31 < 64; VAR_31++)
   for (VAR_32 = 0; VAR_32 < 64; VAR_32++)
    VAR_20[VAR_33][(VAR_31 << 6) | VAR_32] =
     (VAR_29[(VAR_33 << 1)][VAR_31] << 4) |
     VAR_29[(VAR_33 << 1) + 1][VAR_32];





 for (VAR_31 = 0; VAR_31 < 64; VAR_31++)
 {
  VAR_12[VAR_9[VAR_31] = VAR_0[VAR_31] - 1] = VAR_31;
  VAR_14[VAR_31] = 255;
 }





 for (VAR_31 = 0; VAR_31 < 56; VAR_31++)
 {
  VAR_28[VAR_31] = VAR_17[VAR_31] - 1;
  VAR_14[VAR_17[VAR_31] - 1] = VAR_31;
  VAR_13[VAR_31] = 255;
 }




 for (VAR_31 = 0; VAR_31 < 48; VAR_31++)
  VAR_13[VAR_7[VAR_31] - 1] = VAR_31;





 for (VAR_34 = 0; VAR_34 < 8; VAR_34++)
 {
  for (VAR_31 = 0; VAR_31 < 256; VAR_31++)
  {
   *(VAR_38 = &VAR_15[VAR_34][VAR_31]) = 0L;
   *(VAR_39 = &VAR_16[VAR_34][VAR_31]) = 0L;
   *(VAR_40 = &VAR_10[VAR_34][VAR_31]) = 0L;
   *(VAR_41 = &VAR_11[VAR_34][VAR_31]) = 0L;
   for (VAR_32 = 0; VAR_32 < 8; VAR_32++)
   {
    VAR_35 = 8 * VAR_34 + VAR_32;
    if (VAR_31 & VAR_2[VAR_32])
    {
     if ((VAR_36 = VAR_12[VAR_35]) < 32)
      *VAR_38 |= VAR_1[VAR_36];
     else
      *VAR_39 |= VAR_1[VAR_36 - 32];
     if ((VAR_36 = VAR_9[VAR_35]) < 32)
      *VAR_40 |= VAR_1[VAR_36];
     else
      *VAR_41 |= VAR_1[VAR_36 - 32];
    }
   }
  }
  for (VAR_31 = 0; VAR_31 < 128; VAR_31++)
  {
   *(VAR_38 = &VAR_18[VAR_34][VAR_31]) = 0L;
   *(VAR_39 = &VAR_19[VAR_34][VAR_31]) = 0L;
   for (VAR_32 = 0; VAR_32 < 7; VAR_32++)
   {
    VAR_35 = 8 * VAR_34 + VAR_32;
    if (VAR_31 & VAR_2[VAR_32 + 1])
    {
     if ((VAR_36 = VAR_14[VAR_35]) == 255)
      continue;
     if (VAR_36 < 28)
      *VAR_38 |= VAR_4[VAR_36];
     else
      *VAR_39 |= VAR_4[VAR_36 - 28];
    }
   }
   *(VAR_38 = &VAR_5[VAR_34][VAR_31]) = 0L;
   *(VAR_39 = &VAR_6[VAR_34][VAR_31]) = 0L;
   for (VAR_32 = 0; VAR_32 < 7; VAR_32++)
   {
    VAR_35 = 7 * VAR_34 + VAR_32;
    if (VAR_31 & VAR_2[VAR_32 + 1])
    {
     if ((VAR_36 = VAR_13[VAR_35]) == 255)
      continue;
     if (VAR_36 < 24)
      *VAR_38 |= VAR_3[VAR_36];
     else
      *VAR_39 |= VAR_3[VAR_36 - 24];
    }
   }
  }
 }





 for (VAR_31 = 0; VAR_31 < 32; VAR_31++)
  VAR_30[VAR_24[VAR_31] - 1] = VAR_31;

 for (VAR_33 = 0; VAR_33 < 4; VAR_33++)
  for (VAR_31 = 0; VAR_31 < 256; VAR_31++)
  {
   *(VAR_37 = &VAR_25[VAR_33][VAR_31]) = 0L;
   for (VAR_32 = 0; VAR_32 < 8; VAR_32++)
   {
    if (VAR_31 & VAR_2[VAR_32])
     *VAR_37 |= VAR_1[VAR_30[8 * VAR_33 + VAR_32]];
   }
  }

 VAR_8 = 1;
}
