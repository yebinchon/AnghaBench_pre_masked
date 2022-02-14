
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mld2_report {int mld2r_ngrec; } ;
struct mld2_grec {int grec_type; int grec_mca; scalar_t__ grec_nsrcs; scalar_t__ grec_auxwords; } ;
struct ifmcaddr6 {int mca_addr; int idev; } ;


 int FUNC_0 (scalar_t__) ;
 struct sk_buff* FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mld2_grec* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sk_buff *VAR_0, struct ifmcaddr6 *VAR_1,
 int VAR_2, struct mld2_grec **VAR_3, unsigned int VAR_4)
{
 struct mld2_report *VAR_5;
 struct mld2_grec *VAR_6;

 if (!VAR_0) {
  VAR_0 = FUNC_1(VAR_1->idev, VAR_4);
  if (!VAR_0)
   return ((void*)0);
 }
 VAR_6 = FUNC_3(VAR_0, sizeof(struct mld2_grec));
 VAR_6->grec_type = VAR_2;
 VAR_6->grec_auxwords = 0;
 VAR_6->grec_nsrcs = 0;
 VAR_6->grec_mca = VAR_1->mca_addr;
 VAR_5 = (struct mld2_report *)FUNC_4(VAR_0);
 VAR_5->mld2r_ngrec = FUNC_0(FUNC_2(VAR_5->mld2r_ngrec)+1);
 *VAR_3 = VAR_6;
 return VAR_0;
}
