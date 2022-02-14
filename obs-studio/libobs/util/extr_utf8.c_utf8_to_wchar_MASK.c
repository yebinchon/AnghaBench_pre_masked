
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (size_t) ;

size_t FUNC_2(const char *VAR_9, size_t VAR_10, wchar_t *VAR_11,
       size_t VAR_12, int VAR_13)
{
 unsigned char *VAR_14, *VAR_15;
 wchar_t *VAR_16, VAR_17;
 size_t VAR_18, VAR_19, VAR_20, VAR_21;

 if (VAR_9 == ((void*)0) || (VAR_12 == 0 && VAR_11 != ((void*)0)))
  return 0;

 VAR_19 = 0;
 VAR_14 = (unsigned char *)VAR_9;
 VAR_15 = (VAR_10 != 0) ? (VAR_14 + VAR_10) : (unsigned char *)-1;
 VAR_16 = VAR_11 + VAR_12;

 for (; VAR_14 < VAR_15; VAR_14 += VAR_18) {
  if (!*VAR_14)
   break;

  if (FUNC_0(*VAR_14) != 0 && (VAR_13 & VAR_0) == 0)
   return 0;




  VAR_18 = 1;
  if ((*VAR_14 & 0x80) == 0)
   VAR_17 = (wchar_t)*VAR_14;
  else if ((*VAR_14 & 0xe0) == VAR_4) {
   VAR_18 = 2;
   VAR_17 = (wchar_t)(*VAR_14 & 0x1f);
  } else if ((*VAR_14 & 0xf0) == VAR_5) {
   VAR_18 = 3;
   VAR_17 = (wchar_t)(*VAR_14 & 0x0f);
  } else if ((*VAR_14 & 0xf8) == VAR_6) {
   VAR_18 = 4;
   VAR_17 = (wchar_t)(*VAR_14 & 0x07);
  } else if ((*VAR_14 & 0xfc) == VAR_7) {
   VAR_18 = 5;
   VAR_17 = (wchar_t)(*VAR_14 & 0x03);
  } else if ((*VAR_14 & 0xfe) == VAR_8) {
   VAR_18 = 6;
   VAR_17 = (wchar_t)(*VAR_14 & 0x01);
  } else {
   if ((VAR_13 & VAR_0) == 0)
    return 0;
   continue;
  }


  if ((size_t)(VAR_15 - VAR_14) <= VAR_18 - 1) {
   if ((VAR_13 & VAR_0) == 0)
    return 0;
   VAR_18 = 1;
   continue;
  }





  if (VAR_18 > 1) {
   for (VAR_20 = 1; VAR_20 < VAR_18; VAR_20++) {
    if ((VAR_14[VAR_20] & 0xc0) != VAR_3)
     break;
   }
   if (VAR_20 != VAR_18) {
    if ((VAR_13 & VAR_0) == 0)
     return 0;
    VAR_18 = 1;
    continue;
   }
  }

  VAR_19++;

  if (VAR_11 == ((void*)0))
   continue;

  if (VAR_11 >= VAR_16)
   return 0;

  *VAR_11 = 0;
  VAR_21 = 0;
  for (VAR_20 = 1; VAR_20 < VAR_18; VAR_20++) {
   *VAR_11 |= (wchar_t)(VAR_14[VAR_18 - VAR_20] & 0x3f) << VAR_21;
   VAR_21 += 6;
  }
  *VAR_11 |= VAR_17 << VAR_21;

  if (FUNC_1(*VAR_11) != 0) {
   if ((VAR_13 & VAR_0) == 0)
    return 0;
   else {
    VAR_19--;
    VAR_11--;
   }
  } else if (*VAR_11 == VAR_2 && (VAR_13 & VAR_1) != 0) {
   VAR_19--;
   VAR_11--;
  }

  VAR_11++;
 }

 return VAR_19;
}
