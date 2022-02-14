
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __uint32_t ;
typedef int __int32_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,float) ;
 int FUNC_4 (float,int) ;
 float VAR_0 ;
 float VAR_1 ;

float FUNC_5(float VAR_2)
{
 float VAR_3;
 __uint32_t VAR_4,VAR_5;
 __int32_t VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11;

 FUNC_3(VAR_6,VAR_2);
 VAR_5 = VAR_6&0x7fffffff;


 if(!FUNC_0(VAR_5))
     return VAR_2*VAR_2+VAR_2;


 if(FUNC_2(VAR_5)) return VAR_2;
 if(VAR_6<0) return (VAR_2-VAR_2)/(VAR_2-VAR_2);


 VAR_9 = (VAR_6>>23);
 if(FUNC_1(VAR_5)) {
     for(VAR_11=0;(VAR_6&0x00800000L)==0;VAR_11++) VAR_6<<=1;
     VAR_9 -= VAR_11-1;
 }
 VAR_9 -= 127;
 VAR_6 = (VAR_6&0x007fffffL)|0x00800000L;
 if(VAR_9&1)
     VAR_6 += VAR_6;
 VAR_9 >>= 1;


 VAR_6 += VAR_6;
 VAR_8 = VAR_7 = 0;
 VAR_4 = 0x01000000L;

 while(VAR_4!=0) {
     VAR_10 = VAR_7+VAR_4;
     if(VAR_10<=VAR_6) {
  VAR_7 = VAR_10+VAR_4;
  VAR_6 -= VAR_10;
  VAR_8 += VAR_4;
     }
     VAR_6 += VAR_6;
     VAR_4>>=1;
 }


 if(VAR_6!=0) {
     VAR_3 = VAR_0-VAR_1;
     if (VAR_3>=VAR_0) {
         VAR_3 = VAR_0+VAR_1;
  if (VAR_3>VAR_0)
      VAR_8 += 2;
  else
      VAR_8 += (VAR_8&1);
     }
 }
 VAR_6 = (VAR_8>>1)+0x3f000000L;
 VAR_6 += (VAR_9 <<23);
 FUNC_4(VAR_3,VAR_6);
 return VAR_3;
}
