
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_conntrack_helper {char* name; int (* from_nlattr ) (struct nlattr*,struct nf_conn*) ;} ;
struct nf_conn_help {struct nf_conntrack_helper* helper; } ;
struct nf_conn {scalar_t__ master; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nf_conntrack_helper*,int *) ;
 struct nf_conntrack_helper* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct nlattr const* const,char**,struct nlattr**) ;
 int FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conn*) ;
 int FUNC_5 (struct nf_conn*) ;
 struct nf_conn_help* FUNC_6 (struct nf_conn*) ;
 struct nf_conntrack_helper* FUNC_7 (struct nf_conntrack_helper*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (struct nlattr*,struct nf_conn*) ;

__attribute__((used)) static int FUNC_12(struct nf_conn *VAR_3,
       const struct nlattr * const VAR_4[])
{
 struct nf_conntrack_helper *VAR_5;
 struct nf_conn_help *VAR_6 = FUNC_6(VAR_3);
 char *VAR_7 = ((void*)0);
 struct nlattr *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4[VAR_0], &VAR_7, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_3->master) {




  VAR_9 = -VAR_1;
  if (VAR_6) {
   FUNC_8();
   VAR_5 = FUNC_7(VAR_6->helper);
   if (VAR_5 && !FUNC_10(VAR_5->name, VAR_7))
    VAR_9 = 0;
   FUNC_9();
  }

  return VAR_9;
 }

 if (!FUNC_10(VAR_7, "")) {
  if (VAR_6 && VAR_6->helper) {

   FUNC_5(VAR_3);
   FUNC_0(VAR_6->helper, ((void*)0));
  }

  return 0;
 }

 FUNC_8();
 VAR_5 = FUNC_1(VAR_7, FUNC_3(VAR_3),
         FUNC_4(VAR_3));
 if (VAR_5 == ((void*)0)) {
  FUNC_9();
  return -VAR_2;
 }

 if (VAR_6) {
  if (VAR_6->helper == VAR_5) {

   if (VAR_5->from_nlattr)
    VAR_5->from_nlattr(VAR_8, VAR_3);
   VAR_9 = 0;
  } else
   VAR_9 = -VAR_1;
 } else {

  VAR_9 = -VAR_2;
 }

 FUNC_9();
 return VAR_9;
}
