
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint8_t ;
typedef int uint32_t ;
typedef int cmsUInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef scalar_t__ cmsColorSpaceSignature ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int ,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,double*,double*,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (double const*,size_t) ;
 scalar_t__ VAR_3 ;

int FUNC_12(const uint8_t *VAR_4, size_t VAR_5) {
  cmsHPROFILE VAR_6 = FUNC_11(VAR_4, VAR_5);
  if (!VAR_6) return 0;

  cmsHPROFILE VAR_7 = FUNC_7();
  if (!VAR_7) {
    FUNC_5(VAR_6);
    return 0;
  }

  cmsColorSpaceSignature VAR_8 = FUNC_10(VAR_6);
  cmsUInt32Number VAR_9 = FUNC_4(VAR_8);
  cmsUInt32Number VAR_10;
  if (VAR_8 == VAR_3) {
    VAR_10 =
        FUNC_2(VAR_1) | FUNC_1(VAR_9) | FUNC_0(0);
  } else {
    VAR_10 =
        FUNC_2(VAR_0) | FUNC_1(VAR_9) | FUNC_0(1);
  }

  cmsUInt32Number VAR_11 = 0;
  cmsUInt32Number VAR_12 = 0;
  cmsHTRANSFORM VAR_13 = FUNC_6(
      VAR_6, VAR_10, VAR_7, VAR_2, VAR_11, VAR_12);
  FUNC_5(VAR_6);
  FUNC_5(VAR_7);
  if (!VAR_13) return 0;

  uint8_t VAR_14[4];
  if (FUNC_3(VAR_10) == 0) {
    double VAR_15[VAR_9];
    for (uint32_t VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) VAR_15[VAR_16] = 0.5f;
    FUNC_9(VAR_13, VAR_15, VAR_14, 1);
  } else {
    uint8_t VAR_17[VAR_9];
    for (uint32_t VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) VAR_17[VAR_18] = 128;
    FUNC_9(VAR_13, VAR_17, VAR_14, 1);
  }
  FUNC_8(VAR_13);

  return 0;
}
