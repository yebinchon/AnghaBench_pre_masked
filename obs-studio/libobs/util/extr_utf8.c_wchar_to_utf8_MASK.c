
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ FUNC_0 (int) ;

size_t FUNC_1(const wchar_t *VAR_9, size_t VAR_10, char *VAR_11,
       size_t VAR_12, int VAR_13)
{
 wchar_t *VAR_14, *VAR_15, VAR_16 = 0;
 unsigned char *VAR_17, *VAR_18, *VAR_19;
 size_t VAR_20, VAR_21;

 if (VAR_9 == ((void*)0) || (VAR_12 == 0 && VAR_11 != ((void*)0)))
  return 0;

 VAR_14 = (wchar_t *)VAR_9;
 VAR_15 = (VAR_10 != 0) ? (VAR_14 + VAR_10) : (wchar_t *)-1;
 VAR_17 = (unsigned char *)VAR_11;
 VAR_18 = VAR_17 + VAR_12;
 VAR_20 = 0;

 for (; VAR_14 < VAR_15; VAR_14++) {
  if (!*VAR_14)
   break;

  if (FUNC_0(*VAR_14) != 0) {
   if ((VAR_13 & VAR_0) == 0)
    return 0;
   else
    continue;
  }

  if (*VAR_14 == VAR_2 && (VAR_13 & VAR_1) != 0)
   continue;

  if (*VAR_14 < 0) {
   if ((VAR_13 & VAR_0) == 0)
    return 0;
   continue;
  } else if (*VAR_14 <= 0x0000007f)
   VAR_21 = 1;
  else if (*VAR_14 <= 0x000007ff)
   VAR_21 = 2;
  else if (*VAR_14 <= 0x0000ffff)
   VAR_21 = 3;
  else if (*VAR_14 <= 0x001fffff)
   VAR_21 = 4;
  else if (*VAR_14 <= 0x03ffffff)
   VAR_21 = 5;
  else
   VAR_21 = 6;

  VAR_20 += VAR_21;

  if (VAR_11 == ((void*)0))
   continue;

  if ((size_t)(VAR_18 - VAR_17) <= VAR_21 - 1)
   return 0;

  VAR_16 = *VAR_14;
  VAR_19 = (unsigned char *)&VAR_16;
  switch (VAR_21) {
  case 1:
   *VAR_17 = VAR_19[0];
   break;

  case 2:
   VAR_17[1] = VAR_3 | (VAR_19[0] & 0x3f);
   VAR_17[0] = VAR_4 | (VAR_19[0] >> 6) | ((VAR_19[1] & 0x07) << 2);
   break;

  case 3:
   VAR_17[2] = VAR_3 | (VAR_19[0] & 0x3f);
   VAR_17[1] = VAR_3 | (VAR_19[0] >> 6) | ((VAR_19[1] & 0x0f) << 2);
   VAR_17[0] = VAR_5 | ((VAR_19[1] & 0xf0) >> 4);
   break;

  case 4:
   VAR_17[3] = VAR_3 | (VAR_19[0] & 0x3f);
   VAR_17[2] = VAR_3 | (VAR_19[0] >> 6) | ((VAR_19[1] & 0x0f) << 2);
   VAR_17[1] = VAR_3 | ((VAR_19[1] & 0xf0) >> 4) |
          ((VAR_19[2] & 0x03) << 4);
   VAR_17[0] = VAR_6 | ((VAR_19[2] & 0x1f) >> 2);
   break;

  case 5:
   VAR_17[4] = VAR_3 | (VAR_19[0] & 0x3f);
   VAR_17[3] = VAR_3 | (VAR_19[0] >> 6) | ((VAR_19[1] & 0x0f) << 2);
   VAR_17[2] = VAR_3 | ((VAR_19[1] & 0xf0) >> 4) |
          ((VAR_19[2] & 0x03) << 4);
   VAR_17[1] = VAR_3 | (VAR_19[2] >> 2);
   VAR_17[0] = VAR_7 | (VAR_19[3] & 0x03);
   break;

  case 6:
   VAR_17[5] = VAR_3 | (VAR_19[0] & 0x3f);
   VAR_17[4] = VAR_3 | (VAR_19[0] >> 6) | ((VAR_19[1] & 0x0f) << 2);
   VAR_17[3] = VAR_3 | (VAR_19[1] >> 4) | ((VAR_19[2] & 0x03) << 4);
   VAR_17[2] = VAR_3 | (VAR_19[2] >> 2);
   VAR_17[1] = VAR_3 | (VAR_19[3] & 0x3f);
   VAR_17[0] = VAR_8 | ((VAR_19[3] & 0x40) >> 6);
   break;
  }






  VAR_17 += VAR_21;
 }

 return VAR_20;
}
