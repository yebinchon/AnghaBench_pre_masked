
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fd_buf; int * fd; } ;
typedef TYPE_1__ _UserData ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_1)
{
  _UserData *const VAR_2 = VAR_1;

  if (FUNC_1 (VAR_2->fd))
    FUNC_0 ("fclose (): %s", FUNC_3 (VAR_0));

  VAR_2->fd = ((void*)0);

  FUNC_2 (VAR_2->fd_buf);
  VAR_2->fd_buf = ((void*)0);

  return 0;
}
