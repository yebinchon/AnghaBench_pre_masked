
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {scalar_t__ p; scalar_t__ end; } ;
typedef int __be32 ;


 int * FUNC_0 (struct xdr_stream*,size_t) ;
 int FUNC_1 (struct xdr_stream*,size_t) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,size_t) ;
 int FUNC_4 (struct xdr_stream*) ;

__be32 * FUNC_5(struct xdr_stream *VAR_0, size_t VAR_1)
{
 __be32 *VAR_2;

 if (FUNC_2(VAR_1 == 0))
  return VAR_0->p;
 if (VAR_0->p == VAR_0->end && !FUNC_4(VAR_0))
  goto out_overflow;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0))
  return VAR_2;
 return FUNC_3(VAR_0, VAR_1);
out_overflow:
 FUNC_1(VAR_0, VAR_1);
 return ((void*)0);
}
