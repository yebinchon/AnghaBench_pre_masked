
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef scalar_t__ RD_HBITMAP ;
typedef scalar_t__ RD_BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int,int,int*,int,int) ;
 int FUNC_2 (int,int,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int,int,int*,int,int,int,int*) ;
 scalar_t__ FUNC_8 (int,int,int*) ;
 int FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(STREAM VAR_7, uint16 VAR_8, RD_BOOL VAR_9)
{
 RD_HBITMAP VAR_10;
 int VAR_11;
 uint8 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 uint16 VAR_17, VAR_18;
 uint8 *VAR_19, *VAR_20, *VAR_21;

 VAR_21 = ((void*)0);
 VAR_12 = VAR_8 & VAR_1;
 VAR_16 = ((VAR_8 & VAR_3) >> VAR_4) - 2;

 if (VAR_8 & VAR_5)
 {
  FUNC_5(VAR_7, VAR_21, 8);
 }

 if (VAR_8 & VAR_6)
 {
  FUNC_4(VAR_7, VAR_14);
  VAR_15 = VAR_14;
 }
 else
 {
  FUNC_4(VAR_7, VAR_14);
  FUNC_4(VAR_7, VAR_15);
 }

 FUNC_3(VAR_7, VAR_18);
 VAR_18 &= VAR_0;
 FUNC_4(VAR_7, VAR_17);

 if (VAR_17 & VAR_2)
 {
  FUNC_4(VAR_7, VAR_13);
  VAR_17 = ((VAR_17 ^ VAR_2) << 8) + VAR_13;
 }

 FUNC_5(VAR_7, VAR_19, VAR_18);

 FUNC_0(("BMPCACHE2(compr=%d,flags=%x,cx=%d,cy=%d,id=%d,idx=%d,Bpp=%d,bs=%d)\n",
        VAR_9, VAR_8, VAR_14, VAR_15, VAR_12, VAR_17, VAR_16, VAR_18));

 VAR_20 = (uint8 *) FUNC_10(VAR_14 * VAR_15 * VAR_16);

 if (VAR_9)
 {
  if (!FUNC_1(VAR_20, VAR_14, VAR_15, VAR_19, VAR_18, VAR_16))
  {
   FUNC_0(("Failed to decompress bitmap data\n"));
   FUNC_9(VAR_20);
   return;
  }
 }
 else
 {
  for (VAR_11 = 0; VAR_11 < VAR_15; VAR_11++)
   FUNC_6(&VAR_20[(VAR_15 - VAR_11 - 1) * (VAR_14 * VAR_16)],
          &VAR_19[VAR_11 * (VAR_14 * VAR_16)], VAR_14 * VAR_16);
 }

 VAR_10 = FUNC_8(VAR_14, VAR_15, VAR_20);

 if (VAR_10)
 {
  FUNC_2(VAR_12, VAR_17, VAR_10);
  if (VAR_8 & VAR_5)
   FUNC_7(VAR_12, VAR_17, VAR_21, VAR_14, VAR_15,
          VAR_14 * VAR_15 * VAR_16, VAR_20);
 }
 else
 {
  FUNC_0(("process_bmpcache2: ui_create_bitmap failed\n"));
 }

 FUNC_9(VAR_20);
}
