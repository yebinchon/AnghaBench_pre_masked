
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (struct xdr_stream*,int) ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_2(struct xdr_stream *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_3));
 if (FUNC_0(!VAR_3))
  return -VAR_0;

 *VAR_3 = VAR_1;
 return 0;
}
