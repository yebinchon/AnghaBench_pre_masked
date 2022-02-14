
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serializer {int get_pos; int write; struct serializer* data; } ;
struct array_output_data {int get_pos; int write; struct array_output_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct serializer*,int ,int) ;

void FUNC_1(struct serializer *VAR_2,
      struct array_output_data *VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(struct serializer));
 FUNC_0(VAR_3, 0, sizeof(struct array_output_data));
 VAR_2->data = VAR_3;
 VAR_2->write = VAR_1;
 VAR_2->get_pos = VAR_0;
}
