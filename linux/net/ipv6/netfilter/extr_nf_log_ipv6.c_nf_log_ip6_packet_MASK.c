
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct nf_loginfo {int dummy; } ;
struct nf_log_buf {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct nf_loginfo VAR_0 ;
 int FUNC_0 (struct nf_log_buf*,struct nf_loginfo const*,struct sk_buff const*) ;
 int FUNC_1 (struct net*,struct nf_log_buf*,struct nf_loginfo const*,struct sk_buff const*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct net*,int *) ;
 int FUNC_3 (struct nf_log_buf*) ;
 struct nf_log_buf* FUNC_4 () ;
 int FUNC_5 (struct nf_log_buf*,int ,unsigned int,struct sk_buff const*,struct net_device const*,struct net_device const*,struct nf_loginfo const*,char const*) ;
 int FUNC_6 (struct sk_buff const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct net *VAR_3, u_int8_t VAR_4,
         unsigned int VAR_5, const struct sk_buff *VAR_6,
         const struct net_device *VAR_7,
         const struct net_device *VAR_8,
         const struct nf_loginfo *VAR_9,
         const char *VAR_10)
{
 struct nf_log_buf *VAR_11;


 if (!FUNC_2(VAR_3, &VAR_1) && !VAR_2)
  return;

 VAR_11 = FUNC_4();

 if (!VAR_9)
  VAR_9 = &VAR_0;

 FUNC_5(VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10);

 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_11, VAR_9, VAR_6);

 FUNC_1(VAR_3, VAR_11, VAR_9, VAR_6, FUNC_6(VAR_6), 1);

 FUNC_3(VAR_11);
}
