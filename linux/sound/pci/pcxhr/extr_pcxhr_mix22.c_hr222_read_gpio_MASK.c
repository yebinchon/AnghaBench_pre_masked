
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {int dsp_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct pcxhr_mgr*,int ) ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct pcxhr_mgr *VAR_5, int VAR_6, int *VAR_7)
{
 if (VAR_6) {
  unsigned char VAR_8 = FUNC_0(VAR_5, VAR_4);
  *VAR_7 = (int)(VAR_8 & VAR_2) >>
         VAR_3;
 } else {
  *VAR_7 = (int)(VAR_5->dsp_reset & VAR_0) >>
    VAR_1;
 }
 return 0;
}
