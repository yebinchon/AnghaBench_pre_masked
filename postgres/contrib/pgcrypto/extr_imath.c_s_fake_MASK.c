
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ mp_usmall ;
typedef scalar_t__ mp_small ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_4__ {int sign; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_1(mp_int VAR_1, mp_small VAR_2, mp_digit VAR_3[])
{
 mp_usmall VAR_4 = (mp_usmall) (VAR_2 < 0) ? -VAR_2 : VAR_2;

 FUNC_0(VAR_1, VAR_4, VAR_3);
 if (VAR_2 < 0)
  VAR_1->sign = VAR_0;
}
