
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net {int dummy; } ;
struct common_audit_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_1 (struct net*,int,int *) ;
 int FUNC_2 (char*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct net *VAR_5, int VAR_6,
        char *VAR_7, u16 VAR_8, u32 VAR_9,
        struct common_audit_data *VAR_10)
{
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_1(VAR_5, VAR_6, &VAR_12);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_0(&VAR_4,
      VAR_9, VAR_12,
      VAR_2, VAR_0, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_7, VAR_8, &VAR_13);
 if (VAR_11)
  return VAR_11;
 return FUNC_0(&VAR_4,
       VAR_9, VAR_13,
       VAR_3, VAR_1, VAR_10);
}
