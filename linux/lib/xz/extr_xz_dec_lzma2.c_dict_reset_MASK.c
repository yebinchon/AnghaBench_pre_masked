
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xz_buf {scalar_t__ out_pos; scalar_t__ out_size; scalar_t__ out; } ;
struct dictionary {scalar_t__ full; scalar_t__ limit; scalar_t__ pos; scalar_t__ start; scalar_t__ end; scalar_t__ buf; int mode; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dictionary *VAR_0, struct xz_buf *VAR_1)
{
 if (FUNC_0(VAR_0->mode)) {
  VAR_0->buf = VAR_1->out + VAR_1->out_pos;
  VAR_0->end = VAR_1->out_size - VAR_1->out_pos;
 }

 VAR_0->start = 0;
 VAR_0->pos = 0;
 VAR_0->limit = 0;
 VAR_0->full = 0;
}
