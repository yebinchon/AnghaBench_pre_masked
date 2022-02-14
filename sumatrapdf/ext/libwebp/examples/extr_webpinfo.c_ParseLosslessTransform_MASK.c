
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int WebPInfoStatus ;
typedef int WebPInfo ;




 int FUNC_0 (int,int) ;

 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static WebPInfoStatus FUNC_2(WebPInfo* const VAR_2,
                                             const uint8_t* const VAR_3,
                                             size_t VAR_4,
                                             uint64_t* const VAR_5) {
  int VAR_6, VAR_7, VAR_8;
  FUNC_0(VAR_6, 1);
  FUNC_1("  Use transform:    %s\n", VAR_6 ? "Yes" : "No");
  if (VAR_6) {
    int VAR_9;
    FUNC_0(VAR_9, 2);
    FUNC_1("  1st transform:    %s (%d)\n", VAR_1[VAR_9], VAR_9);
    switch (VAR_9) {
      case 128:
      case 129:
        FUNC_0(VAR_7, 3);
        VAR_7 = 1 << (VAR_7 + 2);
        FUNC_1("  Tran. block size: %d\n", VAR_7);
        break;
      case 130:
        FUNC_0(VAR_8, 8);
        VAR_8 += 1;
        FUNC_1("  No. of colors:    %d\n", VAR_8);
        break;
      default: break;
    }
  }
  return VAR_0;
}
