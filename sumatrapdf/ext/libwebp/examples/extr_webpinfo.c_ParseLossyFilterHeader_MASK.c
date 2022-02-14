
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
 int FUNC_1 (char*,int) ;

__attribute__((used)) static WebPInfoStatus FUNC_2(const WebPInfo* const VAR_1,
                                             const uint8_t* const VAR_2,
                                             size_t VAR_3,
                                             uint64_t* const VAR_4) {
  int VAR_5, VAR_6, VAR_7, VAR_8;
  FUNC_0(VAR_5, 1);
  FUNC_0(VAR_6, 6);
  FUNC_0(VAR_7, 3);
  FUNC_0(VAR_8, 1);
  FUNC_1("  Simple filter:    %d\n", VAR_5);
  FUNC_1("  Level:            %d\n", VAR_6);
  FUNC_1("  Sharpness:        %d\n", VAR_7);
  FUNC_1("  Use lf delta:     %d\n", VAR_8);
  if (VAR_8) {
    int VAR_9;
    FUNC_0(VAR_9, 1);
    FUNC_1("  Update lf delta:  %d\n", VAR_9);
    if (VAR_9) {
      int VAR_10;
      for (VAR_10 = 0; VAR_10 < 4 + 4; ++VAR_10) {
        int VAR_11;
        FUNC_0(VAR_11, 1);
        if (VAR_11) FUNC_0(VAR_11, 7);
      }
    }
  }
  return VAR_0;
}
