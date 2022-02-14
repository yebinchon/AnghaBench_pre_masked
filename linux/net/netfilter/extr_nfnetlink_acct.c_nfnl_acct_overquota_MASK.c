
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nf_acct {int flags; int bytes; int pkts; scalar_t__ data; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct net*,struct nf_acct*) ;
 int FUNC_2 (int ,int*) ;

int FUNC_3(struct net *VAR_5, struct nf_acct *VAR_6)
{
 u64 VAR_7;
 u64 *VAR_8;
 int VAR_9 = VAR_4;


 if (!(VAR_6->flags & VAR_0))
  return VAR_2;

 VAR_8 = (u64 *)VAR_6->data;
 VAR_7 = (VAR_6->flags & VAR_1) ?
        FUNC_0(&VAR_6->pkts) : FUNC_0(&VAR_6->bytes);

 VAR_9 = VAR_7 > *VAR_8;

 if (VAR_7 >= *VAR_8 &&
     !FUNC_2(VAR_3, &VAR_6->flags)) {
  FUNC_1(VAR_5, VAR_6);
 }

 return VAR_9;
}
