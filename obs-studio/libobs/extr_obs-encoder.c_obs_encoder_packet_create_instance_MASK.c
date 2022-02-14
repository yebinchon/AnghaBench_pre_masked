
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encoder_packet {scalar_t__ size; void* data; } ;


 long* FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,void*,scalar_t__) ;

void FUNC_2(struct encoder_packet *VAR_0,
     const struct encoder_packet *VAR_1)
{
 long *VAR_2;

 *VAR_0 = *VAR_1;
 VAR_2 = FUNC_0(VAR_1->size + sizeof(long));
 VAR_0->data = (void *)(VAR_2 + 1);
 *VAR_2 = 1;
 FUNC_1(VAR_0->data, VAR_1->data, VAR_1->size);
}
