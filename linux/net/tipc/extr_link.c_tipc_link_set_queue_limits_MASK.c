
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_link {int mtu; int window; TYPE_1__* backlog; } ;
struct TYPE_2__ {int limit; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (int ,int,int) ;
 int VAR_7 ;

void FUNC_1(struct tipc_link *VAR_8, u32 VAR_9)
{
 int VAR_10 = VAR_4 / (VAR_8->mtu / VAR_0);

 VAR_8->window = VAR_9;
 VAR_8->backlog[VAR_3].limit = FUNC_0(VAR_7, 50, VAR_9);
 VAR_8->backlog[VAR_5].limit = FUNC_0(VAR_7, 100, VAR_9 * 2);
 VAR_8->backlog[VAR_2].limit = FUNC_0(VAR_7, 150, VAR_9 * 3);
 VAR_8->backlog[VAR_1].limit = FUNC_0(VAR_7, 200, VAR_9 * 4);
 VAR_8->backlog[VAR_6].limit = VAR_10;
}
