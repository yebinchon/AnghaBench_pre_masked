
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws_mask_ctx {scalar_t__ pos; int mask; } ;
struct mbuf {size_t len; char* buf; } ;



__attribute__((used)) static void FUNC_0(struct mbuf *VAR_0, struct ws_mask_ctx *VAR_1) {
  size_t VAR_2;
  if (VAR_1->pos == 0) return;
  for (VAR_2 = 0; VAR_2 < (VAR_0->len - VAR_1->pos); VAR_2++) {
    VAR_0->buf[VAR_1->pos + VAR_2] ^= ((char *) &VAR_1->mask)[VAR_2 % 4];
  }
}
