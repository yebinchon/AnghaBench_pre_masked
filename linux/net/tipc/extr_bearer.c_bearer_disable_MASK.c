
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_net {int * bearer_list; } ;
struct tipc_bearer {int identity; scalar_t__ disc; int media_ptr; TYPE_1__* media; int up; int name; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* disable_media ) (struct tipc_bearer*) ;} ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tipc_bearer*,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct tipc_bearer*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct net*,int) ;
 struct tipc_net* FUNC_7 (struct net*) ;
 int FUNC_8 (struct net*,int) ;

__attribute__((used)) static void FUNC_9(struct net *VAR_1, struct tipc_bearer *VAR_2)
{
 struct tipc_net *VAR_3 = FUNC_7(VAR_1);
 int VAR_4 = VAR_2->identity;

 FUNC_3("Disabling bearer <%s>\n", VAR_2->name);
 FUNC_1(0, &VAR_2->up);
 FUNC_8(VAR_1, VAR_4);
 VAR_2->media->disable_media(VAR_2);
 FUNC_0(VAR_2->media_ptr, ((void*)0));
 if (VAR_2->disc)
  FUNC_5(VAR_2->disc);
 FUNC_0(VAR_3->bearer_list[VAR_4], ((void*)0));
 FUNC_2(VAR_2, VAR_0);
 FUNC_6(VAR_1, VAR_4);
}
