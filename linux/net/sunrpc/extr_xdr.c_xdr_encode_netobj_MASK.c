
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int len; int data; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;

__be32 *
FUNC_3(__be32 *VAR_0, const struct xdr_netobj *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->len);

 VAR_0[VAR_2] = 0;
 *VAR_0++ = FUNC_1(VAR_1->len);
 FUNC_2(VAR_0, VAR_1->data, VAR_1->len);
 return VAR_0 + FUNC_0(VAR_1->len);
}
