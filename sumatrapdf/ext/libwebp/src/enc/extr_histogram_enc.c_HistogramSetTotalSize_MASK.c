
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VP8LHistogramSet ;
typedef int VP8LHistogram ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1(int VAR_1, int VAR_2) {
  const int VAR_3 = FUNC_0(VAR_2);
  return (sizeof(VP8LHistogramSet) + VAR_1 * (sizeof(VP8LHistogram*) +
          VAR_3 + VAR_0));
}
