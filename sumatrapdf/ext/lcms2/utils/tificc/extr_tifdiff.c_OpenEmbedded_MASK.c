
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef int TIFF ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int *,int ,int ,int ,int ,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
cmsUInt32Number FUNC_6(TIFF* VAR_6, cmsHPROFILE* VAR_7, cmsHTRANSFORM* VAR_8)
{

    cmsUInt32Number VAR_9, VAR_10 = 0;
    cmsUInt8Number* VAR_11;

    *VAR_7 = ((void*)0);
    *VAR_8 = ((void*)0);

    if (FUNC_2(VAR_6, VAR_1, &VAR_9, &VAR_11)) {

              *VAR_7 = FUNC_4(VAR_11, VAR_9);

              if (VAR_3) {

      FUNC_5(VAR_5, "Embedded profile found:\n");
      FUNC_1(((void*)0), *VAR_7);

              }

              VAR_10 = FUNC_0(VAR_6);
              *VAR_8 = FUNC_3(*VAR_7, VAR_10,
                                          VAR_4, VAR_2, VAR_0, 0);

      }

    return VAR_10;
}
