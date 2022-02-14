
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
 u32 VAR_4;
 bool VAR_5;
 __be32 *VAR_6;

 *VAR_3 = 0;
 VAR_5 = 1;
 do {
  VAR_6 = FUNC_2(VAR_2, sizeof(*VAR_6));
  if (FUNC_1(!VAR_6))
   return -VAR_0;
  if (*VAR_6 == VAR_1)
   break;
  if (!VAR_5)
   return -VAR_0;

  if (FUNC_0(VAR_2, &VAR_4))
   return -VAR_0;
  *VAR_3 += VAR_4;
  VAR_5 = 0;
 } while (1);
 return 0;
}
