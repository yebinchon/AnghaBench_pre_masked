
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dsp_; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,...) ;
 int VAR_7 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_4 (char*) ;

BOOL
FUNC_5(void)
{
 char *VAR_10 = FUNC_1("AUDIODEV");

 if (VAR_10 == ((void*)0))
 {
  VAR_10 = FUNC_4("/dev/audio");
 }

 if ((VAR_5->dsp_ = FUNC_2(VAR_10, VAR_4 | VAR_3)) == -1)
 {
  FUNC_3(VAR_10);
  return VAR_2;
 }


 FUNC_0(VAR_5->dsp_, VAR_1, FUNC_0(VAR_5->dsp_, VAR_0) | VAR_3);

 VAR_9 = VAR_8 = 0;
 VAR_7 = VAR_6;

 return VAR_6;
}
