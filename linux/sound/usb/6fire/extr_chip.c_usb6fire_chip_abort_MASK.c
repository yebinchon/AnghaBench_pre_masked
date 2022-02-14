
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfire_chip {int * card; scalar_t__ control; scalar_t__ comm; scalar_t__ midi; scalar_t__ pcm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sfire_chip*) ;
 int FUNC_3 (struct sfire_chip*) ;
 int FUNC_4 (struct sfire_chip*) ;
 int FUNC_5 (struct sfire_chip*) ;

__attribute__((used)) static void FUNC_6(struct sfire_chip *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->pcm)
   FUNC_5(VAR_0);
  if (VAR_0->midi)
   FUNC_4(VAR_0);
  if (VAR_0->comm)
   FUNC_2(VAR_0);
  if (VAR_0->control)
   FUNC_3(VAR_0);
  if (VAR_0->card) {
   FUNC_0(VAR_0->card);
   FUNC_1(VAR_0->card);
   VAR_0->card = ((void*)0);
  }
 }
}
