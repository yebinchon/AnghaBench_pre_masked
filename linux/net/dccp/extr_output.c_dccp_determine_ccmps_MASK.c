
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dccp_sock {struct ccid* dccps_hc_tx_ccid; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int ccid_ccmps; } ;



__attribute__((used)) static u32 FUNC_0(const struct dccp_sock *VAR_0)
{
 const struct ccid *VAR_1 = VAR_0->dccps_hc_tx_ccid;

 if (VAR_1 == ((void*)0) || VAR_1->ccid_ops == ((void*)0))
  return 0;
 return VAR_1->ccid_ops->ccid_ccmps;
}
