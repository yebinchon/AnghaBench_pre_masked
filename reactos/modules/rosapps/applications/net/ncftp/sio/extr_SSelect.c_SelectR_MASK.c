
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fds; int timeout; int maxfd; } ;
typedef TYPE_1__* SelectSetPtr ;
typedef int SelectSet ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int ,int,int *,int *,int) ;

int
FUNC_2(SelectSetPtr VAR_4, SelectSetPtr VAR_5)
{
 int VAR_6;

 do {
  FUNC_0(VAR_5, VAR_4, sizeof(SelectSet));
  VAR_6 = FUNC_1(VAR_5->maxfd, VAR_1 &VAR_5->fds, ((void*)0), ((void*)0), VAR_2 &VAR_5->timeout);
 } while ((VAR_6 < 0) && (VAR_3 == VAR_0));
 return (VAR_6);
}
