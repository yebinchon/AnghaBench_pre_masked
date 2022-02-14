
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_buffer {int size; scalar_t__ data; scalar_t__ pango; scalar_t__ surface; scalar_t__ cairo; scalar_t__ buffer; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pool_buffer*,int ,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct pool_buffer *VAR_0) {
 if (VAR_0->buffer) {
  FUNC_5(VAR_0->buffer);
 }
 if (VAR_0->cairo) {
  FUNC_0(VAR_0->cairo);
 }
 if (VAR_0->surface) {
  FUNC_1(VAR_0->surface);
 }
 if (VAR_0->pango) {
  FUNC_2(VAR_0->pango);
 }
 if (VAR_0->data) {
  FUNC_4(VAR_0->data, VAR_0->size);
 }
 FUNC_3(VAR_0, 0, sizeof(struct pool_buffer));
}
