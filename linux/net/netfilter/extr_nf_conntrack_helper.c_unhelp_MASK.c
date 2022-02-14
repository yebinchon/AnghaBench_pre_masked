
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_help {int helper; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct nf_conn*) ;
 struct nf_conn_help* FUNC_2 (struct nf_conn*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nf_conn *VAR_1, void *VAR_2)
{
 struct nf_conn_help *VAR_3 = FUNC_2(VAR_1);

 if (VAR_3 && FUNC_3(VAR_3->helper) == VAR_2) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_3->helper, ((void*)0));
 }


 return 0;
}
