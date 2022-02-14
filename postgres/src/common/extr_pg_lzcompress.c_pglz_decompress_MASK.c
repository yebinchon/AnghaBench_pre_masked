
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;


 int FUNC_0 (int,int) ;

int32
FUNC_1(const char *VAR_0, int32 VAR_1, char *VAR_2,
    int32 VAR_3, bool VAR_4)
{
 const unsigned char *VAR_5;
 const unsigned char *VAR_6;
 unsigned char *VAR_7;
 unsigned char *VAR_8;

 VAR_5 = (const unsigned char *) VAR_0;
 VAR_6 = ((const unsigned char *) VAR_0) + VAR_1;
 VAR_7 = (unsigned char *) VAR_2;
 VAR_8 = VAR_7 + VAR_3;

 while (VAR_5 < VAR_6 && VAR_7 < VAR_8)
 {




  unsigned char VAR_9 = *VAR_5++;
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < 8 && VAR_5 < VAR_6 && VAR_7 < VAR_8; VAR_10++)
  {

   if (VAR_9 & 1)
   {







    int32 VAR_11;
    int32 VAR_12;

    VAR_11 = (VAR_5[0] & 0x0f) + 3;
    VAR_12 = ((VAR_5[0] & 0xf0) << 4) | VAR_5[1];
    VAR_5 += 2;
    if (VAR_11 == 18)
     VAR_11 += *VAR_5++;







    VAR_11 = FUNC_0(VAR_11, VAR_8 - VAR_7);
    while (VAR_11--)
    {
     *VAR_7 = VAR_7[-VAR_12];
     VAR_7++;
    }
   }
   else
   {




    *VAR_7++ = *VAR_5++;
   }




   VAR_9 >>= 1;
  }
 }






 if (VAR_4 && (VAR_7 != VAR_8 || VAR_5 != VAR_6))
  return -1;




 return (char *) VAR_7 - VAR_2;
}
