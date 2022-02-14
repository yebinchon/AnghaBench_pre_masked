
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct unix_domain {int dummy; } ;
struct TYPE_3__ {int expiry_time; scalar_t__ flags; } ;
struct ip_map {int m_addr; int m_class; TYPE_1__ h; struct unix_domain* m_client; } ;
struct cache_head {int dummy; } ;
struct cache_detail {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cache_head*,struct cache_detail*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 struct cache_head* FUNC_4 (struct cache_detail*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(struct cache_detail *VAR_3, struct ip_map *VAR_4,
  struct unix_domain *VAR_5, time_t VAR_6)
{
 struct ip_map VAR_7;
 struct cache_head *VAR_8;

 VAR_7.m_client = VAR_5;
 VAR_7.h.flags = 0;
 if (!VAR_5)
  FUNC_3(VAR_0, &VAR_7.h.flags);
 VAR_7.h.expiry_time = VAR_6;
 VAR_8 = FUNC_4(VAR_3, &VAR_7.h, &VAR_4->h,
     FUNC_2(VAR_4->m_class, VAR_2) ^
     FUNC_1(&VAR_4->m_addr));
 if (!VAR_8)
  return -VAR_1;
 FUNC_0(VAR_8, VAR_3);
 return 0;
}
