
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int Datum ;


 uintptr_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

Datum
FUNC_3(const unsigned char *VAR_1, int VAR_2)
{
 uint32 VAR_3,
    VAR_4,
    VAR_5,
    VAR_6;


 VAR_6 = VAR_2;
 VAR_3 = VAR_4 = VAR_5 = 0x9e3779b9 + VAR_6 + 3923095;


 if (((uintptr_t) VAR_1 & VAR_0) == 0)
 {

  const uint32 *VAR_7 = (const uint32 *) VAR_1;


  while (VAR_6 >= 12)
  {
   VAR_3 += VAR_7[0];
   VAR_4 += VAR_7[1];
   VAR_5 += VAR_7[2];
   FUNC_2(VAR_3, VAR_4, VAR_5);
   VAR_7 += 3;
   VAR_6 -= 12;
  }


  VAR_1 = (const unsigned char *) VAR_7;
  switch (VAR_6)
  {
   case 11:
    VAR_5 += ((uint32) VAR_1[10] << 24);

   case 10:
    VAR_5 += ((uint32) VAR_1[9] << 16);

   case 9:
    VAR_5 += ((uint32) VAR_1[8] << 8);

   case 8:

    VAR_4 += VAR_7[1];
    VAR_3 += VAR_7[0];
    break;
   case 7:
    VAR_4 += ((uint32) VAR_1[6] << 16);

   case 6:
    VAR_4 += ((uint32) VAR_1[5] << 8);

   case 5:
    VAR_4 += VAR_1[4];

   case 4:
    VAR_3 += VAR_7[0];
    break;
   case 3:
    VAR_3 += ((uint32) VAR_1[2] << 16);

   case 2:
    VAR_3 += ((uint32) VAR_1[1] << 8);

   case 1:
    VAR_3 += VAR_1[0];

  }

 }
 else
 {



  while (VAR_6 >= 12)
  {





   VAR_3 += (VAR_1[0] + ((uint32) VAR_1[1] << 8) + ((uint32) VAR_1[2] << 16) + ((uint32) VAR_1[3] << 24));
   VAR_4 += (VAR_1[4] + ((uint32) VAR_1[5] << 8) + ((uint32) VAR_1[6] << 16) + ((uint32) VAR_1[7] << 24));
   VAR_5 += (VAR_1[8] + ((uint32) VAR_1[9] << 8) + ((uint32) VAR_1[10] << 16) + ((uint32) VAR_1[11] << 24));

   FUNC_2(VAR_3, VAR_4, VAR_5);
   VAR_1 += 12;
   VAR_6 -= 12;
  }
  switch (VAR_6)
  {
   case 11:
    VAR_5 += ((uint32) VAR_1[10] << 24);

   case 10:
    VAR_5 += ((uint32) VAR_1[9] << 16);

   case 9:
    VAR_5 += ((uint32) VAR_1[8] << 8);

   case 8:

    VAR_4 += ((uint32) VAR_1[7] << 24);

   case 7:
    VAR_4 += ((uint32) VAR_1[6] << 16);

   case 6:
    VAR_4 += ((uint32) VAR_1[5] << 8);

   case 5:
    VAR_4 += VAR_1[4];

   case 4:
    VAR_3 += ((uint32) VAR_1[3] << 24);

   case 3:
    VAR_3 += ((uint32) VAR_1[2] << 16);

   case 2:
    VAR_3 += ((uint32) VAR_1[1] << 8);

   case 1:
    VAR_3 += VAR_1[0];

  }

 }

 FUNC_1(VAR_3, VAR_4, VAR_5);


 return FUNC_0(VAR_5);
}
