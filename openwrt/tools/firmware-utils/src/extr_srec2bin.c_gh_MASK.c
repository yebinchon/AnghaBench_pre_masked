
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bit32u ;


 int FUNC_0 (char*,char*) ;

bit32u FUNC_1(char *VAR_0,int VAR_1)
{
  int VAR_2;
  bit32u VAR_3;

  VAR_3=0;

  for(VAR_2=0;VAR_2<VAR_1;VAR_2++)
  {
    VAR_3<<=4;
    if ((*VAR_0>='a')&&(*VAR_0<='z')) *VAR_0 &= 0x5f;
    if ((*VAR_0>='0')&&(*VAR_0<='9'))
      VAR_3 += (*VAR_0-0x30);
     else
      if ((*VAR_0>='A')&&(*VAR_0<='F'))
        VAR_3 += (*VAR_0-0x37);
       else
        FUNC_0("Bad Hex char", VAR_0);
    VAR_0++;
  }
  return(VAR_3);
}
