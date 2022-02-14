
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int set_pro_rate; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int pm_suspend_enabled; TYPE_3__ gpio; int pm_resume; int card; struct psc724_spec* spec; } ;
struct TYPE_8__ {int write; } ;
struct TYPE_11__ {int card; TYPE_2__ ops; } ;
struct TYPE_7__ {int write; } ;
struct TYPE_10__ {int card; TYPE_1__ ops; } ;
struct psc724_spec {int hp_work; TYPE_5__ wm8766; TYPE_4__ wm8776; struct snd_ice1712* ice; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct psc724_spec* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_9)
{
 struct psc724_spec *VAR_10;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_9->spec = VAR_10;
 VAR_10->ice = VAR_9;

 VAR_9->num_total_dacs = 6;
 VAR_9->num_total_adcs = 2;
 VAR_10->wm8776.ops.write = VAR_8;
 VAR_10->wm8776.card = VAR_9->card;
 FUNC_5(&VAR_10->wm8776);
 VAR_10->wm8766.ops.write = VAR_7;
 VAR_10->wm8766.card = VAR_9->card;




 FUNC_3(&VAR_10->wm8766);
 FUNC_4(&VAR_10->wm8766,
   VAR_2 | VAR_3);
 VAR_9->gpio.set_pro_rate = VAR_5;
 FUNC_0(&VAR_10->hp_work, VAR_6);
 FUNC_2(VAR_9, 1);
 return 0;
}
