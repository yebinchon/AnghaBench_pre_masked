
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * callback_data; } ;
struct snd_tscm {TYPE_1__ async_handler; int unit; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

void FUNC_3(struct snd_tscm *VAR_6)
{
 __be32 VAR_7;

 if (VAR_6->async_handler.callback_data == ((void*)0))
  return;


 VAR_7 = FUNC_0(0x0000008e);
 FUNC_2(VAR_6->unit, VAR_0,
      VAR_1 + VAR_2,
      &VAR_7, sizeof(VAR_7), 0);


 VAR_7 = FUNC_0(0x00000000);
 FUNC_2(VAR_6->unit, VAR_0,
      VAR_1 + VAR_5,
      &VAR_7, sizeof(VAR_7), 0);


 FUNC_2(VAR_6->unit, VAR_0,
      VAR_1 + VAR_3,
      &VAR_7, sizeof(VAR_7), 0);
 FUNC_2(VAR_6->unit, VAR_0,
      VAR_1 + VAR_4,
      &VAR_7, sizeof(VAR_7), 0);

 FUNC_1(&VAR_6->async_handler);
 VAR_6->async_handler.callback_data = ((void*)0);
}
