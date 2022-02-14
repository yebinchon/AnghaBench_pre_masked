
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int Datum ;


 int FUNC_0 (int) ;
 uintptr_t VAR_0 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

Datum
FUNC_3(const unsigned char *VAR_1, int VAR_2,
      uint64 VAR_3)
{
 uint32 VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;


 VAR_7 = VAR_2;
 VAR_4 = VAR_5 = VAR_6 = 0x9e3779b9 + VAR_7 + 3923095;


 if (VAR_3 != 0)
 {





  VAR_4 += (uint32) (VAR_3 >> 32);
  VAR_5 += (uint32) VAR_3;
  FUNC_2(VAR_4, VAR_5, VAR_6);
 }


 if (((uintptr_t) VAR_1 & VAR_0) == 0)
 {

  const uint32 *VAR_8 = (const uint32 *) VAR_1;


  while (VAR_7 >= 12)
  {
   VAR_4 += VAR_8[0];
   VAR_5 += VAR_8[1];
   VAR_6 += VAR_8[2];
   FUNC_2(VAR_4, VAR_5, VAR_6);
   VAR_8 += 3;
   VAR_7 -= 12;
  }


  VAR_1 = (const unsigned char *) VAR_8;
  switch (VAR_7)
  {
   case 11:
    VAR_6 += ((uint32) VAR_1[10] << 24);

   case 10:
    VAR_6 += ((uint32) VAR_1[9] << 16);

   case 9:
    VAR_6 += ((uint32) VAR_1[8] << 8);

   case 8:

    VAR_5 += VAR_8[1];
    VAR_4 += VAR_8[0];
    break;
   case 7:
    VAR_5 += ((uint32) VAR_1[6] << 16);

   case 6:
    VAR_5 += ((uint32) VAR_1[5] << 8);

   case 5:
    VAR_5 += VAR_1[4];

   case 4:
    VAR_4 += VAR_8[0];
    break;
   case 3:
    VAR_4 += ((uint32) VAR_1[2] << 16);

   case 2:
    VAR_4 += ((uint32) VAR_1[1] << 8);

   case 1:
    VAR_4 += VAR_1[0];

  }

 }
 else
 {



  while (VAR_7 >= 12)
  {





   VAR_4 += (VAR_1[0] + ((uint32) VAR_1[1] << 8) + ((uint32) VAR_1[2] << 16) + ((uint32) VAR_1[3] << 24));
   VAR_5 += (VAR_1[4] + ((uint32) VAR_1[5] << 8) + ((uint32) VAR_1[6] << 16) + ((uint32) VAR_1[7] << 24));
   VAR_6 += (VAR_1[8] + ((uint32) VAR_1[9] << 8) + ((uint32) VAR_1[10] << 16) + ((uint32) VAR_1[11] << 24));

   FUNC_2(VAR_4, VAR_5, VAR_6);
   VAR_1 += 12;
   VAR_7 -= 12;
  }
  switch (VAR_7)
  {
   case 11:
    VAR_6 += ((uint32) VAR_1[10] << 24);

   case 10:
    VAR_6 += ((uint32) VAR_1[9] << 16);

   case 9:
    VAR_6 += ((uint32) VAR_1[8] << 8);

   case 8:

    VAR_5 += ((uint32) VAR_1[7] << 24);

   case 7:
    VAR_5 += ((uint32) VAR_1[6] << 16);

   case 6:
    VAR_5 += ((uint32) VAR_1[5] << 8);

   case 5:
    VAR_5 += VAR_1[4];

   case 4:
    VAR_4 += ((uint32) VAR_1[3] << 24);

   case 3:
    VAR_4 += ((uint32) VAR_1[2] << 16);

   case 2:
    VAR_4 += ((uint32) VAR_1[1] << 8);

   case 1:
    VAR_4 += VAR_1[0];

  }

 }

 FUNC_1(VAR_4, VAR_5, VAR_6);


 FUNC_0(((uint64) VAR_5 << 32) | VAR_6);
}
