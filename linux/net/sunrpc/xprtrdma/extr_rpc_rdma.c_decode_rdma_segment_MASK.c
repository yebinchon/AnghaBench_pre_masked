
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xdr_stream {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1, u32 *VAR_2)
{
 u32 VAR_3;
 u64 VAR_4;
 __be32 *VAR_5;

 VAR_5 = FUNC_4(VAR_1, 4 * sizeof(*VAR_5));
 if (FUNC_2(!VAR_5))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_5++);
 *VAR_2 = FUNC_0(VAR_5++);
 FUNC_3(VAR_5, &VAR_4);

 FUNC_1(VAR_3, *VAR_2, VAR_4);
 return 0;
}
