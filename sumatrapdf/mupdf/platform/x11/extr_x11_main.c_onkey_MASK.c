
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {scalar_t__ issearching; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct timeval*,struct timeval*,int *) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(int VAR_6, int VAR_7)
{
 VAR_0 = 0;

 if (VAR_2)
 {
  VAR_2 = 0;
  FUNC_3(&VAR_1);
 }

 if (!VAR_1.issearching && VAR_6 == 'P')
 {
  struct timeval VAR_8;
  struct timeval VAR_9;
  VAR_9.tv_sec = 2;
  VAR_9.tv_usec = 0;
  FUNC_0(&VAR_8, ((void*)0));
  FUNC_2(&VAR_8, &VAR_9, &VAR_5);
  VAR_4 = 1;
  FUNC_3(&VAR_1);
  return;
 }

 FUNC_1(&VAR_1, VAR_6, VAR_7);

 if (VAR_1.issearching)
 {
  VAR_4 = 0;
  VAR_3 = 0;
 }
}
