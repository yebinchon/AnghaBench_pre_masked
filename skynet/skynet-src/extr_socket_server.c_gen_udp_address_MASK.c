
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; int sin6_port; } ;
struct TYPE_3__ {int sin_addr; int sin_port; } ;
union sockaddr_all {TYPE_2__ v6; TYPE_1__ v4; } ;
typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, union sockaddr_all *VAR_2, uint8_t * VAR_3) {
 int VAR_4 = 1;
 VAR_3[0] = (uint8_t)VAR_1;
 if (VAR_1 == VAR_0) {
  FUNC_0(VAR_3+VAR_4, &VAR_2->v4.sin_port, sizeof(VAR_2->v4.sin_port));
  VAR_4 += sizeof(VAR_2->v4.sin_port);
  FUNC_0(VAR_3+VAR_4, &VAR_2->v4.sin_addr, sizeof(VAR_2->v4.sin_addr));
  VAR_4 += sizeof(VAR_2->v4.sin_addr);
 } else {
  FUNC_0(VAR_3+VAR_4, &VAR_2->v6.sin6_port, sizeof(VAR_2->v6.sin6_port));
  VAR_4 += sizeof(VAR_2->v6.sin6_port);
  FUNC_0(VAR_3+VAR_4, &VAR_2->v6.sin6_addr, sizeof(VAR_2->v6.sin6_addr));
  VAR_4 += sizeof(VAR_2->v6.sin6_addr);
 }
 return VAR_4;
}
