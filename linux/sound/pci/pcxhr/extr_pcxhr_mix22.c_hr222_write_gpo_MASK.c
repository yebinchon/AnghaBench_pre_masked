
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {unsigned char dsp_reset; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcxhr_mgr*,int ,unsigned char) ;

int FUNC_1(struct pcxhr_mgr *VAR_3, int VAR_4)
{
 unsigned char VAR_5 = VAR_3->dsp_reset & ~VAR_1;

 VAR_5 |= (unsigned char)(VAR_4 << VAR_2) &
        VAR_1;

 FUNC_0(VAR_3, VAR_0, VAR_5);
 VAR_3->dsp_reset = VAR_5;
 return 0;
}
