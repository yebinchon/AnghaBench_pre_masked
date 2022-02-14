
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_service_user_kern {int dummy; } ;
struct ip_vs_service {int dummy; } ;


 struct ip_vs_service* FUNC_0 (int) ;
 int FUNC_1 (struct netns_ipvs*,struct ip_vs_service_user_kern*,struct nlattr*,int,struct ip_vs_service**) ;

__attribute__((used)) static struct ip_vs_service *FUNC_2(struct netns_ipvs *VAR_0,
           struct nlattr *VAR_1)
{
 struct ip_vs_service_user_kern VAR_2;
 struct ip_vs_service *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_2, VAR_1, 0, &VAR_3);
 return VAR_4 ? FUNC_0(VAR_4) : VAR_3;
}
