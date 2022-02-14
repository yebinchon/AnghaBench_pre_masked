
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int page_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_ac97*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_2, int VAR_3)
{
 if (VAR_3 >= 0) {
  FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3);
  FUNC_0(&VAR_2->page_mutex);
 }
}
