
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_alloc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (char*,int,int ,int,int ) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
 VAR_5 = FUNC_1("sock_inode_cache",
           sizeof(struct socket_alloc),
           0,
           (VAR_1 |
            VAR_3 |
            VAR_2 | VAR_0),
           VAR_4);
 FUNC_0(VAR_5 == ((void*)0));
}
