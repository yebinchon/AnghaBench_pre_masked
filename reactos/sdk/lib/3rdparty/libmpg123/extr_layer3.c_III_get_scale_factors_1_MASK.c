
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gr_info_s {size_t scalefac_compress; scalar_t__ part2_3_length; int block_type; int scfsi; scalar_t__ mixed_block_flag; } ;
typedef int mpg123_handle ;


 void* FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(mpg123_handle *VAR_0, int *VAR_1,struct gr_info_s *VAR_2,int VAR_3,int VAR_4)
{
 const unsigned char VAR_5[2][16] =
 {
  {0, 0, 0, 0, 3, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4},
  {0, 1, 2, 3, 0, 1, 2, 3, 1, 2, 3, 1, 2, 3, 2, 3}
 };
 int VAR_6;
 int VAR_7 = VAR_5[0][VAR_2->scalefac_compress];
 int VAR_8 = VAR_5[1][VAR_2->scalefac_compress];

 if(VAR_2->part2_3_length == 0)
 {
  int VAR_9;
  for(VAR_9=0;VAR_9<39;VAR_9++)
   *VAR_1++ = 0;
  return 0;
 }

 if(VAR_2->block_type == 2)
 {
  int VAR_10=18;
  VAR_6 = (VAR_7 + VAR_8) * 18;

  if(VAR_2->mixed_block_flag)
  {
   for (VAR_10=8;VAR_10;VAR_10--)
   *VAR_1++ = FUNC_0(VAR_0, VAR_7);

   VAR_10 = 9;
   VAR_6 -= VAR_7;
  }

  for(;VAR_10;VAR_10--) *VAR_1++ = FUNC_0(VAR_0, VAR_7);

  for(VAR_10 = 18; VAR_10; VAR_10--) *VAR_1++ = FUNC_0(VAR_0, VAR_8);

  *VAR_1++ = 0; *VAR_1++ = 0; *VAR_1++ = 0;
 }
 else
 {
  int VAR_11;
  int VAR_12 = VAR_2->scfsi;

  if(VAR_12 < 0)
  {
   for(VAR_11=11;VAR_11;VAR_11--) *VAR_1++ = FUNC_0(VAR_0, VAR_7);

   for(VAR_11=10;VAR_11;VAR_11--) *VAR_1++ = FUNC_0(VAR_0, VAR_8);

   VAR_6 = (VAR_7 + VAR_8) * 10 + VAR_7;
   *VAR_1++ = 0;
  }
  else
  {
   VAR_6 = 0;
   if(!(VAR_12 & 0x8))
   {
    for (VAR_11=0;VAR_11<6;VAR_11++) *VAR_1++ = FUNC_0(VAR_0, VAR_7);

    VAR_6 += VAR_7 * 6;
   }
   else VAR_1 += 6;

   if(!(VAR_12 & 0x4))
   {
    for (VAR_11=0;VAR_11<5;VAR_11++) *VAR_1++ = FUNC_0(VAR_0, VAR_7);

    VAR_6 += VAR_7 * 5;
   }
   else VAR_1 += 5;

   if(!(VAR_12 & 0x2))
   {
    for(VAR_11=0;VAR_11<5;VAR_11++) *VAR_1++ = FUNC_0(VAR_0, VAR_8);

    VAR_6 += VAR_8 * 5;
   }
   else VAR_1 += 5;

   if(!(VAR_12 & 0x1))
   {
    for (VAR_11=0;VAR_11<5;VAR_11++) *VAR_1++ = FUNC_0(VAR_0, VAR_8);

    VAR_6 += VAR_8 * 5;
   }
   else VAR_1 += 5;

   *VAR_1++ = 0;
  }
 }
 return VAR_6;
}
