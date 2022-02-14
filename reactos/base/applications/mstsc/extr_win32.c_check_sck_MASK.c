
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct timeval {int dummy; } ;
typedef int fd_set ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct timeval*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (scalar_t__,int *,int ,int ,struct timeval*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void)
{
  fd_set VAR_2;
  struct timeval VAR_3;
  int VAR_4;
  int VAR_5;

  VAR_5 = 0;
  if (VAR_0 == 0)
  {
    VAR_0 = 1;

    FUNC_1(&VAR_2);
    FUNC_0((unsigned int)VAR_1, &VAR_2);
    FUNC_3(&VAR_3, sizeof(VAR_3));
    VAR_4 = FUNC_4(VAR_1 + 1, &VAR_2, 0, 0, &VAR_3);
    if (VAR_4 > 0)
    {
      if (FUNC_5())
      {
        VAR_5 = 1;
      }
      else
      {
        FUNC_2(0);
      }
    }
    VAR_0 = 0;
  }
  return VAR_5;
}
