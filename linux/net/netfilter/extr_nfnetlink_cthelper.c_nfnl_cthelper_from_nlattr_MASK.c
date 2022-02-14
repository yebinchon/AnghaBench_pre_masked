
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct nf_conn_help {int data; TYPE_1__* helper; } ;
struct nf_conn {int dummy; } ;
struct TYPE_2__ {scalar_t__ data_len; } ;


 int VAR_0 ;
 struct nf_conn_help* FUNC_0 (struct nf_conn*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct nlattr *VAR_1, struct nf_conn *VAR_2)
{
 struct nf_conn_help *VAR_3 = FUNC_0(VAR_2);

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 if (VAR_3->helper->data_len == 0)
  return -VAR_0;

 FUNC_2(VAR_3->data, FUNC_1(VAR_1), sizeof(VAR_3->data));
 return 0;
}
