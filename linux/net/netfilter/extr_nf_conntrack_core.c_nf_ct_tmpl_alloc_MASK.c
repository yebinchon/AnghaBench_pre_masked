
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nf_conntrack_zone {int dummy; } ;
struct TYPE_4__ {int use; } ;
struct TYPE_3__ {int tmpl_padto; } ;
struct nf_conn {TYPE_2__ ct_general; int ct_net; int status; TYPE_1__ proto; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 struct nf_conn* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nf_conn*,struct nf_conntrack_zone const*) ;
 int FUNC_4 (int *,struct net*) ;

struct nf_conn *FUNC_5(struct net *VAR_3,
     const struct nf_conntrack_zone *VAR_4,
     gfp_t VAR_5)
{
 struct nf_conn *VAR_6, *VAR_7;

 if (VAR_0 <= VAR_2) {
  VAR_6 = FUNC_2(sizeof(*VAR_6) + VAR_2, VAR_5);
  if (!VAR_6)
   return ((void*)0);

  VAR_7 = VAR_6;
  VAR_6 = (struct nf_conn *)FUNC_0((unsigned long)VAR_7);
  if (VAR_6 != VAR_7) {
   VAR_6 = (struct nf_conn *)FUNC_0((unsigned long)VAR_7);
   VAR_6->proto.tmpl_padto = (char *)VAR_6 - (char *)VAR_7;
  }
 } else {
  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_5);
  if (!VAR_6)
   return ((void*)0);
 }

 VAR_6->status = VAR_1;
 FUNC_4(&VAR_6->ct_net, VAR_3);
 FUNC_3(VAR_6, VAR_4);
 FUNC_1(&VAR_6->ct_general.use, 0);

 return VAR_6;
}
