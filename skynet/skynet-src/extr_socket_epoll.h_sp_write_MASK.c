
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int,struct epoll_event*) ;

__attribute__((used)) static void
FUNC_1(int VAR_3, int VAR_4, void *VAR_5, bool VAR_6) {
 struct epoll_event VAR_7;
 VAR_7.events = VAR_0 | (VAR_6 ? VAR_1 : 0);
 VAR_7.data.ptr = VAR_5;
 FUNC_0(VAR_3, VAR_2, VAR_4, &VAR_7);
}
