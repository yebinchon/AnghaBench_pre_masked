
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_expect {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3(void)
{
 if (!VAR_4) {
  VAR_4 = VAR_1 / 256;
  if (!VAR_4)
   VAR_4 = 1;
 }
 VAR_5 = VAR_4 * 4;
 VAR_2 = FUNC_0("nf_conntrack_expect",
    sizeof(struct nf_conntrack_expect),
    0, 0, ((void*)0));
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_2(&VAR_4, 0);
 if (!VAR_3) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }

 return 0;
}
