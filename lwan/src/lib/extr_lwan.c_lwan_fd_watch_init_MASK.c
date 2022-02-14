
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan {scalar_t__ epfd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct lwan *VAR_1)
{
    VAR_1->epfd = FUNC_0(VAR_0);
    if (VAR_1->epfd < 0)
        FUNC_1("epoll_create1");
}
