
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct gr_info_s {int scalefac_compress; unsigned int preflag; int block_type; scalar_t__ part2_3_length; scalar_t__ mixed_block_flag; } ;
typedef int mpg123_handle ;
struct TYPE_12__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_11__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_10__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_9__ {int member_0; int member_1; int member_3; int member_2; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; } ;


 int FUNC_0 (int *,int) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int FUNC_1(mpg123_handle *VAR_2, int *VAR_3,struct gr_info_s *VAR_4,int VAR_5)
{
 const unsigned char *VAR_6;
 int VAR_7,VAR_8,VAR_9=0,VAR_10=0;
 unsigned int VAR_11;

 const unsigned char VAR_12[3][6][4] =
 {
  {
   { 6, 5, 5,5 } , { 6, 5, 7,3 } , { 11,10,0,0},
   { 7, 7, 7,0 } , { 6, 6, 6,3 } , { 8, 8,5,0}
  },
  {
   { 9, 9, 9,9 } , { 9, 9,12,6 } , { 18,18,0,0},
   {12,12,12,0 } , {12, 9, 9,6 } , { 15,12,9,0}
  },
  {
   { 6, 9, 9,9 } , { 6, 9,12,6 } , { 15,18,0,0},
   { 6,15,12,0 } , { 6,12, 9,6 } , { 6,18,9,0}
  }
 };

 if(VAR_5)
 VAR_11 = VAR_0[VAR_4->scalefac_compress>>1];
 else
 VAR_11 = VAR_1[VAR_4->scalefac_compress];

 VAR_4->preflag = (VAR_11>>15) & 0x1;

 VAR_9 = 0;
 if( VAR_4->block_type == 2 )
 {
  VAR_9++;
  if(VAR_4->mixed_block_flag) VAR_9++;
 }

 VAR_6 = VAR_12[VAR_9][(VAR_11>>12)&0x7];

 if(VAR_4->part2_3_length == 0)
 {
  int VAR_13;
  for(VAR_13=0;VAR_13<39;VAR_13++)
   *VAR_3++ = 0;
  return 0;
 }

 for(VAR_7=0;VAR_7<4;VAR_7++)
 {
  int VAR_14 = VAR_11 & 0x7;
  VAR_11 >>= 3;
  if(VAR_14)
  {
   for(VAR_8=0;VAR_8<(int)(VAR_6[VAR_7]);VAR_8++) *VAR_3++ = FUNC_0(VAR_2, VAR_14);

   VAR_10 += VAR_6[VAR_7] * VAR_14;
  }
  else
  for(VAR_8=0;VAR_8<(int)(VAR_6[VAR_7]);VAR_8++) *VAR_3++ = 0;
 }

 VAR_9 = (VAR_9 << 1) + 1;
 for(VAR_7=0;VAR_7<VAR_9;VAR_7++) *VAR_3++ = 0;

 return VAR_10;
}
