
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_8__ {scalar_t__ sign; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

mp_result
FUNC_4(mp_int VAR_1, mp_int VAR_2)
{
 FUNC_2(VAR_1 != ((void*)0) && VAR_2 != ((void*)0));

 mp_result VAR_3;

 if ((VAR_3 = FUNC_3(VAR_1, VAR_2)) != VAR_0)
  return VAR_3;

 if (FUNC_0(VAR_2) != 0)
  VAR_2->sign = 1 - FUNC_1(VAR_1);

 return VAR_0;
}
