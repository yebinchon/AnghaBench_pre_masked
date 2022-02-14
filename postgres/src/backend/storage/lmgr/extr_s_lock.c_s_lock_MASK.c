
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int slock_t ;
struct TYPE_5__ {int delays; } ;
typedef TYPE_1__ SpinDelayStatus ;


 scalar_t__ FUNC_0 (int volatile*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,int,char const*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(volatile slock_t *VAR_0, const char *VAR_1, int VAR_2, const char *VAR_3)
{
 SpinDelayStatus VAR_4;

 FUNC_2(&VAR_4, VAR_1, VAR_2, VAR_3);

 while (FUNC_0(VAR_0))
 {
  FUNC_3(&VAR_4);
 }

 FUNC_1(&VAR_4);

 return VAR_4.delays;
}
