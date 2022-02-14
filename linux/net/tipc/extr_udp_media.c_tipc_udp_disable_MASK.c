
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_bearer {int work; int bearer; TYPE_1__* ubsock; } ;
struct tipc_bearer {int media_ptr; } ;
struct TYPE_2__ {int sk; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 struct udp_bearer* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct tipc_bearer *VAR_2)
{
 struct udp_bearer *VAR_3;

 VAR_3 = FUNC_3(VAR_2->media_ptr);
 if (!VAR_3) {
  FUNC_2("UDP bearer instance not found\n");
  return;
 }
 FUNC_5(VAR_3->ubsock->sk, VAR_0);
 FUNC_1(VAR_3->bearer, ((void*)0));


 FUNC_0(&VAR_3->work, VAR_1);
 FUNC_4(&VAR_3->work);
}
