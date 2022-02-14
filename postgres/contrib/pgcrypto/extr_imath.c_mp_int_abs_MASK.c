
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_6__ {int sign; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

mp_result
FUNC_2(mp_int VAR_2, mp_int VAR_3)
{
 FUNC_0(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));

 mp_result VAR_4;

 if ((VAR_4 = FUNC_1(VAR_2, VAR_3)) != VAR_0)
  return VAR_4;

 VAR_3->sign = VAR_1;
 return VAR_0;
}
