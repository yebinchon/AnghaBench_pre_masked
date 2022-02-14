
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xdr_stream*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__* FUNC_2 (struct xdr_stream*,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, u32 *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_2(VAR_2, sizeof(*VAR_4));
 if (FUNC_1(!VAR_4))
  return -VAR_0;

 *VAR_3 = 0;
 if (*VAR_4 != VAR_1)
  if (FUNC_0(VAR_2, VAR_3))
   return -VAR_0;
 return 0;
}
