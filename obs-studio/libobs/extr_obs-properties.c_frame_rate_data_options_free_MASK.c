
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_rate_option {int description; int name; } ;
struct TYPE_2__ {size_t num; struct frame_rate_option* array; } ;
struct frame_rate_data {TYPE_1__ extra_options; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct frame_rate_data *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->extra_options.num; VAR_1++) {
  struct frame_rate_option *VAR_2 = &VAR_0->extra_options.array[VAR_1];
  FUNC_0(VAR_2->name);
  FUNC_0(VAR_2->description);
 }

 FUNC_1(VAR_0->extra_options, 0);
}
