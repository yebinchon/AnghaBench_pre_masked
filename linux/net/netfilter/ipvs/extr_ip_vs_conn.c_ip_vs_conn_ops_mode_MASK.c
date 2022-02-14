
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_service {int flags; } ;
struct ip_vs_conn {TYPE_1__* dest; } ;
struct TYPE_2__ {int svc; } ;


 int VAR_0 ;
 struct ip_vs_service* FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct ip_vs_conn *VAR_1)
{
 struct ip_vs_service *VAR_2;

 if (!VAR_1->dest)
  return 0;
 VAR_2 = FUNC_0(VAR_1->dest->svc);
 return VAR_2 && (VAR_2->flags & VAR_0);
}
