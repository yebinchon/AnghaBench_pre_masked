
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serializer {int dummy; } ;
struct encoder_packet {int priority; int drop_priority; scalar_t__ size; scalar_t__ data; int keyframe; } ;
struct TYPE_2__ {scalar_t__ num; scalar_t__ array; } ;
struct array_output_data {TYPE_1__ bytes; } ;
typedef int ref ;


 int FUNC_0 (struct serializer*,struct array_output_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct serializer*,long*,int) ;
 int FUNC_3 (struct serializer*,scalar_t__,scalar_t__,int *,int *) ;

void FUNC_4(struct encoder_packet *VAR_0,
     const struct encoder_packet *VAR_1)
{
 struct array_output_data VAR_2;
 struct serializer VAR_3;
 long VAR_4 = 1;

 FUNC_0(&VAR_3, &VAR_2);
 *VAR_0 = *VAR_1;

 FUNC_2(&VAR_3, &VAR_4, sizeof(VAR_4));
 FUNC_3(&VAR_3, VAR_1->data, VAR_1->size, &VAR_0->keyframe,
      &VAR_0->priority);

 VAR_0->data = VAR_2.bytes.array + sizeof(VAR_4);
 VAR_0->size = VAR_2.bytes.num - sizeof(VAR_4);
 VAR_0->drop_priority = FUNC_1(VAR_0->priority);
}
