
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nf_ct_ftp_master {int * flags; } ;
struct nf_conn {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct nf_ct_ftp_master* FUNC_0 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_3, struct nf_conn *VAR_4)
{
 struct nf_ct_ftp_master *VAR_5 = FUNC_0(VAR_4);





 VAR_5->flags[VAR_0] |= VAR_2;
 VAR_5->flags[VAR_1] |= VAR_2;
 return 0;
}
