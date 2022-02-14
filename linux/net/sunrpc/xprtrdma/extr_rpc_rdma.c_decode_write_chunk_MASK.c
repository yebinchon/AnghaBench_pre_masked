
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_1, u32 *VAR_2)
{
 u32 VAR_3, VAR_4;
 __be32 *VAR_5;

 VAR_5 = FUNC_3(VAR_1, sizeof(*VAR_5));
 if (FUNC_2(!VAR_5))
  return -VAR_0;

 *VAR_2 = 0;
 VAR_3 = FUNC_0(VAR_5);
 while (VAR_3--) {
  if (FUNC_1(VAR_1, &VAR_4))
   return -VAR_0;
  *VAR_2 += VAR_4;
 }

 return 0;
}
