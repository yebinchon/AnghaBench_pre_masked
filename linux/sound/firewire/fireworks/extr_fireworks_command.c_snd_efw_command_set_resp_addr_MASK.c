
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct snd_efw {int resp_addr_changable; } ;
typedef int addr ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_efw*,int ,int ,int *,int,int *,int ) ;

int FUNC_2(struct snd_efw *VAR_3,
      u16 VAR_4, u32 VAR_5)
{
 __be32 VAR_6[2];

 VAR_6[0] = FUNC_0(VAR_4);
 VAR_6[1] = FUNC_0(VAR_5);

 if (!VAR_3->resp_addr_changable)
  return -VAR_2;

 return FUNC_1(VAR_3, VAR_0,
          VAR_1,
          VAR_6, sizeof(VAR_6), ((void*)0), 0);
}
