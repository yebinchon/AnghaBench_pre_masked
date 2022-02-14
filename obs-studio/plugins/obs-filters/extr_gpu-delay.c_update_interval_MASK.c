
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gpu_delay_filter_data {int interval_ns; int delay_ns; int frames; int target_valid; } ;
struct frame {int render; } ;
typedef int frame ;


 int VAR_0 ;
 int VAR_1 ;
 struct frame* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,struct frame*,int) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (struct gpu_delay_filter_data*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct gpu_delay_filter_data *VAR_2,
       uint64_t VAR_3)
{
 if (!VAR_2->target_valid) {
  FUNC_3(VAR_2);
  return;
 }

 VAR_2->interval_ns = VAR_3;
 size_t VAR_4 = (size_t)(VAR_2->delay_ns / VAR_3);

 if (VAR_4 > FUNC_6(&VAR_2->frames)) {
  size_t VAR_5 = FUNC_6(&VAR_2->frames);

  FUNC_7();

  FUNC_2(&VAR_2->frames, VAR_4 * sizeof(struct frame));

  for (size_t VAR_6 = VAR_5; VAR_6 < VAR_4; VAR_6++) {
   struct frame *VAR_7 =
    FUNC_0(&VAR_2->frames, VAR_6 * sizeof(*VAR_7));
   VAR_7->render =
    FUNC_4(VAR_0, VAR_1);
  }

  FUNC_8();

 } else if (VAR_4 < FUNC_6(&VAR_2->frames)) {
  FUNC_7();

  while (FUNC_6(&VAR_2->frames) > VAR_4) {
   struct frame VAR_8;
   FUNC_1(&VAR_2->frames, &VAR_8, sizeof(VAR_8));
   FUNC_5(VAR_8.render);
  }

  FUNC_8();
 }
}
