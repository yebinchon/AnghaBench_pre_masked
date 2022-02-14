
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct ccid {TYPE_1__* ccid_ops; } ;
struct TYPE_2__ {int (* ccid_hc_tx_parse_options ) (struct sock*,int ,int ,int *,int ) ;} ;


 int FUNC_0 (struct sock*,int ,int ,int *,int ) ;

__attribute__((used)) static inline int FUNC_1(struct ccid *VAR_0, struct sock *VAR_1,
        u8 VAR_2, u8 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 if (!VAR_0 || !VAR_0->ccid_ops->ccid_hc_tx_parse_options)
  return 0;
 return VAR_0->ccid_ops->ccid_hc_tx_parse_options(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
