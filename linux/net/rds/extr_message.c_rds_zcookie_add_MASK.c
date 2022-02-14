
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rds_zcopy_cookies {int num; int * cookies; } ;
struct rds_msg_zcopy_info {struct rds_zcopy_cookies zcookies; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct rds_msg_zcopy_info *VAR_1, u32 VAR_2)
{
 struct rds_zcopy_cookies *VAR_3 = &VAR_1->zcookies;
 int VAR_4 = VAR_3->num;

 if (VAR_4 == VAR_0)
  return 0;
 VAR_3->cookies[VAR_4] = VAR_2;
 VAR_3->num = ++VAR_4;
 return 1;
}
