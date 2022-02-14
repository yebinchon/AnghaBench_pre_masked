
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pmac {scalar_t__ model; int subframe; TYPE_1__* awacs; } ;
struct TYPE_2__ {int codec_ctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct snd_pmac*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct snd_pmac *VAR_2, int VAR_3)
{
 long VAR_4 = 5000000;

 if (VAR_2->model == VAR_1)
  FUNC_2(VAR_2);
 FUNC_1(&VAR_2->awacs->codec_ctrl, VAR_3 | (VAR_2->subframe << 22));
 while (FUNC_0(&VAR_2->awacs->codec_ctrl) & VAR_0) {
  if (! --VAR_4) {
   FUNC_3("snd_pmac_awacs_write timeout\n");
   break;
  }
 }
}
