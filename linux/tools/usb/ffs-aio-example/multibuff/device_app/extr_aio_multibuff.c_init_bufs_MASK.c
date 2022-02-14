
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_buffer {unsigned int cnt; unsigned int len; void** iocb; void** buf; scalar_t__ requested; } ;


 void* FUNC_0 (int) ;

void FUNC_1(struct io_buffer *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3;
 VAR_0->buf = FUNC_0(VAR_1*sizeof(*VAR_0->buf));
 VAR_0->iocb = FUNC_0(VAR_1*sizeof(*VAR_0->iocb));
 VAR_0->cnt = VAR_1;
 VAR_0->len = VAR_2;
 VAR_0->requested = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  VAR_0->buf[VAR_3] = FUNC_0(VAR_2*sizeof(**VAR_0->buf));
  VAR_0->iocb[VAR_3] = FUNC_0(sizeof(**VAR_0->iocb));
 }
 VAR_0->cnt = VAR_1;
}
