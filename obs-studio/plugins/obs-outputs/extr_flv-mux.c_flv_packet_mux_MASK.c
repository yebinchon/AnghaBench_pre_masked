
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct serializer {int dummy; } ;
struct encoder_packet {scalar_t__ type; } ;
struct TYPE_2__ {size_t num; int * array; } ;
struct array_output_data {TYPE_1__ bytes; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct serializer*,struct array_output_data*) ;
 int FUNC_1 (struct serializer*,int ,struct encoder_packet*,int) ;
 int FUNC_2 (struct serializer*,int ,struct encoder_packet*,int) ;

void FUNC_3(struct encoder_packet *VAR_1, int32_t VAR_2,
      uint8_t **VAR_3, size_t *VAR_4, bool VAR_5)
{
 struct array_output_data VAR_6;
 struct serializer VAR_7;

 FUNC_0(&VAR_7, &VAR_6);

 if (VAR_1->type == VAR_0)
  FUNC_2(&VAR_7, VAR_2, VAR_1, VAR_5);
 else
  FUNC_1(&VAR_7, VAR_2, VAR_1, VAR_5);

 *VAR_3 = VAR_6.bytes.array;
 *VAR_4 = VAR_6.bytes.num;
}
