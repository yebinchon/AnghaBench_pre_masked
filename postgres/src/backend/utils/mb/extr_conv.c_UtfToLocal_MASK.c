
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* utf_local_conversion_func ) (int) ;
typedef int uint32 ;
struct TYPE_5__ {int code; } ;
typedef TYPE_1__ pg_utf_to_local_combined ;
typedef int pg_mb_radix_tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int*,TYPE_1__ const*,int,int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int const*,int,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_7 (unsigned char const*,int) ;
 int FUNC_8 (unsigned char const*) ;
 int FUNC_9 (int ,char const*,int) ;
 int FUNC_10 (int ,int,char const*,int) ;
 unsigned char* FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (int) ;

void
FUNC_13(const unsigned char *VAR_4, int VAR_5,
     unsigned char *VAR_6,
     const pg_mb_radix_tree *VAR_7,
     const pg_utf_to_local_combined *VAR_8, int VAR_9,
     utf_local_conversion_func VAR_10,
     int VAR_11)
{
 uint32 VAR_12;
 int VAR_13;
 const pg_utf_to_local_combined *VAR_14;

 if (!FUNC_0(VAR_11))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("invalid encoding number: %d", VAR_11)));

 for (; VAR_5 > 0; VAR_5 -= VAR_13)
 {
  unsigned char VAR_15 = 0;
  unsigned char VAR_16 = 0;
  unsigned char VAR_17 = 0;
  unsigned char VAR_18 = 0;


  if (*VAR_4 == '\0')
   break;

  VAR_13 = FUNC_8(VAR_4);
  if (VAR_5 < VAR_13)
   break;

  if (!FUNC_7(VAR_4, VAR_13))
   break;

  if (VAR_13 == 1)
  {

   *VAR_6++ = *VAR_4++;
   continue;
  }


  if (VAR_13 == 2)
  {
   VAR_17 = *VAR_4++;
   VAR_18 = *VAR_4++;
  }
  else if (VAR_13 == 3)
  {
   VAR_16 = *VAR_4++;
   VAR_17 = *VAR_4++;
   VAR_18 = *VAR_4++;
  }
  else if (VAR_13 == 4)
  {
   VAR_15 = *VAR_4++;
   VAR_16 = *VAR_4++;
   VAR_17 = *VAR_4++;
   VAR_18 = *VAR_4++;
  }
  else
  {
   FUNC_2(VAR_1, "unsupported character length %d", VAR_13);
   VAR_12 = 0;
  }
  VAR_12 = (VAR_15 << 24 | VAR_16 << 16 | VAR_17 << 8 | VAR_18);


  if (VAR_8 && VAR_5 > VAR_13)
  {
   const unsigned char *VAR_19 = VAR_4;
   int VAR_20 = VAR_5;
   int VAR_21 = VAR_13;


   VAR_5 -= VAR_13;

   VAR_13 = FUNC_8(VAR_4);
   if (VAR_5 < VAR_13)
    break;

   if (!FUNC_7(VAR_4, VAR_13))
    break;


   if (VAR_13 > 1)
   {
    uint32 VAR_22;
    uint32 VAR_23[2];

    if (VAR_13 == 2)
    {
     VAR_22 = *VAR_4++ << 8;
     VAR_22 |= *VAR_4++;
    }
    else if (VAR_13 == 3)
    {
     VAR_22 = *VAR_4++ << 16;
     VAR_22 |= *VAR_4++ << 8;
     VAR_22 |= *VAR_4++;
    }
    else if (VAR_13 == 4)
    {
     VAR_22 = *VAR_4++ << 24;
     VAR_22 |= *VAR_4++ << 16;
     VAR_22 |= *VAR_4++ << 8;
     VAR_22 |= *VAR_4++;
    }
    else
    {
     FUNC_2(VAR_1, "unsupported character length %d", VAR_13);
     VAR_22 = 0;
    }

    VAR_23[0] = VAR_12;
    VAR_23[1] = VAR_22;

    VAR_14 = FUNC_1(VAR_23, VAR_8, VAR_9,
        sizeof(pg_utf_to_local_combined), VAR_3);

    if (VAR_14)
    {
     VAR_6 = FUNC_11(VAR_6, VAR_14->code);
     continue;
    }
   }


   VAR_4 = VAR_19;
   VAR_5 = VAR_20;
   VAR_13 = VAR_21;
  }


  if (VAR_7)
  {
   uint32 VAR_24 = FUNC_6(VAR_7, VAR_13, VAR_15, VAR_16, VAR_17, VAR_18);

   if (VAR_24)
   {
    VAR_6 = FUNC_11(VAR_6, VAR_24);
    continue;
   }
  }


  if (VAR_10)
  {
   uint32 VAR_25 = (*VAR_10) (VAR_12);

   if (VAR_25)
   {
    VAR_6 = FUNC_11(VAR_6, VAR_25);
    continue;
   }
  }


  FUNC_10(VAR_2, VAR_11,
           (const char *) (VAR_4 - VAR_13), VAR_5);
 }


 if (VAR_5 > 0)
  FUNC_9(VAR_2, (const char *) VAR_4, VAR_5);

 *VAR_6 = '\0';
}
