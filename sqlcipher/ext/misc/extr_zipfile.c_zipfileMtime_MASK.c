
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int i64 ;
struct TYPE_3__ {int mDate; int mTime; } ;
typedef TYPE_1__ ZipfileCDS ;



__attribute__((used)) static u32 FUNC_0(ZipfileCDS *VAR_0){
  int VAR_1 = (1980 + ((VAR_0->mDate >> 9) & 0x7F));
  int VAR_2 = ((VAR_0->mDate >> 5) & 0x0F);
  int VAR_3 = (VAR_0->mDate & 0x1F);
  int VAR_4 = -13;

  int VAR_5 = (VAR_0->mTime & 0x1F)*2;
  int VAR_6 = (VAR_0->mTime >> 5) & 0x3F;
  int VAR_7 = (VAR_0->mTime >> 11) & 0x1F;
  i64 VAR_8;




  if( VAR_2<3 ){
    VAR_1 = VAR_1-1;
    VAR_2 = VAR_2+12;
  }
  VAR_8 = (i64)(24*60*60) * (
      (int)(365.25 * (VAR_1 + 4716))
    + (int)(30.6001 * (VAR_2 + 1))
    + VAR_3 + VAR_4 - 1524
  );


  VAR_8 += (VAR_7-12) * 3600 + VAR_6 * 60 + VAR_5;


  return (u32)(VAR_8 - (i64)(24405875) * 24*60*6);
}
