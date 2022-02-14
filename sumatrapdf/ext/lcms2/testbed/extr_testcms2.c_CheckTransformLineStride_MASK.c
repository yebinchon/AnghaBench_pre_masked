
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int cmsUInt8Number ;
typedef int cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef int buf3 ;
typedef int buf2 ;
typedef int buf1 ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ,int *,int ,int ,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int*,int*,int,int,int,int,int ,int ) ;
 int VAR_4 ;
 int * FUNC_7 (int ,char*,char*) ;
 scalar_t__ FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int*,int ,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_10(void)
{

       cmsHPROFILE VAR_5;
       cmsHPROFILE VAR_6;
       cmsHTRANSFORM VAR_7;



       cmsUInt8Number VAR_8[]= { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0,
                                0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0,
                                0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0,
                                0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0, };



       cmsUInt8Number VAR_9[] = { 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff, 1, 0,
                                 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff, 1, 0,
                                 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff, 1, 0,
                                 0xff, 0xff, 0xff, 1, 0xff, 0xff, 0xff, 1, 0};



       cmsUInt16Number VAR_10[] = { 0xffff, 0xffff, 0xffff, 0x0101, 0xffff, 0xffff, 0xffff, 0x0101, 0,
                                  0xffff, 0xffff, 0xffff, 0x0101, 0xffff, 0xffff, 0xffff, 0x0101, 0,
                                  0xffff, 0xffff, 0xffff, 0x0101, 0xffff, 0xffff, 0xffff, 0x0101, 0,
                                  0xffff, 0xffff, 0xffff, 0x0101, 0xffff, 0xffff, 0xffff, 0x0101, 0 };

       cmsUInt8Number VAR_11[1024];


       FUNC_9(VAR_11, 0, sizeof(VAR_11));
       VAR_5 = FUNC_4(FUNC_0());
       VAR_6 = FUNC_7(FUNC_0(), "ibm-t61.icc", "r");
       if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
              return 0;

       VAR_7 = FUNC_3(FUNC_0(), VAR_5, VAR_3, VAR_6, VAR_3, VAR_0, VAR_4);

       FUNC_6(FUNC_0(), VAR_7, VAR_8, VAR_11, 2, 4, 7, 7, 0, 0);
       FUNC_5(FUNC_0(), VAR_7);

       if (FUNC_8(VAR_11, VAR_8, sizeof(VAR_8)) != 0) {
              FUNC_1("Failed transform line stride on RGB8");
              FUNC_2(FUNC_0(), VAR_5);
              FUNC_2(FUNC_0(), VAR_6);
              return 0;
       }

       FUNC_9(VAR_11, 0, sizeof(VAR_11));

       VAR_7 = FUNC_3(FUNC_0(), VAR_5, VAR_2, VAR_6, VAR_2, VAR_0, VAR_4);

       FUNC_6(FUNC_0(), VAR_7, VAR_9, VAR_11, 2, 4, 9, 9, 0, 0);

       FUNC_5(FUNC_0(), VAR_7);


       if (FUNC_8(VAR_11, VAR_9, sizeof(VAR_9)) != 0) {
              FUNC_2(FUNC_0(), VAR_5);
              FUNC_2(FUNC_0(), VAR_6);
              FUNC_1("Failed transform line stride on RGBA8");
              return 0;
       }

       FUNC_9(VAR_11, 0, sizeof(VAR_11));

       VAR_7 = FUNC_3(FUNC_0(), VAR_5, VAR_1, VAR_6, VAR_1, VAR_0, VAR_4);

       FUNC_6(FUNC_0(), VAR_7, VAR_10, VAR_11, 2, 4, 18, 18, 0, 0);

       FUNC_5(FUNC_0(), VAR_7);

       if (FUNC_8(VAR_11, VAR_10, sizeof(VAR_10)) != 0) {
              FUNC_2(FUNC_0(), VAR_5);
              FUNC_2(FUNC_0(), VAR_6);
              FUNC_1("Failed transform line stride on RGBA16");
              return 0;
       }


       FUNC_9(VAR_11, 0, sizeof(VAR_11));



       VAR_7 = FUNC_3(FUNC_0(), VAR_5, VAR_2, VAR_6, VAR_1, VAR_0, VAR_4);

       FUNC_6(FUNC_0(), VAR_7, VAR_9, VAR_11, 2, 4, 9, 18, 0, 0);

       FUNC_5(FUNC_0(), VAR_7);

       if (FUNC_8(VAR_11, VAR_10, sizeof(VAR_10)) != 0) {
              FUNC_2(FUNC_0(), VAR_5);
              FUNC_2(FUNC_0(), VAR_6);
              FUNC_1("Failed transform line stride on RGBA16");
              return 0;
       }



       FUNC_2(FUNC_0(), VAR_5);
       FUNC_2(FUNC_0(), VAR_6);

       return 1;
}
