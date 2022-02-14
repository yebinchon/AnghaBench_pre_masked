
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int count; } ;
struct net {TYPE_1__ ct; } ;
struct iter_data {int (* iter ) (struct nf_conn*,void*) ;struct net* net; void* data; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct iter_data*,int ,int) ;

void FUNC_3(struct net *VAR_1,
          int (*VAR_2)(struct nf_conn *VAR_3, void *VAR_4),
          void *VAR_5, u32 VAR_6, int VAR_7)
{
 struct iter_data VAR_8;

 FUNC_1();

 if (FUNC_0(&VAR_1->ct.count) == 0)
  return;

 VAR_8.iter = VAR_2;
 VAR_8.data = VAR_5;
 VAR_8.net = VAR_1;

 FUNC_2(VAR_0, &VAR_8, VAR_6, VAR_7);
}
