
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int WebPInfoStatus ;
typedef int WebPInfo ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static WebPInfoStatus FUNC_3(const WebPInfo* const VAR_1,
                                              const uint8_t* const VAR_2,
                                              size_t VAR_3,
                                              uint64_t* const VAR_4) {
  int VAR_5;
  FUNC_0(VAR_5, 1);
  FUNC_2("  Use segment:      %d\n", VAR_5);
  if (VAR_5) {
    int VAR_6, VAR_7;
    FUNC_0(VAR_6, 1);
    FUNC_0(VAR_7, 1);
    FUNC_2("  Update map:       %d\n"
           "  Update data:      %d\n",
           VAR_6, VAR_7);
    if (VAR_7) {
      int VAR_8, VAR_9;
      int VAR_10[4] = {0, 0, 0, 0};
      int VAR_11[4] = {0, 0, 0, 0};
      FUNC_0(VAR_9, 1);
      FUNC_2("  Absolute delta:   %d\n", VAR_9);
      for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
        int VAR_12;
        FUNC_0(VAR_12, 1);
        if (VAR_12) FUNC_1(VAR_10[VAR_8], 7);
      }
      for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
        int VAR_13;
        FUNC_0(VAR_13, 1);
        if (VAR_13) FUNC_1(VAR_11[VAR_8], 6);
      }
      FUNC_2("  Quantizer:        %d %d %d %d\n", VAR_10[0], VAR_10[1],
             VAR_10[2], VAR_10[3]);
      FUNC_2("  Filter strength:  %d %d %d %d\n", VAR_11[0],
             VAR_11[1], VAR_11[2], VAR_11[3]);
    }
    if (VAR_6) {
      int VAR_14;
      int VAR_15[3] = {255, 255, 255};
      for (VAR_14 = 0; VAR_14 < 3; ++VAR_14) {
        int VAR_16;
        FUNC_0(VAR_16, 1);
        if (VAR_16) FUNC_0(VAR_15[VAR_14], 8);
      }
      FUNC_2("  Prob segment:     %d %d %d\n",
             VAR_15[0], VAR_15[1], VAR_15[2]);
    }
  }
  return VAR_0;
}
