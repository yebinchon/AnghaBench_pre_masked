
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct encoder_callback* array; } ;
struct obs_encoder {TYPE_1__ callbacks; } ;
struct encoder_callback {void (* new_packet ) (void*,struct encoder_packet*) ;void* param; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline size_t
FUNC_0(const struct obs_encoder *VAR_1,
   void (*VAR_2)(void *VAR_3, struct encoder_packet *VAR_4),
   void *VAR_5)
{
 for (size_t VAR_6 = 0; VAR_6 < VAR_1->callbacks.num; VAR_6++) {
  struct encoder_callback *VAR_7 = VAR_1->callbacks.array + VAR_6;

  if (VAR_7->new_packet == VAR_2 && VAR_7->param == VAR_5)
   return VAR_6;
 }

 return VAR_0;
}
