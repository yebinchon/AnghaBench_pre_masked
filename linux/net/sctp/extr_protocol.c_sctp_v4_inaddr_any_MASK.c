
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(union sctp_addr *VAR_2, __be16 VAR_3)
{
 VAR_2->v4.sin_family = VAR_0;
 VAR_2->v4.sin_addr.s_addr = FUNC_0(VAR_1);
 VAR_2->v4.sin_port = VAR_3;
}
