
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct swaybar_binding {int command; int release; int button; } ;
struct swaybar {int ipc_socketfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;

void FUNC_4(struct swaybar *VAR_2, struct swaybar_binding *VAR_3) {
 FUNC_3(VAR_1, "Executing binding for button %u (release=%d): `%s`",
   VAR_3->button, VAR_3->release, VAR_3->command);
 uint32_t VAR_4 = FUNC_2(VAR_3->command);
 FUNC_0(FUNC_1(VAR_2->ipc_socketfd,
   VAR_0, VAR_3->command, &VAR_4));
}
