
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int saddr ;
typedef int daddr ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_4 ;
 int FUNC_3 (int,int ,char*) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,char*,int,int ) ;
 int FUNC_7 (void*,int,int ) ;

__attribute__((used)) static void FUNC_8(int VAR_5)
{
 struct sockaddr_in VAR_6, VAR_7;
 int VAR_8;

 VAR_6.sin_family = VAR_0;
 VAR_6.sin_addr.s_addr = FUNC_4(VAR_1);
 VAR_6.sin_port = 0;

 VAR_7.sin_family = VAR_0;
 VAR_7.sin_addr.s_addr = FUNC_4(VAR_2);
 VAR_7.sin_port = FUNC_5(VAR_3);

 VAR_8 = FUNC_7(VAR_0, VAR_5, 0);
 if (VAR_8 < 0)
  FUNC_3(1, VAR_4, "failed to create send socket");

 if (FUNC_0(VAR_8, (struct sockaddr *)&VAR_6, sizeof(VAR_6)))
  FUNC_3(1, VAR_4, "failed to bind send socket");

 if (FUNC_2(VAR_8, (struct sockaddr *)&VAR_7, sizeof(VAR_7)))
  FUNC_3(1, VAR_4, "failed to connect send socket");

 if (FUNC_6(VAR_8, "a", 1, 0) < 0)
  FUNC_3(1, VAR_4, "failed to send message");

 FUNC_1(VAR_8);
}
