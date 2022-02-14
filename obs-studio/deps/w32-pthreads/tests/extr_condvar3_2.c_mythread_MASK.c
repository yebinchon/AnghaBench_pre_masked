
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tv_sec; } ;
struct TYPE_4__ {int tv_sec; } ;
typedef int LPLONG ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_6 ;

void *
FUNC_5(void * VAR_7)
{
  int VAR_8;

  FUNC_1(FUNC_3(&VAR_5) == 0);

  VAR_2 = VAR_1.tv_sec;

  if ((int) (size_t)VAR_7 % 3 == 0)
    {
      VAR_2 += 2;
    }

  VAR_8 = FUNC_2(&VAR_4, &VAR_5, &VAR_2);
  FUNC_1(FUNC_4(&VAR_5) == 0);
  if (VAR_8 == VAR_0)
    {
      FUNC_0((LPLONG)&VAR_6);
    }
  else
    {
      FUNC_0((LPLONG)&VAR_3);
    }


  return VAR_7;
}
