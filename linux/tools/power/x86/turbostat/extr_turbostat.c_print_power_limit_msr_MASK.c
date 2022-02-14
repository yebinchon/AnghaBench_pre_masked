
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,char*,char*,unsigned long long,double,char*) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 double VAR_2 ;

void FUNC_1(int VAR_3, unsigned long long VAR_4, char *VAR_5)
{
 FUNC_0(VAR_0, "cpu%d: %s: %sabled (%llu Watts, %f sec, clamp %sabled)\n",
  VAR_3, VAR_5,
  ((VAR_4 >> 15) & 1) ? "EN" : "DIS",
  ((VAR_4 >> 0) & 0x7FFF) * VAR_1,
  (1.0 + (((VAR_4 >> 22) & 0x3)/4.0)) * (1 << ((VAR_4 >> 17) & 0x1F)) * VAR_2,
  (((VAR_4 >> 16) & 1) ? "EN" : "DIS"));

 return;
}
