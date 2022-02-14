
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xz_buf {scalar_t__ in_pos; scalar_t__ in_size; int* in; } ;
struct rc_dec {scalar_t__ init_bytes_left; int code; } ;



__attribute__((used)) static bool FUNC_0(struct rc_dec *VAR_0, struct xz_buf *VAR_1)
{
 while (VAR_0->init_bytes_left > 0) {
  if (VAR_1->in_pos == VAR_1->in_size)
   return 0;

  VAR_0->code = (VAR_0->code << 8) + VAR_1->in[VAR_1->in_pos++];
  --VAR_0->init_bytes_left;
 }

 return 1;
}
