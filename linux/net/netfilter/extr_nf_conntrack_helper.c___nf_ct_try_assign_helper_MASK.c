
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_helper {scalar_t__ help; } ;
struct nf_conn_help {struct nf_conntrack_helper* helper; } ;
struct nf_conn {int status; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nf_conntrack_helper*,int *) ;
 struct nf_conn_help* FUNC_1 (struct nf_conn*,int ) ;
 struct nf_conntrack_helper* FUNC_2 (struct nf_conn*,struct net*) ;
 struct net* FUNC_3 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conntrack_helper*,struct nf_conntrack_helper*) ;
 struct nf_conntrack_helper* FUNC_6 (struct nf_conntrack_helper*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct nf_conn *VAR_2, struct nf_conn *VAR_3,
         gfp_t VAR_4)
{
 struct nf_conntrack_helper *VAR_5 = ((void*)0);
 struct nf_conn_help *VAR_6;
 struct net *VAR_7 = FUNC_3(VAR_2);







 if (FUNC_8(VAR_1, &VAR_2->status))
  return 0;

 if (VAR_3 != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_3);
  if (VAR_6 != ((void*)0)) {
   VAR_5 = VAR_6->helper;
   FUNC_7(VAR_1, &VAR_2->status);
  }
 }

 VAR_6 = FUNC_4(VAR_2);

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_2(VAR_2, VAR_7);
  if (VAR_5 == ((void*)0)) {
   if (VAR_6)
    FUNC_0(VAR_6->helper, ((void*)0));
   return 0;
  }
 }

 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_1(VAR_2, VAR_4);
  if (VAR_6 == ((void*)0))
   return -VAR_0;
 } else {



  struct nf_conntrack_helper *VAR_8 = FUNC_6(VAR_6->helper);

  if (VAR_8 && VAR_8->help != VAR_5->help) {
   FUNC_0(VAR_6->helper, ((void*)0));
   return 0;
  }
 }

 FUNC_5(VAR_6->helper, VAR_5);

 return 0;
}
