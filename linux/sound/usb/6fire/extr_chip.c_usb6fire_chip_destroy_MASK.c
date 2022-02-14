
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfire_chip {scalar_t__ card; scalar_t__ control; scalar_t__ comm; scalar_t__ midi; scalar_t__ pcm; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sfire_chip*) ;
 int FUNC_2 (struct sfire_chip*) ;
 int FUNC_3 (struct sfire_chip*) ;
 int FUNC_4 (struct sfire_chip*) ;

__attribute__((used)) static void FUNC_5(struct sfire_chip *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->pcm)
   FUNC_4(VAR_0);
  if (VAR_0->midi)
   FUNC_3(VAR_0);
  if (VAR_0->comm)
   FUNC_1(VAR_0);
  if (VAR_0->control)
   FUNC_2(VAR_0);
  if (VAR_0->card)
   FUNC_0(VAR_0->card);
 }
}
