
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int histo_stack_1 ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int,int,int*,int*,int * const,int,int const,int const,int const,int,int,int,int*) ;
 float VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int const,int,int const* const,int * const,int) ;
 float FUNC_3 (int const**,int const**) ;
 int FUNC_4 (int**,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int*,int const* const,int) ;
 int FUNC_8 (int**,int ,int) ;

__attribute__((used)) static int FUNC_9(int VAR_3, int VAR_4,
                                   int VAR_5, int VAR_6, int VAR_7,
                                   int VAR_8[4][256],
                                   uint32_t* const VAR_9,
                                   const uint32_t* const VAR_10,
                                   int VAR_11,
                                   int VAR_12, int VAR_13,
                                   const uint32_t* const VAR_14) {
  const int VAR_15 = 14;
  const int VAR_16 = VAR_5 << VAR_7;
  const int VAR_17 = VAR_6 << VAR_7;
  const int VAR_18 = 1 << VAR_7;
  const int VAR_19 = FUNC_0(VAR_18, VAR_4 - VAR_17);
  const int VAR_20 = FUNC_0(VAR_18, VAR_3 - VAR_16);

  const int VAR_21 = (VAR_16 > 0);


  const int VAR_22 = VAR_16 - VAR_21;



  const int VAR_23 = FUNC_5(VAR_3, VAR_7);

  const int VAR_24 = (VAR_5 > 0) ?
      (VAR_14[VAR_6 * VAR_23 + VAR_5 - 1] >> 8) & 0xff : 0xff;
  const int VAR_25 = (VAR_6 > 0) ?
      (VAR_14[(VAR_6 - 1) * VAR_23 + VAR_5] >> 8) & 0xff : 0xff;



  uint32_t* VAR_26 = VAR_9;
  uint32_t* VAR_27 = VAR_26 + VAR_3 + 1;
  uint8_t* const VAR_28 = (uint8_t*)(VAR_27 + VAR_3 + 1);
  float VAR_29 = VAR_0;
  int VAR_30 = 0;
  int VAR_31;
  int VAR_32[4][256];
  int VAR_33[4][256];

  int (*VAR_34)[256] = VAR_32;
  int (*VAR_35)[256] = VAR_33;
  int VAR_36, VAR_37;
  uint32_t VAR_38[1 << VAR_1];
  FUNC_6(VAR_7 <= VAR_1);
  FUNC_6(VAR_20 <= (1 << VAR_1));

  for (VAR_31 = 0; VAR_31 < VAR_15; ++VAR_31) {
    float VAR_39;
    int VAR_40;
    FUNC_8(VAR_34, 0, sizeof(VAR_32));
    if (VAR_17 > 0) {




      FUNC_7(VAR_27 + VAR_22,
             VAR_10 + (VAR_17 - 1) * VAR_3 + VAR_22,
             sizeof(*VAR_10) * (VAR_20 + VAR_21 + 1));
    }
    for (VAR_40 = 0; VAR_40 < VAR_19; ++VAR_40) {
      const int VAR_41 = VAR_17 + VAR_40;
      int VAR_42;
      uint32_t* VAR_43 = VAR_26;
      VAR_26 = VAR_27;
      VAR_27 = VAR_43;




      FUNC_7(VAR_27 + VAR_22,
             VAR_10 + VAR_41 * VAR_3 + VAR_22,
             sizeof(*VAR_10) * (VAR_20 + VAR_21 + (VAR_41 + 1 < VAR_4)));







      FUNC_1(VAR_3, VAR_4, VAR_26, VAR_27, VAR_28, VAR_31,
                  VAR_16, VAR_16 + VAR_20, VAR_41, VAR_11, VAR_12,
                  VAR_13, VAR_38);
      for (VAR_42 = 0; VAR_42 < VAR_20; ++VAR_42) {
        FUNC_4(VAR_34, VAR_38[VAR_42]);
      }
    }
    VAR_39 = FUNC_3(
        (const int (*)[256])VAR_8, (const int (*)[256])VAR_34);

    if (VAR_31 == VAR_24) VAR_39 -= VAR_2;
    if (VAR_31 == VAR_25) VAR_39 -= VAR_2;

    if (VAR_39 < VAR_29) {
      int (*VAR_44)[256] = VAR_34;
      VAR_34 = VAR_35;
      VAR_35 = VAR_44;
      VAR_29 = VAR_39;
      VAR_30 = VAR_31;
    }
  }

  for (VAR_36 = 0; VAR_36 < 4; VAR_36++) {
    for (VAR_37 = 0; VAR_37 < 256; VAR_37++) {
      VAR_8[VAR_36][VAR_37] += VAR_35[VAR_36][VAR_37];
    }
  }

  return VAR_30;
}
