
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int locks_mask; int locks; } ;
struct ila_net {TYPE_1__ xlat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ila_net *VAR_3)
{
 return FUNC_0(&VAR_3->xlat.locks, &VAR_3->xlat.locks_mask,
          VAR_2, VAR_1,
          VAR_0);
}
