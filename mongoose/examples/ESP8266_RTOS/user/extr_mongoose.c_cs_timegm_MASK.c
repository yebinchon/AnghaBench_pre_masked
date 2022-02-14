
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; int tm_year; scalar_t__ tm_sec; int tm_min; int tm_hour; int const tm_mday; } ;
typedef scalar_t__ int64_t ;



double FUNC_0(const struct tm *VAR_0) {

  static const int VAR_1[12] = {0, 31, 59, 90, 120, 151,
                                    181, 212, 243, 273, 304, 334};


  int VAR_2 = VAR_0->tm_mon % 12;
  int VAR_3 = VAR_0->tm_year + VAR_0->tm_mon / 12;
  int VAR_4;
  int64_t VAR_5;

  if (VAR_2 < 0) {
    VAR_2 += 12;
    --VAR_3;
  }


  VAR_4 = (VAR_2 > 1) ? VAR_3 + 1 : VAR_3;

  VAR_5 =
      VAR_0->tm_sec
      +
      60 *
          (VAR_0->tm_min
           +
           60 * (VAR_0->tm_hour
                 +
                 24 * (VAR_1[VAR_2] + VAR_0->tm_mday - 1
                       + 365 * (VAR_3 - 70)
                       + (VAR_4 - 69) / 4
                       - (VAR_4 - 1) / 100
                       + (VAR_4 + 299) / 400)));
  return VAR_5 < 0 ? -1 : (double) VAR_5;
}
