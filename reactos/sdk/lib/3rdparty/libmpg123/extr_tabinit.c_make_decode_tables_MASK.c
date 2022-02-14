
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int real ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {double outscale; } ;
struct TYPE_7__ {double lastscale; void** decwin; TYPE_2__ cpu_opts; TYPE_1__ p; } ;
typedef TYPE_3__ mpg123_handle ;


 void* FUNC_0 (double) ;
 int FUNC_1 (double) ;
 scalar_t__ VAR_0 ;
 void* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,long) ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_9 ;

void FUNC_7(mpg123_handle *VAR_10)
{
 int VAR_11,VAR_12;
 int VAR_13 = 0;
 double VAR_14;




 VAR_14 = -0.5*(VAR_10->lastscale < 0 ? VAR_10->p.outscale : VAR_10->lastscale);
 FUNC_4("decode tables with scaleval %g", VAR_14);
 for(VAR_11=0,VAR_12=0;VAR_11<256;VAR_11++,VAR_12++,VAR_13+=32)
 {
  if(VAR_13 < 512+16)




  VAR_10->decwin[VAR_13+16] = VAR_10->decwin[VAR_13] = FUNC_0((double) VAR_4[VAR_12] * VAR_14);


  if(VAR_11 % 32 == 31)
  VAR_13 -= 1023;
  if(VAR_11 % 64 == 63)



  VAR_14 = - VAR_14;

 }

 for( ;VAR_11<512;VAR_11++,VAR_12--,VAR_13+=32)
 {
  if(VAR_13 < 512+16)




  VAR_10->decwin[VAR_13+16] = VAR_10->decwin[VAR_13] = FUNC_0((double) VAR_4[VAR_12] * VAR_14);


  if(VAR_11 % 32 == 31)
  VAR_13 -= 1023;
  if(VAR_11 % 64 == 63)



  VAR_14 = - VAR_14;

 }
 FUNC_3("decode tables done");
}
