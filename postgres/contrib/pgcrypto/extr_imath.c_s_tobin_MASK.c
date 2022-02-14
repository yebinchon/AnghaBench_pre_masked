
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_size ;
typedef int mp_result ;
typedef int mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static mp_result
FUNC_3(mp_int VAR_3, unsigned char *VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7 = 0,
    VAR_8 = *VAR_5;
 mp_size VAR_9 = FUNC_1(VAR_3);
 mp_digit *VAR_10 = FUNC_0(VAR_3);

 while (VAR_9 > 0 && VAR_7 < VAR_8)
 {
  mp_digit VAR_11 = *VAR_10++;
  int VAR_12;

  for (VAR_12 = sizeof(mp_digit); VAR_12 > 0 && VAR_7 < VAR_8; --VAR_12)
  {
   VAR_4[VAR_7++] = (unsigned char) VAR_11;
   VAR_11 >>= VAR_0;


   if (VAR_11 == 0 && VAR_9 == 1)
    VAR_12 = 0;
  }


  if (VAR_12 > 0)
   break;

  --VAR_9;
 }

 if (VAR_6 != 0 && (VAR_4[VAR_7 - 1] >> (VAR_0 - 1)))
 {
  if (VAR_7 < VAR_8)
  {
   VAR_4[VAR_7++] = 0;
  }
  else
  {
   VAR_9 = 1;
  }
 }


 FUNC_2(VAR_4, VAR_7);


 *VAR_5 = VAR_7;

 return (VAR_9 == 0) ? VAR_1 : VAR_2;
}
