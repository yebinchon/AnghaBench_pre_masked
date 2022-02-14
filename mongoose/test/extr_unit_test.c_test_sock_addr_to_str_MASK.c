
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* sin6_port; int sin6_addr; } ;
struct TYPE_7__ {int sa_family; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {void* sin_port; TYPE_1__ sin_addr; } ;
union socket_address {TYPE_4__ sin6; TYPE_3__ sa; TYPE_2__ sin; } ;
typedef int buf ;
typedef int a6 ;
typedef int a4 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (union socket_address*,int ,int) ;
 int FUNC_6 (union socket_address*,char*,int,int) ;

__attribute__((used)) static const char *FUNC_7(void) {
  char VAR_4[60];
  VAR_4[0] = '\0';
  {
    union socket_address VAR_5;
    FUNC_5(&VAR_5, 0, sizeof(VAR_5));
    VAR_5 = VAR_0;
    VAR_5 = FUNC_3("127.0.0.1");
    VAR_5 = FUNC_2(12345);
    FUNC_6(&VAR_5, VAR_4, sizeof(VAR_4), 0);
    FUNC_1(VAR_4, "");
    FUNC_6(&VAR_5, VAR_4, sizeof(VAR_4), VAR_2);
    FUNC_1(VAR_4, "127.0.0.1");
    FUNC_6(&VAR_5, VAR_4, sizeof(VAR_4), VAR_3);
    FUNC_1(VAR_4, "12345");
    FUNC_6(&VAR_5, VAR_4, sizeof(VAR_4),
                        VAR_2 | VAR_3);
    FUNC_1(VAR_4, "127.0.0.1:12345");
  }
  return ((void*)0);
}
