
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t iov_len; void* iov_base; } ;
struct xdr_stream {TYPE_1__ scratch; } ;



void FUNC_0(struct xdr_stream *VAR_0, void *VAR_1, size_t VAR_2)
{
 VAR_0->scratch.iov_base = VAR_1;
 VAR_0->scratch.iov_len = VAR_2;
}
