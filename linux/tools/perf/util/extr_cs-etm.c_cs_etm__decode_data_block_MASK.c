
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_etm_queue {size_t offset; size_t buf_used; size_t buf_len; int * buf; int decoder; } ;


 int FUNC_0 (int ,size_t,int *,size_t,size_t*) ;

__attribute__((used)) static int FUNC_1(struct cs_etm_queue *VAR_0)
{
 int VAR_1 = 0;
 size_t VAR_2 = 0;
 VAR_1 = FUNC_0(VAR_0->decoder,
       VAR_0->offset,
       &VAR_0->buf[VAR_0->buf_used],
       VAR_0->buf_len,
       &VAR_2);
 if (VAR_1)
  goto out;

 VAR_0->offset += VAR_2;
 VAR_0->buf_used += VAR_2;
 VAR_0->buf_len -= VAR_2;

out:
 return VAR_1;
}
