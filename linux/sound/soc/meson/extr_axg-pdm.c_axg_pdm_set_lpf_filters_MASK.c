
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct axg_pdm_lpf {unsigned int tap_num; int * tap; } ;
struct axg_pdm {int map; TYPE_1__* cfg; } ;
struct TYPE_4__ {struct axg_pdm_lpf* lpf; } ;
struct TYPE_3__ {TYPE_2__* filters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct axg_pdm*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct axg_pdm *VAR_5)
{
 const struct axg_pdm_lpf *VAR_6 = VAR_5->cfg->filters->lpf;
 unsigned int VAR_7 = 0;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_7 += VAR_6[VAR_8].tap_num;


 if (VAR_7 >= VAR_3)
  return -VAR_0;


 FUNC_1(VAR_5->map, VAR_1, 0);


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_0(VAR_5, VAR_8);

  for (VAR_9 = 0; VAR_9 < VAR_6[VAR_8].tap_num; VAR_9++)
   FUNC_1(VAR_5->map, VAR_2, VAR_6[VAR_8].tap[VAR_9]);
 }

 return 0;
}
