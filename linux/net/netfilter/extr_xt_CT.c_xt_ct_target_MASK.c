
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ _nfct; } ;
struct TYPE_2__ {int use; } ;
struct nf_conn {TYPE_1__ ct_general; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct sk_buff *VAR_3, struct nf_conn *VAR_4)
{

 if (VAR_3->_nfct != 0)
  return VAR_2;

 if (VAR_4) {
  FUNC_0(&VAR_4->ct_general.use);
  FUNC_1(VAR_3, VAR_4, VAR_0);
 } else {
  FUNC_1(VAR_3, VAR_4, VAR_1);
 }

 return VAR_2;
}
