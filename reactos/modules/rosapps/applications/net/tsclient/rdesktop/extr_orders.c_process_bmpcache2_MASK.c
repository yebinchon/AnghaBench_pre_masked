
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef scalar_t__ HBITMAP ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int,int,int*,int,int) ;
 int FUNC_2 (int *,int,int,scalar_t__) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int *,int,int,int*,int,int,int,int*) ;
 scalar_t__ FUNC_10 (int *,int,int,int*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_11(RDPCLIENT * VAR_8, STREAM VAR_9, uint16 VAR_10, BOOL VAR_11)
{
 HBITMAP VAR_12;
 uint8 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint16 VAR_18, VAR_19;
 uint8 *VAR_20, *VAR_21, *VAR_22;

 VAR_22 = ((void*)0);
 VAR_13 = VAR_10 & VAR_1;
 VAR_17 = ((VAR_10 & VAR_3) >> VAR_4) - 2;

 if (VAR_10 & VAR_5)
 {
  FUNC_6(VAR_9, VAR_22, 8);
 }

 if (VAR_10 & VAR_6)
 {
  FUNC_5(VAR_9, VAR_15);
  VAR_16 = VAR_15;
 }
 else
 {
  FUNC_5(VAR_9, VAR_15);
  FUNC_5(VAR_9, VAR_16);
 }

 FUNC_4(VAR_9, VAR_19);
 VAR_19 &= VAR_0;
 FUNC_5(VAR_9, VAR_18);

 if (VAR_18 & VAR_2)
 {
  FUNC_5(VAR_9, VAR_14);
  VAR_18 = ((VAR_18 ^ VAR_2) << 8) + VAR_14;
 }

 FUNC_6(VAR_9, VAR_20, VAR_19);

 FUNC_0(("BMPCACHE2(compr=%d,flags=%x,cx=%d,cy=%d,id=%d,idx=%d,Bpp=%d,bs=%d)\n",
        VAR_11, VAR_10, VAR_15, VAR_16, VAR_13, VAR_18, VAR_17, VAR_19));

 if (VAR_11)
 {
  VAR_21 = (uint8 *) FUNC_7(VAR_15 * VAR_16 * VAR_17);

  if(VAR_21 == ((void*)0))
   return;

  if (!FUNC_1(VAR_21, VAR_15, VAR_16, VAR_20, VAR_19, VAR_17))
  {
   FUNC_0(("Failed to decompress bitmap data\n"));
   FUNC_3(VAR_21);
   return;
  }
 }
 else
 {





  VAR_21 = VAR_20;

 }

 VAR_12 = FUNC_10(VAR_8, VAR_15, VAR_16, VAR_21);

 if (VAR_12)
 {
  FUNC_2(VAR_8, VAR_13, VAR_18, VAR_12);
  if (VAR_10 & VAR_5)
   FUNC_9(VAR_8, VAR_13, VAR_18, VAR_22, VAR_15, VAR_16,
          VAR_15 * VAR_16 * VAR_17, VAR_21);
 }
 else
 {
  FUNC_0(("process_bmpcache2: ui_create_bitmap failed\n"));
 }

 if (VAR_11)
  FUNC_3(VAR_21);
}
