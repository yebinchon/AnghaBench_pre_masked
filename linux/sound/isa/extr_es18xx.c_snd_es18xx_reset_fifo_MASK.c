
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es18xx {scalar_t__ port; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_es18xx *VAR_0)
{
        FUNC_1(0x02, VAR_0->port + 0x06);
        FUNC_0(VAR_0->port + 0x06);
        FUNC_1(0x00, VAR_0->port + 0x06);
 return 0;
}
