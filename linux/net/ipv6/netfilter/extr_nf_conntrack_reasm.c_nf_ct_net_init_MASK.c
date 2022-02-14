
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* fqdir; } ;
struct net {TYPE_1__ nf_frag; } ;
struct TYPE_5__ {int timeout; int low_thresh; int high_thresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__**,int *,struct net*) ;
 int FUNC_2 (struct net*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4->nf_frag.fqdir, &VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->nf_frag.fqdir->high_thresh = VAR_0;
 VAR_4->nf_frag.fqdir->low_thresh = VAR_1;
 VAR_4->nf_frag.fqdir->timeout = VAR_2;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_4->nf_frag.fqdir);
 return VAR_5;
}
