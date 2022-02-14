
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
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int ,int,int ,char*) ;
 int VAR_12 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int VAR_13 ;

int FUNC_8(int VAR_14, char *VAR_15[])
{
 int VAR_16=0, VAR_17;



 if(VAR_14>1)
 {
  for(VAR_17=1; VAR_17<VAR_14; VAR_17++)
  {
   if(!FUNC_4(VAR_15[VAR_17], "-yuv")) VAR_16=1;
   if(!FUNC_4(VAR_15[VAR_17], "-alloc")) VAR_11=1;
   if(!FUNC_5(VAR_15[VAR_17], "-h", 2) || !FUNC_4(VAR_15[VAR_17], "-?"))
    FUNC_7(VAR_15[0]);
  }
 }
 if(VAR_11) FUNC_2("Testing automatic buffer allocation\n");
 if(VAR_16) {VAR_13=VAR_6; VAR_11=0;}
 FUNC_1(35, 39, VAR_7, 2, VAR_3, "test");
 FUNC_1(39, 41, VAR_8, 4, VAR_3, "test");
 FUNC_1(41, 35, VAR_7, 2, VAR_1, "test");
 FUNC_1(35, 39, VAR_8, 4, VAR_1, "test");
 FUNC_1(39, 41, VAR_7, 2, VAR_0, "test");
 FUNC_1(41, 35, VAR_8, 4, VAR_0, "test");
 FUNC_1(35, 39, VAR_7, 2, VAR_2, "test");
 FUNC_1(39, 41, VAR_8, 4, VAR_2, "test");
 FUNC_1(35, 39, VAR_9, 1, VAR_4, "test");
 FUNC_1(39, 41, VAR_7, 2, VAR_4, "test");
 FUNC_1(41, 35, VAR_8, 4, VAR_4, "test");
 FUNC_0();
 if(VAR_16)
 {
  FUNC_2("\n--------------------\n\n");
  VAR_13=VAR_5;
  FUNC_1(48, 48, VAR_10, 1, VAR_3, "test_yuv0");
  FUNC_1(35, 39, VAR_10, 1, VAR_3, "test_yuv1");
  FUNC_1(48, 48, VAR_10, 1, VAR_1, "test_yuv0");
  FUNC_1(39, 41, VAR_10, 1, VAR_1, "test_yuv1");
  FUNC_1(48, 48, VAR_10, 1, VAR_0, "test_yuv0");
  FUNC_1(41, 35, VAR_10, 1, VAR_0, "test_yuv1");
  FUNC_1(48, 48, VAR_10, 1, VAR_2, "test_yuv0");
  FUNC_1(35, 39, VAR_10, 1, VAR_2, "test_yuv1");
  FUNC_1(48, 48, VAR_10, 1, VAR_4, "test_yuv0");
  FUNC_1(35, 39, VAR_10, 1, VAR_4, "test_yuv1");
  FUNC_1(48, 48, VAR_9, 1, VAR_4, "test_yuv0");
  FUNC_1(39, 41, VAR_9, 1, VAR_4, "test_yuv1");
 }

 return VAR_12;
}
