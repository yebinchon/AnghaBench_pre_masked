
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,int ,int,int ,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

int FUNC_8(int VAR_14, char *VAR_15[])
{
  int VAR_16, VAR_17 = 5;




  if (VAR_14 > 1) {
    for (VAR_16 = 1; VAR_16 < VAR_14; VAR_16++) {
      if (!FUNC_5(VAR_15[VAR_16], "-yuv")) VAR_11 = 1;
      else if (!FUNC_5(VAR_15[VAR_16], "-noyuvpad")) VAR_13 = 1;
      else if (!FUNC_5(VAR_15[VAR_16], "-alloc")) VAR_10 = 1;
      else if (!FUNC_5(VAR_15[VAR_16], "-bmp")) return FUNC_0();
      else FUNC_7(VAR_15[0]);
    }
  }
  if (VAR_10) FUNC_3("Testing automatic buffer allocation\n");
  if (VAR_11) VAR_17 = 4;
  FUNC_2(35, 39, VAR_6, 2, VAR_4, "test");
  FUNC_2(39, 41, VAR_7, VAR_17, VAR_4, "test");
  FUNC_2(41, 35, VAR_6, 2, VAR_2, "test");
  FUNC_2(35, 39, VAR_7, VAR_17, VAR_2, "test");
  FUNC_2(39, 41, VAR_6, 2, VAR_1, "test");
  FUNC_2(41, 35, VAR_7, VAR_17, VAR_1, "test");
  FUNC_2(35, 39, VAR_6, 2, VAR_3, "test");
  FUNC_2(39, 41, VAR_7, VAR_17, VAR_3, "test");
  FUNC_2(41, 35, VAR_6, 2, VAR_0, "test");
  FUNC_2(35, 39, VAR_7, VAR_17, VAR_0, "test");
  FUNC_2(39, 41, VAR_8, 1, VAR_5, "test");
  FUNC_2(41, 35, VAR_6, 2, VAR_5, "test");
  FUNC_2(35, 39, VAR_7, 4, VAR_5, "test");
  FUNC_1();
  if (VAR_11) {
    FUNC_3("\n--------------------\n\n");
    FUNC_2(48, 48, VAR_9, 1, VAR_4, "test_yuv0");
    FUNC_2(48, 48, VAR_9, 1, VAR_2, "test_yuv0");
    FUNC_2(48, 48, VAR_9, 1, VAR_1, "test_yuv0");
    FUNC_2(48, 48, VAR_9, 1, VAR_3, "test_yuv0");
    FUNC_2(48, 48, VAR_9, 1, VAR_0, "test_yuv0");
    FUNC_2(48, 48, VAR_9, 1, VAR_5, "test_yuv0");
    FUNC_2(48, 48, VAR_8, 1, VAR_5, "test_yuv0");
  }

  return VAR_12;
}
