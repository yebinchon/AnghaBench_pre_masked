
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_group {int member_cnt; int max_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct tipc_group *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = VAR_3->member_cnt + 1;


 VAR_4 = FUNC_1(VAR_7 / 8, 64);
 VAR_4 = FUNC_0(VAR_4, 16);
 VAR_3->max_active = VAR_4;


 VAR_5 = VAR_4 * VAR_0;
 VAR_6 = (VAR_7 - VAR_4) * VAR_1;


 return (VAR_5 + VAR_6) * VAR_2 * 4;
}
