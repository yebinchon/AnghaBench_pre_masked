
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
typedef double i64 ;
struct TYPE_4__ {void* mTime; void* mDate; } ;
typedef TYPE_1__ ZipfileCDS ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(ZipfileCDS *VAR_0, u32 VAR_1){

  i64 VAR_2 = (i64)2440588 + VAR_1 / (24*60*60);

  int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
  int VAR_8, VAR_9, VAR_10;
  int VAR_11, VAR_12, VAR_13;

  VAR_3 = (int)((VAR_2 - 1867216.25)/36524.25);
  VAR_3 = (int)(VAR_2 + 1 + VAR_3 - (VAR_3/4));
  VAR_4 = VAR_3 + 1524;
  VAR_5 = (int)((VAR_4 - 122.1)/365.25);
  VAR_6 = (36525*(VAR_5&32767))/100;
  VAR_7 = (int)((VAR_4-VAR_6)/30.6001);

  VAR_10 = VAR_4 - VAR_6 - (int)(30.6001*VAR_7);
  VAR_9 = (VAR_7<14 ? VAR_7-1 : VAR_7-13);
  VAR_8 = VAR_9>2 ? VAR_5-4716 : VAR_5-4715;

  VAR_11 = (VAR_1 % (24*60*60)) / (60*60);
  VAR_12 = (VAR_1 % (60*60)) / 60;
  VAR_13 = (VAR_1 % 60);

  if( VAR_8>=1980 ){
    VAR_0->mDate = (u16)(VAR_10 + (VAR_9 << 5) + ((VAR_8-1980) << 9));
    VAR_0->mTime = (u16)(VAR_13/2 + (VAR_12<<5) + (VAR_11<<11));
  }else{
    VAR_0->mDate = VAR_0->mTime = 0;
  }

  FUNC_0( VAR_1<315507600
       || VAR_1==FUNC_1(VAR_0)
       || ((VAR_1 % 2) && VAR_1-1==FUNC_1(VAR_0))

  );
}
