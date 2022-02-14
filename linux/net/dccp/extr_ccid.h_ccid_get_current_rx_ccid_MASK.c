
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dccp_sock {struct ccid* dccps_hc_rx_ccid; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int ccid_id; } ;



__attribute__((used)) static inline int FUNC_0(struct dccp_sock *VAR_0)
{
 struct ccid *VAR_1 = VAR_0->dccps_hc_rx_ccid;

 if (VAR_1 == ((void*)0) || VAR_1->ccid_ops == ((void*)0))
  return -1;
 return VAR_1->ccid_ops->ccid_id;
}
