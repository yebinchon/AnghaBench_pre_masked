
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {size_t cardState; scalar_t__ setcnt; scalar_t__ playcnt; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_korg1212*) ;
 int FUNC_2 (struct snd_korg1212*,int ) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_korg1212 * VAR_3)
{
 FUNC_0("K1212_DEBUG: StopPlay [%s] %d\n",
      VAR_2[VAR_3->cardState], VAR_3->playcnt);

        if (--(VAR_3->playcnt))
  return 0;

 VAR_3->setcnt = 0;

        if (VAR_3->cardState != VAR_0)
  FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_1);
        return 0;
}
