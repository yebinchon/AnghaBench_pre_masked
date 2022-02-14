
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int listening_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_5)
{
 int VAR_6 = VAR_3;


 FUNC_0(VAR_4.listening_socket);
 if (0 > FUNC_2(VAR_0, VAR_1, 0)) {
  FUNC_3(VAR_2, "failed to create a new socket");
 }
 FUNC_1();
 VAR_3 = VAR_6;
}
