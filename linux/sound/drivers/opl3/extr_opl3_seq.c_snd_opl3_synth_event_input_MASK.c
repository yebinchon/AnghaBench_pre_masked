
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {int dummy; } ;
struct snd_opl3 {int chset; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct snd_seq_event*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_event * VAR_1, int VAR_2,
          void *VAR_3, int VAR_4, int VAR_5)
{
 struct snd_opl3 *VAR_6 = VAR_3;

 FUNC_0(&VAR_0, VAR_1, VAR_6->chset);
 return 0;
}
