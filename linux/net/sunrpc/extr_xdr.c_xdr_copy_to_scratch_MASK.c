
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* iov_base; size_t iov_len; } ;
struct xdr_stream {TYPE_1__ scratch; scalar_t__ p; scalar_t__ end; } ;
typedef char __be32 ;


 char* FUNC_0 (struct xdr_stream*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (struct xdr_stream*,size_t) ;
 int FUNC_3 (struct xdr_stream*) ;

__attribute__((used)) static __be32 *FUNC_4(struct xdr_stream *VAR_0, size_t VAR_1)
{
 __be32 *VAR_2;
 char *VAR_3 = VAR_0->scratch.iov_base;
 size_t VAR_4 = (char *)VAR_0->end - (char *)VAR_0->p;

 if (VAR_1 > VAR_0->scratch.iov_len)
  goto out_overflow;
 VAR_2 = FUNC_0(VAR_0, VAR_4);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_3, VAR_2, VAR_4);
 if (!FUNC_3(VAR_0))
  goto out_overflow;
 VAR_3 += VAR_4;
 VAR_1 -= VAR_4;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_3, VAR_2, VAR_1);
 return VAR_0->scratch.iov_base;
out_overflow:
 FUNC_2(VAR_0, VAR_1);
 return ((void*)0);
}
