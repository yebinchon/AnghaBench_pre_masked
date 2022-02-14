
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int sin_addr; } ;
struct TYPE_12__ {scalar_t__ sa_family; } ;
struct TYPE_11__ {int sin6_addr; } ;
struct TYPE_16__ {TYPE_6__ sa_inet; TYPE_4__ sa; TYPE_3__ sa_inet6; } ;
struct TYPE_13__ {char sin6_addr; } ;
struct TYPE_10__ {scalar_t__ sa_family; } ;
struct TYPE_9__ {char sin_addr; } ;
struct TYPE_15__ {TYPE_5__ sa_inet6; TYPE_2__ sa; TYPE_1__ sa_inet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 TYPE_8__* VAR_3 ;
 TYPE_7__ VAR_4 ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static int FUNC_2() {
 int VAR_5;

 if (VAR_4.sa.sa_family == VAR_2) {
  return 1;
 }
 if (!VAR_3) {
  return 1;
 }
 if (VAR_4.sa.sa_family == VAR_0) {
  for (VAR_5 = 0; VAR_3[VAR_5].sa.sa_family ; VAR_5++) {
   if (VAR_3[VAR_5].sa.sa_family == VAR_0
    && !FUNC_1(&VAR_4.sa_inet.sin_addr, &VAR_3[VAR_5].sa_inet.sin_addr, 4)) {
    return 1;
   }
  }
 }
 return 0;
}
