
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb_csp {TYPE_1__* chip; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct snd_sb_csp*,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_sb_csp * VAR_1, int VAR_2)
{
 char VAR_3[16];

 FUNC_1(VAR_3, "cspD%d", VAR_2);
 FUNC_0(VAR_1->chip->card, VAR_3, VAR_1, VAR_0);
 return 0;
}
