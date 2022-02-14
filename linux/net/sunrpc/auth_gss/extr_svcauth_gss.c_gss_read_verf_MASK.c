
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int data; } ;
struct rpc_gss_wire_cred {int dummy; } ;
struct kvec {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xdr_netobj*,struct xdr_netobj*) ;
 int FUNC_1 (struct rpc_gss_wire_cred*,struct kvec*,int *,struct xdr_netobj*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct kvec*,struct xdr_netobj*) ;

__attribute__((used)) static inline int
FUNC_4(struct rpc_gss_wire_cred *VAR_2,
       struct kvec *VAR_3, __be32 *VAR_4,
       struct xdr_netobj *VAR_5,
       struct xdr_netobj *VAR_6)
{
 struct xdr_netobj VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;

 if (FUNC_3(VAR_3, &VAR_7)) {
  FUNC_2(VAR_5->data);
  return VAR_1;
 }
 if (FUNC_0(VAR_6, &VAR_7)) {
  FUNC_2(VAR_5->data);
  return VAR_0;
 }

 return 0;
}
