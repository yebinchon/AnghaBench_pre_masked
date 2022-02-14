
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct al_table {int dummy; } ;
struct TYPE_7__ {int sampling_frequency; int stereo; size_t bitrate_index; int II_sblimit; struct al_table const* alloc; } ;
typedef TYPE_3__ mpg123_handle ;
struct TYPE_6__ {int member_1; int member_2; int member_6; int member_7; int member_8; int member_9; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; int member_5; int member_4; int member_3; int member_0; } ;
struct TYPE_5__ {int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_10; int member_11; int member_12; int member_13; int member_14; int member_15; int member_9; int member_8; int member_7; int member_0; } ;


 struct al_table const* VAR_0 ;
 struct al_table const* VAR_1 ;
 struct al_table const* VAR_2 ;
 struct al_table const* VAR_3 ;
 struct al_table const* VAR_4 ;

__attribute__((used)) static void FUNC_0(mpg123_handle *VAR_5)
{
 const int VAR_6[3][2][16] =
 {
  {
   { 0,2,2,2,2,2,2,0,0,0,1,1,1,1,1,0 },
   { 0,2,2,0,0,0,1,1,1,1,1,1,1,1,1,0 }
  },
  {
   { 0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0 },
   { 0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0 }
  },
  {
   { 0,3,3,3,3,3,3,0,0,0,1,1,1,1,1,0 },
   { 0,3,3,0,0,0,1,1,1,1,1,1,1,1,1,0 }
  }
 };

 int VAR_7,VAR_8;
 const struct al_table *VAR_9[5] = { VAR_0, VAR_1, VAR_2, VAR_3 , VAR_4 };
 const int VAR_10[5] = { 27 , 30 , 8, 12 , 30 };

 if(VAR_5->sampling_frequency >= 3)
 VAR_7 = 4;
 else
 VAR_7 = VAR_6[VAR_5->sampling_frequency][2-VAR_5->stereo][VAR_5->bitrate_index];

 VAR_8 = VAR_10[VAR_7];
 VAR_5->alloc = VAR_9[VAR_7];
 VAR_5->II_sblimit = VAR_8;
}
