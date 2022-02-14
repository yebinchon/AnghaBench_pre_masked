
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct cx20442_priv {int por; struct tty_struct* tty; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cx20442_priv*) ;
 int FUNC_2 (int ) ;
 struct cx20442_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int *) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_0)
{
 struct cx20442_priv *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->tty) {
  struct tty_struct *VAR_2 = VAR_1->tty;
  FUNC_5(VAR_2);
 }

 if (!FUNC_0(VAR_1->por)) {

  FUNC_2(VAR_1->por);
 }

 FUNC_4(VAR_0, ((void*)0));
 FUNC_1(VAR_1);
}
