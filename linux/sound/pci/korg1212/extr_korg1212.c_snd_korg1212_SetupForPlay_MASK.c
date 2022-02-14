
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {size_t cardState; int setcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_korg1212*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct snd_korg1212*,int ) ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct snd_korg1212 * VAR_5)
{
 int VAR_6;

 FUNC_0("K1212_DEBUG: SetupForPlay [%s] %d\n",
      VAR_4[VAR_5->cardState], VAR_5->setcnt);

        if (VAR_5->setcnt++)
  return 0;

        FUNC_2(VAR_5, VAR_3);
        VAR_6 = FUNC_1(VAR_5, VAR_1,
                                        VAR_2, 0, 0, 0);
 if (VAR_6)
  FUNC_0("K1212_DEBUG: SetupForPlay - RC = %d [%s]\n",
       VAR_6, VAR_4[VAR_5->cardState]);
        if (VAR_6 != VAR_0) {
                return 1;
        }
        return 0;
}
