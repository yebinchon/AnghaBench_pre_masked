
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fqdir; scalar_t__ fragments_tail; } ;
struct ipq {unsigned int rid; TYPE_2__ q; struct inet_peer* peer; } ;
struct inet_peer {int rid; } ;
struct TYPE_3__ {unsigned int max_dist; int net; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ipq *VAR_1)
{
 struct inet_peer *VAR_2 = VAR_1->peer;
 unsigned int VAR_3 = VAR_1->q.fqdir->max_dist;
 unsigned int VAR_4, VAR_5;

 int VAR_6;

 if (!VAR_2 || !VAR_3)
  return 0;

 VAR_4 = VAR_1->rid;
 VAR_5 = FUNC_1(&VAR_2->rid);
 VAR_1->rid = VAR_5;

 VAR_6 = VAR_1->q.fragments_tail && (VAR_5 - VAR_4) > VAR_3;

 if (VAR_6)
  FUNC_0(VAR_1->q.fqdir->net, VAR_0);

 return VAR_6;
}
