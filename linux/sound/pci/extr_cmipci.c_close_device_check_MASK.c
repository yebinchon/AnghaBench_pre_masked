
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmipci {int* opened; int open_mutex; int reg_lock; TYPE_1__* channel; } ;
struct TYPE_2__ {int is_dac; int * substream; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cmipci*,int) ;
 int FUNC_3 (struct cmipci*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cmipci *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 & VAR_1;

 FUNC_0(&VAR_3->open_mutex);
 if (VAR_3->opened[VAR_5] == VAR_4) {
  if (VAR_3->channel[VAR_5].substream) {
   FUNC_2(VAR_3, VAR_5);
   VAR_3->channel[VAR_5].running = 0;
   VAR_3->channel[VAR_5].substream = ((void*)0);
  }
  VAR_3->opened[VAR_5] = 0;
  if (! VAR_3->channel[VAR_5].is_dac) {

   VAR_3->channel[VAR_5].is_dac = 1;
   FUNC_4(&VAR_3->reg_lock);
   FUNC_3(VAR_3, VAR_2, VAR_0);
   FUNC_5(&VAR_3->reg_lock);
  }
 }
 FUNC_1(&VAR_3->open_mutex);
}
