
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int len; int data; } ;


 int FUNC_0 (struct xdr_netobj*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct xdr_netobj *VAR_0, struct xdr_netobj *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->data, VAR_1->len);
}
