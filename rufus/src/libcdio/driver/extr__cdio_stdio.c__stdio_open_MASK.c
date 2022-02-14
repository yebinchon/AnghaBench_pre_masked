
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fd; int fd_buf; int pathname; } ;
typedef TYPE_1__ _UserData ;


 int * FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3 (void *VAR_2)
{
  _UserData *const VAR_3 = VAR_2;

  if ((VAR_3->fd = FUNC_0 (VAR_3->pathname, "rb")))
    {
      VAR_3->fd_buf = FUNC_1 (1, VAR_0);
      FUNC_2 (VAR_3->fd, VAR_3->fd_buf, VAR_1, VAR_0);
    }

  return (VAR_3->fd == ((void*)0));
}
