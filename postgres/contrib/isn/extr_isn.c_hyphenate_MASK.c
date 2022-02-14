
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static unsigned
FUNC_1(char *VAR_0, char *VAR_1, const char *(*VAR_2)[2], const unsigned VAR_3[10][2])
{
 unsigned VAR_4 = 0;
 const char *VAR_5,
      *VAR_6,
      *VAR_7;
 char *VAR_8,
      *VAR_9,
      *VAR_10;
 unsigned VAR_11,
    VAR_12,
    VAR_13,
    VAR_14;
 bool VAR_15,
    VAR_16;


 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  while (*VAR_1)
  {
   *VAR_0++ = *VAR_1++;
   VAR_4++;
  }
  *VAR_0 = '\0';
  return (VAR_4 + 1);
 }



 VAR_11 = *VAR_1 - '0';
 VAR_12 = VAR_13 = VAR_3[VAR_11][0];
 VAR_12 += VAR_3[VAR_11][1];
 VAR_13--;

 VAR_14 = (VAR_12 - VAR_13) / 2;
 if (VAR_14 == 0)
  return 0;
 VAR_11 = VAR_13 + VAR_14;

 VAR_8 = VAR_1;
 VAR_15 = VAR_16 = 0;
 VAR_5 = VAR_2[VAR_11][0];
 VAR_6 = VAR_2[VAR_11][1];
 do
 {
  if ((VAR_15 || *VAR_8 >= *VAR_5) && (VAR_16 || *VAR_8 <= *VAR_6))
  {
   if (*VAR_8 > *VAR_5)
    VAR_15 = 1;
   if (*VAR_8 < *VAR_6)
    VAR_16 = 1;
   if (VAR_15 && VAR_16)
    break;

   VAR_8++, VAR_5++, VAR_6++;
   if (!(*VAR_5 && *VAR_6 && *VAR_8))
    break;
   if (!FUNC_0((unsigned char) *VAR_5))
    VAR_5++, VAR_6++;
  }
  else
  {




   if (*VAR_8 < *VAR_5 && !VAR_15)
    VAR_12 = VAR_11;
   else
    VAR_13 = VAR_11;

   VAR_14 = (VAR_12 - VAR_13) / 2;
   VAR_11 = VAR_13 + VAR_14;


   VAR_8 = VAR_1;
   VAR_15 = VAR_16 = 0;
   VAR_5 = VAR_2[VAR_11][0];
   VAR_6 = VAR_2[VAR_11][1];
  }
 } while (VAR_14);

 if (VAR_14)
 {
  VAR_9 = VAR_0;
  VAR_10 = VAR_1;
  VAR_7 = VAR_2[VAR_11][0];
  while (*VAR_7 && *VAR_10)
  {
   if (*VAR_7++ != '-')
    *VAR_9++ = *VAR_10++;
   else
    *VAR_9++ = '-';
   VAR_4++;
  }
  *VAR_9++ = '-';
  *VAR_9 = *VAR_10;
  return (VAR_4 + 1);
 }
 return VAR_4;
}
