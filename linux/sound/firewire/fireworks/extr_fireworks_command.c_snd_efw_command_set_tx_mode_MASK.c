
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int dummy; } ;
typedef int param ;
typedef enum snd_efw_transport_mode { ____Placeholder_snd_efw_transport_mode } snd_efw_transport_mode ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_efw*,int ,int ,int *,int,int *,int ) ;

int FUNC_2(struct snd_efw *VAR_2,
    enum snd_efw_transport_mode VAR_3)
{
 __be32 VAR_4 = FUNC_0(VAR_3);
 return FUNC_1(VAR_2, VAR_0,
          VAR_1,
          &VAR_4, sizeof(VAR_4), ((void*)0), 0);
}
