
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode_security_struct {int sclass; int sid; } ;
struct inode {int i_mode; } ;
struct cred {int dummy; } ;
struct av_decision {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode_security_struct*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct inode_security_struct*) ;
 int FUNC_3 (struct inode*,int ,int ,int ,int,unsigned int) ;
 int FUNC_4 (int ,struct av_decision*,int,int ,int *) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ,struct av_decision*) ;
 int FUNC_6 (struct cred const*) ;
 struct cred* FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 struct inode_security_struct* FUNC_9 (struct inode*,unsigned int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct cred const*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_9, int VAR_10)
{
 const struct cred *VAR_11 = FUNC_7();
 u32 VAR_12;
 bool VAR_13;
 unsigned VAR_14 = VAR_10 & VAR_5;
 struct inode_security_struct *VAR_15;
 u32 VAR_16;
 struct av_decision VAR_17;
 int VAR_18, VAR_19;
 u32 VAR_20, VAR_21;

 VAR_13 = VAR_10 & VAR_2;
 VAR_10 &= (VAR_6|VAR_7|VAR_4|VAR_3);


 if (!VAR_10)
  return 0;

 FUNC_12(VAR_11);

 if (FUNC_11(FUNC_1(VAR_9)))
  return 0;

 VAR_12 = FUNC_8(VAR_9->i_mode, VAR_10);

 VAR_16 = FUNC_6(VAR_11);
 VAR_15 = FUNC_9(VAR_9, VAR_14 & VAR_5);
 if (FUNC_0(VAR_15))
  return FUNC_2(VAR_15);

 VAR_18 = FUNC_5(&VAR_8,
      VAR_16, VAR_15->sid, VAR_15->sclass, VAR_12,
      (VAR_14 & VAR_5) ? VAR_0 : 0,
      &VAR_17);
 VAR_20 = FUNC_4(VAR_12, &VAR_17, VAR_18,
         VAR_13 ? VAR_1 : 0,
         &VAR_21);
 if (FUNC_10(!VAR_20))
  return VAR_18;

 VAR_19 = FUNC_3(VAR_9, VAR_12, VAR_20, VAR_21, VAR_18, VAR_14);
 if (VAR_19)
  return VAR_19;
 return VAR_18;
}
