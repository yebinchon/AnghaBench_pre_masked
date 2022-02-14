
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_1, u32 *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1, 4);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_3, sizeof(u32));
 return 0;
}
