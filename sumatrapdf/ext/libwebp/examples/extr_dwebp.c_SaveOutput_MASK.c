
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WebPOutputFileFormat ;
typedef int WebPDecBuffer ;
typedef int W_CHAR ;
typedef int Stopwatch ;


 double FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int const*) ;
 int FUNC_3 (char const* const,char*) ;
 int FUNC_4 (int const* const,int ,char const* const) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_6(const WebPDecBuffer* const VAR_3,
                      WebPOutputFileFormat VAR_4, const char* const VAR_5) {
  const int VAR_6 = (VAR_5 != ((void*)0)) && !FUNC_3(VAR_5, "-");
  int VAR_7 = 1;
  Stopwatch VAR_8;

  if (VAR_2) {
    FUNC_1(&VAR_8);
  }
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);

  if (VAR_7) {
    if (!VAR_0) {
      if (VAR_6) {
        FUNC_5(VAR_1, "Saved to stdout\n");
      } else {
        FUNC_2(VAR_1, "Saved file %s\n", (const W_CHAR*)VAR_5);
      }
    }
    if (VAR_2) {
      const double VAR_9 = FUNC_0(&VAR_8);
      FUNC_5(VAR_1, "Time to write output: %.3fs\n", VAR_9);
    }
  } else {
    if (VAR_6) {
      FUNC_5(VAR_1, "Error writing to stdout !!\n");
    } else {
      FUNC_2(VAR_1, "Error writing file %s !!\n", (const W_CHAR*)VAR_5);
    }
  }
  return VAR_7;
}
