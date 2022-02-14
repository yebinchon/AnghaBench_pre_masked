
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigqueue {int flags; TYPE_1__* user; } ;
struct TYPE_2__ {int sigpending; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct sigqueue*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct sigqueue *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return;
 FUNC_0(&VAR_2->user->sigpending);
 FUNC_1(VAR_2->user);
 FUNC_2(VAR_1, VAR_2);
}
