
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin_port; int sin_addr; } ;
struct TYPE_5__ {scalar_t__ sa_family; } ;
struct TYPE_4__ {int sin6_addr; } ;
union socket_address {TYPE_3__ sin; TYPE_2__ sa; TYPE_1__ sin6; } ;
typedef size_t socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__,void*,char*,size_t) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,size_t,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,size_t) ;

int FUNC_7(const union socket_address *VAR_4, char *VAR_5, size_t VAR_6,
                        int VAR_7) {
  int VAR_8;
  if (VAR_5 == ((void*)0) || VAR_6 <= 0) return 0;
  FUNC_2(VAR_5, 0, VAR_6);



  VAR_8 = 0;

  if (VAR_7 & VAR_2) {
    char *VAR_9 = FUNC_0(VAR_4->sin.sin_addr);
    if (VAR_9 != ((void*)0)) {
      FUNC_6(VAR_5, FUNC_0(VAR_4->sin.sin_addr), VAR_6 - 1);
    } else {
      goto cleanup;
    }





  }
  if (VAR_7 & VAR_3) {
    int VAR_10 = FUNC_3(VAR_4->sin.sin_port);
    if (VAR_7 & VAR_2) {
      int VAR_11 = FUNC_5(VAR_5);
      FUNC_4(VAR_5 + VAR_11, VAR_6 - (VAR_11 + 1), "%s:%d", (VAR_8 ? "]" : ""),
               VAR_10);
    } else {
      FUNC_4(VAR_5, VAR_6, "%d", VAR_10);
    }
  }

  return FUNC_5(VAR_5);

cleanup:
  *VAR_5 = '\0';
  return 0;
}
