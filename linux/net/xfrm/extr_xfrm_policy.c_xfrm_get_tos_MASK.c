
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flowi4_tos; } ;
struct TYPE_4__ {TYPE_1__ ip4; } ;
struct flowi {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct flowi *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0)
  return VAR_1 & VAR_2->u.ip4.flowi4_tos;

 return 0;
}
