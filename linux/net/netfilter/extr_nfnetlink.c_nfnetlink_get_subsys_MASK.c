
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct nfnetlink_subsystem {int dummy; } ;
struct TYPE_2__ {int subsys; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct nfnetlink_subsystem const* FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline const struct nfnetlink_subsystem *FUNC_2(u16 VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 >= VAR_0)
  return ((void*)0);

 return FUNC_1(VAR_1[VAR_3].subsys);
}
