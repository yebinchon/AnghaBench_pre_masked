
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WebPOutputFileFormat ;
typedef int WebPDecBuffer ;
typedef int W_CHAR ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int * FUNC_1 (char const* const,char*) ;
 int FUNC_2 (int ,char*,int const*) ;
 int FUNC_3 (char const* const,char*) ;
 int FUNC_4 (int *,int const* const) ;
 int FUNC_5 (int *,int const* const) ;
 int FUNC_6 (int *,int const* const) ;
 int FUNC_7 (int *,int const* const) ;
 int FUNC_8 (int *,int const* const) ;
 int FUNC_9 (char const* const,int const,...) ;
 int FUNC_10 (int *,int const* const) ;
 int FUNC_11 (int *,int const* const) ;
 int FUNC_12 (int *,int const* const) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;

int FUNC_14(const WebPDecBuffer* const VAR_23,
                  WebPOutputFileFormat VAR_24,
                  const char* const VAR_25) {
  FILE* VAR_26 = ((void*)0);
  int VAR_27 = 1;
  const int VAR_28 =
      (VAR_25 != ((void*)0)) && !FUNC_3(VAR_25, "-");
  int VAR_29 = 1;

  if (VAR_23 == ((void*)0) || VAR_25 == ((void*)0)) return 0;





  if (VAR_27) {
    VAR_26 = VAR_28 ? FUNC_0(VAR_22)
                      : FUNC_1(VAR_25, "wb");
    if (VAR_26 == ((void*)0)) {
      FUNC_2(VAR_21, "Error opening output file %s\n",
               (const W_CHAR*)VAR_25);
      return 0;
    }
  }

  if (VAR_24 == VAR_8 ||
      VAR_24 == VAR_12 || VAR_24 == VAR_4 || VAR_24 == VAR_1 ||
      VAR_24 == VAR_19 || VAR_24 == VAR_18 || VAR_24 == VAR_2) {



    VAR_29 &= FUNC_9(VAR_26, VAR_23);

  } else if (VAR_24 == VAR_6) {
    VAR_29 &= FUNC_7(VAR_26, VAR_23);
  } else if (VAR_24 == VAR_9 || VAR_24 == VAR_11 || VAR_24 == VAR_3) {
    VAR_29 &= FUNC_10(VAR_26, VAR_23);
  } else if (VAR_24 == VAR_13 || VAR_24 == VAR_14 || VAR_24 == VAR_20) {
    VAR_29 &= FUNC_4(VAR_26, VAR_23);
  } else if (VAR_24 == VAR_5) {
    VAR_29 &= FUNC_6(VAR_26, VAR_23);
  } else if (VAR_24 == VAR_15) {
    VAR_29 &= FUNC_11(VAR_26, VAR_23);
  } else if (VAR_24 == VAR_10) {
    VAR_29 &= FUNC_12(VAR_26, VAR_23);
  } else if (VAR_24 == VAR_7 || VAR_24 == VAR_16 || VAR_24 == VAR_17) {
    VAR_29 &= FUNC_8(VAR_26, VAR_23);
  } else if (VAR_24 == VAR_0) {
    VAR_29 &= FUNC_5(VAR_26, VAR_23);
  }
  if (VAR_26 != ((void*)0) && VAR_26 != VAR_22) {
    FUNC_13(VAR_26);
  }
  return VAR_29;
}
