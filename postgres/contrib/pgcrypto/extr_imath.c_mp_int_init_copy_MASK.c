
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int mp_size ;
typedef scalar_t__ mp_result ;
typedef TYPE_1__* mp_int ;
struct TYPE_8__ {int used; int sign; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int) ;

mp_result
FUNC_7(mp_int VAR_2, mp_int VAR_3)
{
 FUNC_4(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));

 mp_size VAR_4 = FUNC_3(VAR_3);

 if (VAR_4 == 1)
 {
  FUNC_5(VAR_2);
 }
 else
 {
  mp_size VAR_5 = FUNC_1(VAR_4, VAR_1);
  mp_result VAR_6 = FUNC_6(VAR_2, VAR_5);

  if (VAR_6 != VAR_0)
   return VAR_6;
 }

 VAR_2->used = VAR_4;
 VAR_2->sign = VAR_3->sign;
 FUNC_0(FUNC_2(VAR_3), FUNC_2(VAR_2), VAR_4);

 return VAR_0;
}
