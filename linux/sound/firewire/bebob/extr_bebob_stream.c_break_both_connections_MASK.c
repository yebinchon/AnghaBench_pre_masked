
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bebob {int * maudio_special_quirk; int out_conn; int in_conn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct snd_bebob *VAR_0)
{
 FUNC_0(&VAR_0->in_conn);
 FUNC_0(&VAR_0->out_conn);


 if (VAR_0->maudio_special_quirk != ((void*)0))
  FUNC_1(200);
}
