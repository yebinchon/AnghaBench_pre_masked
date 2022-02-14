
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * address_callback; } ;
struct snd_motu {TYPE_1__ async_handler; } ;
typedef int data ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct snd_motu*,int ,int *,int) ;

void FUNC_3(struct snd_motu *VAR_2)
{
 __be32 VAR_3;

 if (VAR_2->async_handler.address_callback != ((void*)0))
  FUNC_1(&VAR_2->async_handler);
 VAR_2->async_handler.address_callback = ((void*)0);


 VAR_3 = FUNC_0(0x00000000);
 FUNC_2(VAR_2, VAR_0, &VAR_3, sizeof(VAR_3));
 FUNC_2(VAR_2, VAR_1, &VAR_3, sizeof(VAR_3));
}
