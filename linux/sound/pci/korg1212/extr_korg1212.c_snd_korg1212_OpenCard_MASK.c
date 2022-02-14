
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {size_t cardState; int open_mutex; int opencnt; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_korg1212*) ;
 int FUNC_4 (struct snd_korg1212*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_5(struct snd_korg1212 * VAR_2)
{
 FUNC_0("K1212_DEBUG: OpenCard [%s] %d\n",
      VAR_1[VAR_2->cardState], VAR_2->opencnt);
 FUNC_1(&VAR_2->open_mutex);
        if (VAR_2->opencnt++ == 0) {
  FUNC_3(VAR_2);
  FUNC_4(VAR_2, VAR_0);
 }

 FUNC_2(&VAR_2->open_mutex);
        return 1;
}
