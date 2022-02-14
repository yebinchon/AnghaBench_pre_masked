
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int STREAM ;
typedef int RD_HBITMAP ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int*,int,int,int*,int,int) ;
 int FUNC_2 (int,int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int,int,int*) ;
 int FUNC_7 (int*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(STREAM VAR_2)
{
 RD_HBITMAP VAR_3;
 uint16 VAR_4, VAR_5;
 uint8 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 uint8 *VAR_11, *VAR_12;
 uint16 VAR_13, VAR_14, VAR_15, VAR_16;
 uint8 VAR_17;

 VAR_14 = VAR_15 = VAR_16 = 0xffff;

 FUNC_4(VAR_2, VAR_6);
 FUNC_4(VAR_2, VAR_17);
 FUNC_4(VAR_2, VAR_7);
 FUNC_4(VAR_2, VAR_8);
 FUNC_4(VAR_2, VAR_9);
 VAR_10 = (VAR_9 + 7) / 8;
 FUNC_3(VAR_2, VAR_13);
 FUNC_3(VAR_2, VAR_4);

 if (VAR_1 >= VAR_0)
 {
  VAR_5 = VAR_13;
 }
 else
 {


  FUNC_3(VAR_2, VAR_14);
  FUNC_3(VAR_2, VAR_5);

  FUNC_3(VAR_2, VAR_15);
  FUNC_3(VAR_2, VAR_16);

 }
 FUNC_5(VAR_2, VAR_11, VAR_5);

 FUNC_0(("BMPCACHE(cx=%d,cy=%d,id=%d,idx=%d,bpp=%d,size=%d,pad1=%d,bufsize=%d,pad2=%d,rs=%d,fs=%d)\n", VAR_7, VAR_8, VAR_6, VAR_4, VAR_9, VAR_5, VAR_17, VAR_13, VAR_14, VAR_15, VAR_16));

 VAR_12 = (uint8 *) FUNC_8(VAR_7 * VAR_8 * VAR_10);

 if (FUNC_1(VAR_12, VAR_7, VAR_8, VAR_11, VAR_5, VAR_10))
 {
  VAR_3 = FUNC_6(VAR_7, VAR_8, VAR_12);
  FUNC_2(VAR_6, VAR_4, VAR_3);
 }
 else
 {
  FUNC_0(("Failed to decompress bitmap data\n"));
 }
 if (VAR_17 || VAR_14) {}

 FUNC_7(VAR_12);
}
