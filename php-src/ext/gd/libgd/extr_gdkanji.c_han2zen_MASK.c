
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2 (int *VAR_2, int *VAR_3)
{
  int VAR_4 = *VAR_2;
  int VAR_5 = VAR_0;
  int VAR_6 = VAR_0;
  int VAR_7[][2] =
  {
    {129, 66},
    {129, 117},
    {129, 118},
    {129, 65},
    {129, 69},
    {131, 146},
    {131, 64},
    {131, 66},
    {131, 68},
    {131, 70},
    {131, 72},
    {131, 131},
    {131, 133},
    {131, 135},
    {131, 98},
    {129, 91},
    {131, 65},
    {131, 67},
    {131, 69},
    {131, 71},
    {131, 73},
    {131, 74},
    {131, 76},
    {131, 78},
    {131, 80},
    {131, 82},
    {131, 84},
    {131, 86},
    {131, 88},
    {131, 90},
    {131, 92},
    {131, 94},
    {131, 96},
    {131, 99},
    {131, 101},
    {131, 103},
    {131, 105},
    {131, 106},
    {131, 107},
    {131, 108},
    {131, 109},
    {131, 110},
    {131, 113},
    {131, 116},
    {131, 119},
    {131, 122},
    {131, 125},
    {131, 126},
    {131, 128},
    {131, 129},
    {131, 130},
    {131, 132},
    {131, 134},
    {131, 136},
    {131, 137},
    {131, 138},
    {131, 139},
    {131, 140},
    {131, 141},
    {131, 143},
    {131, 147},
    {129, 74},
    {129, 75}
  };

  if (*VAR_3 == 222 && FUNC_0 (*VAR_2))
    VAR_5 = VAR_1;
  else if (*VAR_3 == 223 && FUNC_1 (*VAR_2))
    VAR_6 = VAR_1;

  *VAR_2 = VAR_7[VAR_4 - 161][0];
  *VAR_3 = VAR_7[VAR_4 - 161][1];

  if (VAR_5)
    {
      if ((*VAR_3 >= 74 && *VAR_3 <= 103) || (*VAR_3 >= 110 && *VAR_3 <= 122))
 (*VAR_3)++;
      else if (*VAR_3 == 131 || *VAR_3 == 69)
 *VAR_3 = 148;
    }
  else if (VAR_6 && *VAR_3 >= 110 && *VAR_3 <= 122)
    (*VAR_3) += 2;
}
