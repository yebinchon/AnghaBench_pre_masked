
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u32 ;
struct nlattr {int dummy; } ;
struct nf_conntrack_zone {int dummy; } ;
struct nf_conntrack_tuple_hash {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct nf_conntrack_helper {int dummy; } ;
struct nf_conntrack_expect {int dummy; } ;
struct nf_conn {int dummy; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nf_conntrack_expect*) ;
 int FUNC_1 (struct nf_conntrack_expect*) ;
 struct nf_conntrack_helper* FUNC_2 (char const*,int ,int ) ;
 struct nf_conntrack_expect* FUNC_3 (struct nlattr const* const*,struct nf_conn*,struct nf_conntrack_helper*,struct nf_conntrack_tuple*,struct nf_conntrack_tuple*) ;
 int FUNC_4 (struct nlattr const* const*,struct nf_conntrack_tuple*,int ,int ,int *) ;
 struct nf_conntrack_tuple_hash* FUNC_5 (struct net*,struct nf_conntrack_zone const*,struct nf_conntrack_tuple*) ;
 int FUNC_6 (struct nf_conntrack_expect*) ;
 int FUNC_7 (struct nf_conntrack_expect*,int ,int,int ) ;
 int FUNC_8 (struct nf_conn*) ;
 int FUNC_9 (struct nf_conn*) ;
 struct nf_conn* FUNC_10 (struct nf_conntrack_tuple_hash*) ;
 char* FUNC_11 (struct nlattr const* const) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (char*,char const*) ;

__attribute__((used)) static int
FUNC_15(struct net *VAR_7,
   const struct nf_conntrack_zone *VAR_8,
   const struct nlattr * const VAR_9[],
   u_int8_t VAR_10, u32 VAR_11, int VAR_12)
{
 struct nf_conntrack_tuple VAR_13, VAR_14, VAR_15;
 struct nf_conntrack_tuple_hash *VAR_16 = ((void*)0);
 struct nf_conntrack_helper *VAR_17 = ((void*)0);
 struct nf_conntrack_expect *VAR_18;
 struct nf_conn *VAR_19;
 int VAR_20;


 VAR_20 = FUNC_4(VAR_9, &VAR_13, VAR_3,
        VAR_10, ((void*)0));
 if (VAR_20 < 0)
  return VAR_20;
 VAR_20 = FUNC_4(VAR_9, &VAR_14, VAR_1,
        VAR_10, ((void*)0));
 if (VAR_20 < 0)
  return VAR_20;
 VAR_20 = FUNC_4(VAR_9, &VAR_15, VAR_2,
        VAR_10, ((void*)0));
 if (VAR_20 < 0)
  return VAR_20;


 VAR_16 = FUNC_5(VAR_7, VAR_8, &VAR_15);
 if (!VAR_16)
  return -VAR_5;
 VAR_19 = FUNC_10(VAR_16);

 FUNC_12();
 if (VAR_9[VAR_0]) {
  const char *VAR_21 = FUNC_11(VAR_9[VAR_0]);

  VAR_17 = FUNC_2(VAR_21, VAR_10,
          FUNC_8(VAR_19));
  if (VAR_17 == ((void*)0)) {
   FUNC_13();
   VAR_20 = -VAR_6;
   goto err_ct;
  }
 }

 VAR_18 = FUNC_3(VAR_9, VAR_19, VAR_17, &VAR_13, &VAR_14);
 if (FUNC_0(VAR_18)) {
  VAR_20 = FUNC_1(VAR_18);
  goto err_rcu;
 }

 VAR_20 = FUNC_7(VAR_18, VAR_11, VAR_12, 0);
 FUNC_6(VAR_18);
err_rcu:
 FUNC_13();
err_ct:
 FUNC_9(VAR_19);
 return VAR_20;
}
