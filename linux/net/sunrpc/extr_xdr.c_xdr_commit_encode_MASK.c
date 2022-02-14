
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iov_len; int iov_base; } ;
struct xdr_stream {TYPE_1__ scratch; scalar_t__ p; int * page_ptr; } ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (void*,void*,int) ;
 void* FUNC_2 (int ) ;

inline void FUNC_3(struct xdr_stream *VAR_0)
{
 int VAR_1 = VAR_0->scratch.iov_len;
 void *VAR_2;

 if (VAR_1 == 0)
  return;
 VAR_2 = FUNC_2(*VAR_0->page_ptr);
 FUNC_0(VAR_0->scratch.iov_base, VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_2 + VAR_1, (void *)VAR_0->p - VAR_2);
 VAR_0->scratch.iov_len = 0;
}
