
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 char const VAR_2 ;
 void** VAR_3 ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char*,char*,long,int) ;
 int FUNC_3 () ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (long,long,int*,int*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char const*) ;

char *
FUNC_11(const char *VAR_5, const char *VAR_6)
{
 int VAR_7;
 uint32 VAR_8,
    VAR_9,
    VAR_10,
    VAR_11,
    VAR_12,
    VAR_13[2];
 char *VAR_14;
 uint8 *VAR_15;
 static char VAR_16[21];

 if (!VAR_4)
  FUNC_3();






 VAR_15 = (uint8 *) VAR_13;
 while (VAR_15 - (uint8 *) VAR_13 - 8)
 {
  *VAR_15++ = *VAR_5 << 1;
  if (*VAR_5 != '\0')
   VAR_5++;
 }
 if (FUNC_4((char *) VAR_13))
  return ((void*)0);


 if (*VAR_6 == VAR_2)
 {
  if (FUNC_10(VAR_6) < 9)
   FUNC_6(VAR_1,
     (FUNC_7(VAR_0),
      FUNC_8("invalid salt")));

  for (VAR_7 = 1, VAR_8 = 0L; VAR_7 < 5; VAR_7++)
   VAR_8 |= FUNC_1(VAR_6[VAR_7]) << (VAR_7 - 1) * 6;

  for (VAR_7 = 5, VAR_9 = 0L; VAR_7 < 9; VAR_7++)
   VAR_9 |= FUNC_1(VAR_6[VAR_7]) << (VAR_7 - 5) * 6;

  while (*VAR_5)
  {



   if (FUNC_2((char *) VAR_13, (char *) VAR_13, 0L, 1))
    return ((void*)0);




   VAR_15 = (uint8 *) VAR_13;
   while (VAR_15 - (uint8 *) VAR_13 - 8 && *VAR_5)
    *VAR_15++ ^= *VAR_5++ << 1;

   if (FUNC_4((char *) VAR_13))
    return ((void*)0);
  }
  FUNC_0(VAR_16, VAR_6, 10);







  VAR_14 = VAR_16 + FUNC_10(VAR_16);
 }
 else

 {




  VAR_8 = 25;

  if (FUNC_10(VAR_6) < 2)
   FUNC_6(VAR_1,
     (FUNC_7(VAR_0),
      FUNC_8("invalid salt")));

  VAR_9 = (FUNC_1(VAR_6[1]) << 6)
   | FUNC_1(VAR_6[0]);

  VAR_16[0] = VAR_6[0];






  VAR_16[1] = VAR_6[1] ? VAR_6[1] : VAR_16[0];

  VAR_14 = VAR_16 + 2;
 }
 FUNC_9(VAR_9);




 if (FUNC_5(0L, 0L, &VAR_11, &VAR_12, VAR_8))
  return ((void*)0);




 VAR_10 = (VAR_11 >> 8);
 *VAR_14++ = VAR_3[(VAR_10 >> 18) & 0x3f];
 *VAR_14++ = VAR_3[(VAR_10 >> 12) & 0x3f];
 *VAR_14++ = VAR_3[(VAR_10 >> 6) & 0x3f];
 *VAR_14++ = VAR_3[VAR_10 & 0x3f];

 VAR_10 = (VAR_11 << 16) | ((VAR_12 >> 16) & 0xffff);
 *VAR_14++ = VAR_3[(VAR_10 >> 18) & 0x3f];
 *VAR_14++ = VAR_3[(VAR_10 >> 12) & 0x3f];
 *VAR_14++ = VAR_3[(VAR_10 >> 6) & 0x3f];
 *VAR_14++ = VAR_3[VAR_10 & 0x3f];

 VAR_10 = VAR_12 << 2;
 *VAR_14++ = VAR_3[(VAR_10 >> 12) & 0x3f];
 *VAR_14++ = VAR_3[(VAR_10 >> 6) & 0x3f];
 *VAR_14++ = VAR_3[VAR_10 & 0x3f];
 *VAR_14 = 0;

 return VAR_16;
}
