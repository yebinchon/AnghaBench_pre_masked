
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; } ;
struct gpu_delay_filter_data {TYPE_1__ frames; } ;
struct frame {int render; } ;
typedef int frame ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct frame*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct gpu_delay_filter_data *VAR_0)
{
 FUNC_3();
 while (VAR_0->frames.size) {
  struct frame VAR_1;
  FUNC_1(&VAR_0->frames, &VAR_1, sizeof(VAR_1));
  FUNC_2(VAR_1.render);
 }
 FUNC_0(&VAR_0->frames);
 FUNC_4();
}
