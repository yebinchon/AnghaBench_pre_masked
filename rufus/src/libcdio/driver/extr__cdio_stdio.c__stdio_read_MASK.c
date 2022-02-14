
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long ssize_t ;
struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ _UserData ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 long FUNC_5 (void*,int,size_t,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static ssize_t
FUNC_7(void *VAR_1, void *VAR_2, size_t VAR_3)
{
  _UserData *const VAR_4 = VAR_1;
  long VAR_5;

  VAR_5 = FUNC_5(VAR_2, 1, VAR_3, VAR_4->fd);

  if (VAR_5 != VAR_3)
    {
      if (FUNC_3 (VAR_4->fd))
        {
          FUNC_0 ("fread (): EOF encountered");
          FUNC_2 (VAR_4->fd);
        }
      else if (FUNC_4 (VAR_4->fd))
        {
          FUNC_1 ("fread (): %s", FUNC_6 (VAR_0));
          FUNC_2 (VAR_4->fd);
        }
      else
        FUNC_0 ("fread (): short read and no EOF?!?");
    }

  return VAR_5;
}
