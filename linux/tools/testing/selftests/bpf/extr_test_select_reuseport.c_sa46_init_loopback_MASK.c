
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_2__ sin_addr; } ;
struct TYPE_4__ {int sin6_addr; } ;
union sa46 {scalar_t__ family; TYPE_3__ v4; TYPE_1__ v6; } ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (union sa46*,int ,int) ;

__attribute__((used)) static void FUNC_2(union sa46 *VAR_3, sa_family_t VAR_4)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->family = VAR_4;
 if (VAR_3->family == VAR_0)
  VAR_3->v6.sin6_addr = VAR_2;
 else
  VAR_3->v4.sin_addr.s_addr = FUNC_0(VAR_1);
}
