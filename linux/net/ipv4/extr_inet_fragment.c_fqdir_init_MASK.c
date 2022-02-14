
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct inet_frags {int refcnt; int rhash_params; } ;
struct fqdir {struct inet_frags* f; int rhashtable; struct net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fqdir*) ;
 struct fqdir* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(struct fqdir **VAR_2, struct inet_frags *VAR_3, struct net *VAR_4)
{
 struct fqdir *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;
 VAR_5->f = VAR_3;
 VAR_5->net = VAR_4;
 VAR_6 = FUNC_3(&VAR_5->rhashtable, &VAR_5->f->rhash_params);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5);
  return VAR_6;
 }
 FUNC_2(&VAR_3->refcnt);
 *VAR_2 = VAR_5;
 return 0;
}
