
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_5__ {int sin6_port; int sin6_addr; } ;
struct TYPE_4__ {int sin_port; int sin_addr; } ;
union sockaddr_all {TYPE_3__ s; TYPE_2__ v6; TYPE_1__ v4; } ;
typedef int tmp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,void*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(union sockaddr_all *VAR_2, char *VAR_3, size_t VAR_4) {
 char VAR_5[VAR_1];
 void * VAR_6 = (VAR_2->s.sa_family == VAR_0) ? (void*)&VAR_2->v4.sin_addr : (void *)&VAR_2->v6.sin6_addr;
 int VAR_7 = FUNC_1((VAR_2->s.sa_family == VAR_0) ? VAR_2->v4.sin_port : VAR_2->v6.sin6_port);
 if (FUNC_0(VAR_2->s.sa_family, VAR_6, VAR_5, sizeof(VAR_5))) {
  FUNC_2(VAR_3, VAR_4, "%s:%d", VAR_5, VAR_7);
  return 1;
 } else {
  VAR_3[0] = '\0';
  return 0;
 }
}
