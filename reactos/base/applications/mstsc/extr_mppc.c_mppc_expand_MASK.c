
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_2__ {int* hist; int roff; } ;
typedef scalar_t__ RD_BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (int*,int ,int) ;

int
FUNC_1(uint8 * VAR_8, uint32 VAR_9, uint8 VAR_10, uint32 * VAR_11, uint32 * VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15;
 uint32 VAR_16 = 0;
 int VAR_17, VAR_18;
 int VAR_19;
 int VAR_20, VAR_21;
 RD_BOOL VAR_22 = VAR_10 & VAR_1 ? VAR_6 : VAR_0;

 uint8 *VAR_23 = VAR_7.hist;

 if ((VAR_10 & VAR_2) == 0)
 {
  *VAR_11 = 0;
  *VAR_12 = VAR_9;
  return 0;
 }

 if ((VAR_10 & VAR_5) != 0)
 {
  VAR_7.roff = 0;
 }

 if ((VAR_10 & VAR_4) != 0)
 {
  FUNC_0(VAR_23, 0, VAR_3);
  VAR_7.roff = 0;
 }

 *VAR_11 = 0;
 *VAR_12 = 0;

 VAR_15 = VAR_7.roff;

 VAR_17 = VAR_15;
 VAR_20 = VAR_17;
 *VAR_11 = VAR_20;
 if (VAR_9 == 0)
  return 0;
 VAR_9 += VAR_16;

 do
 {
  if (VAR_14 == 0)
  {
   if (VAR_16 >= VAR_9)
    break;
   VAR_15 = VAR_8[VAR_16++] << 24;
   VAR_14 = 8;
  }
  if (VAR_15 >= 0)
  {
   if (VAR_14 < 8)
   {
    if (VAR_16 >= VAR_9)
    {
     if (VAR_15 != 0)
      return -1;
     break;
    }
    VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
    VAR_14 += 8;
   }
   if (VAR_17 >= VAR_3)
    return -1;
   VAR_23[VAR_17++] = (((uint32) VAR_15) >> ((uint32) 24));
   VAR_15 <<= 8;
   VAR_14 -= 8;
   continue;
  }
  VAR_15 <<= 1;

  if (--VAR_14 == 0)
  {
   if (VAR_16 >= VAR_9)
    return -1;
   VAR_15 = VAR_8[VAR_16++] << 24;
   VAR_14 = 8;
  }

  if (VAR_15 >= 0)
  {
   if (VAR_14 < 8)
   {
    if (VAR_16 >= VAR_9)
     return -1;
    VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
    VAR_14 += 8;
   }
   if (VAR_17 >= VAR_3)
    return -1;
   VAR_23[VAR_17++] = (uint8) (VAR_15 >> 24 | 0x80);
   VAR_15 <<= 8;
   VAR_14 -= 8;
   continue;
  }



  VAR_15 <<= 1;
  if (--VAR_14 < (VAR_22 ? 3 : 2))
  {
   if (VAR_16 >= VAR_9)
    return -1;
   VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
   VAR_14 += 8;
  }

  if (VAR_22)
  {






   switch (((uint32) VAR_15) >> ((uint32) 29))
   {
    case 7:
     for (; VAR_14 < 9; VAR_14 += 8)
     {
      if (VAR_16 >= VAR_9)
       return -1;
      VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
     }
     VAR_15 <<= 3;
     VAR_18 = ((uint32) VAR_15) >> ((uint32) 26);
     VAR_15 <<= 6;
     VAR_14 -= 9;
     break;

    case 6:
     for (; VAR_14 < 11; VAR_14 += 8)
     {
      if (VAR_16 >= VAR_9)
       return -1;
      VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
     }

     VAR_15 <<= 3;
     VAR_18 = (((uint32) VAR_15) >> ((uint32) 24)) + 64;
     VAR_15 <<= 8;
     VAR_14 -= 11;
     break;

    case 5:
    case 4:
     for (; VAR_14 < 13; VAR_14 += 8)
     {
      if (VAR_16 >= VAR_9)
       return -1;
      VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
     }

     VAR_15 <<= 2;
     VAR_18 = (((uint32) VAR_15) >> ((uint32) 21)) + 320;
     VAR_15 <<= 11;
     VAR_14 -= 13;
     break;

    default:
     for (; VAR_14 < 17; VAR_14 += 8)
     {
      if (VAR_16 >= VAR_9)
       return -1;
      VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
     }

     VAR_15 <<= 1;
     VAR_18 = (((uint32) VAR_15) >> ((uint32) 16)) + 2368;
     VAR_15 <<= 16;
     VAR_14 -= 17;
     break;
   }
  }
  else
  {





   switch (((uint32) VAR_15) >> ((uint32) 30))
   {
    case 3:
     if (VAR_14 < 8)
     {
      if (VAR_16 >= VAR_9)
       return -1;
      VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
      VAR_14 += 8;
     }
     VAR_15 <<= 2;
     VAR_18 = ((uint32) VAR_15) >> ((uint32) 26);
     VAR_15 <<= 6;
     VAR_14 -= 8;
     break;

    case 2:
     for (; VAR_14 < 10; VAR_14 += 8)
     {
      if (VAR_16 >= VAR_9)
       return -1;
      VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
     }

     VAR_15 <<= 2;
     VAR_18 = (((uint32) VAR_15) >> ((uint32) 24)) + 64;
     VAR_15 <<= 8;
     VAR_14 -= 10;
     break;

    default:
     for (; VAR_14 < 14; VAR_14 += 8)
     {
      if (VAR_16 >= VAR_9)
       return -1;
      VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
     }

     VAR_18 = (VAR_15 >> 18) + 320;
     VAR_15 <<= 14;
     VAR_14 -= 14;
     break;
   }
  }
  if (VAR_14 == 0)
  {
   if (VAR_16 >= VAR_9)
    return -1;
   VAR_15 = VAR_8[VAR_16++] << 24;
   VAR_14 = 8;
  }


  VAR_19 = 0;
  if (VAR_15 >= 0)
  {
   VAR_19 = 3;
   VAR_15 <<= 1;
   VAR_14--;
  }
  else
  {
   VAR_21 = VAR_22 ? 14 : 11;
   do
   {
    VAR_15 <<= 1;
    if (--VAR_14 == 0)
    {
     if (VAR_16 >= VAR_9)
      return -1;
     VAR_15 = VAR_8[VAR_16++] << 24;
     VAR_14 = 8;
    }
    if (VAR_15 >= 0)
     break;
    if (--VAR_21 == 0)
    {
     return -1;
    }
   }
   while (1);
   VAR_19 = (VAR_22 ? 16 : 13) - VAR_21;
   VAR_15 <<= 1;
   if (--VAR_14 < VAR_19)
   {
    for (; VAR_14 < VAR_19; VAR_14 += 8)
    {
     if (VAR_16 >= VAR_9)
     {
      return -1;
     }
     VAR_15 |= (VAR_8[VAR_16++] & 0xff) << (24 - VAR_14);
    }
   }

   VAR_21 = VAR_19;
   VAR_19 =
    ((VAR_15 >> (32 - VAR_21)) & (~(-1 << VAR_21))) | (1 <<
              VAR_21);
   VAR_15 <<= VAR_21;
   VAR_14 -= VAR_21;
  }
  if (VAR_17 + VAR_19 >= VAR_3)
  {
   return -1;
  }

  VAR_13 = (VAR_17 - VAR_18) & (VAR_22 ? 65535 : 8191);
  do
  {
   VAR_23[VAR_17++] = VAR_23[VAR_13++];
  }
  while (--VAR_19 != 0);
 }
 while (1);


 VAR_7.roff = VAR_17;

 *VAR_11 = VAR_20;
 *VAR_12 = VAR_17 - VAR_20;

 return 0;
}
