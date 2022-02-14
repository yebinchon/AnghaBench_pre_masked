
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mp_small ;
typedef int mp_size ;
typedef TYPE_1__* mp_int ;
typedef unsigned int mp_digit ;
struct TYPE_5__ {int used; } ;


 unsigned int* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(mp_int VAR_1, mp_small VAR_2)
{
 mp_size VAR_3,
    VAR_4;
 mp_digit *VAR_5;

 VAR_3 = (VAR_2 + VAR_0) / VAR_0;
 VAR_4 = VAR_2 % VAR_0;

 if (!FUNC_2(VAR_1, VAR_3))
  return 0;

 VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_5, VAR_3);
 *(VAR_5 + VAR_3 - 1) = (1u << VAR_4);
 VAR_1->used = VAR_3;

 return 1;
}
