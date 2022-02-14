
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_intelhad {int pipe; int card_ctx; scalar_t__ connected; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_intelhad *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->connected)
  FUNC_0(VAR_0->card_ctx, VAR_0->pipe, VAR_1, VAR_2);
}
