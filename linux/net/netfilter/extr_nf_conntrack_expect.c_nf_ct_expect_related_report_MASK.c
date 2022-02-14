
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nf_conntrack_expect {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nf_conntrack_expect*,unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct nf_conntrack_expect*,int ,int) ;
 int FUNC_2 (struct nf_conntrack_expect*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct nf_conntrack_expect *VAR_2,
    u32 VAR_3, int VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_1);
 VAR_6 = FUNC_0(VAR_2, VAR_5);
 if (VAR_6 < 0)
  goto out;

 FUNC_2(VAR_2);

 FUNC_4(&VAR_1);
 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
 return 0;
out:
 FUNC_4(&VAR_1);
 return VAR_6;
}
