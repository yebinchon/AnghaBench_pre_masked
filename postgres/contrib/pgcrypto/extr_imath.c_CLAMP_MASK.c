
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mp_size ;
typedef TYPE_1__* mp_int ;
typedef int mp_digit ;
struct TYPE_5__ {int used; } ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_2(mp_int VAR_0)
{
 mp_size VAR_1 = FUNC_1(VAR_0);
 mp_digit *VAR_2 = FUNC_0(VAR_0) + VAR_1 - 1;

 while (VAR_1 > 1 && (*VAR_2-- == 0))
  --VAR_1;
 VAR_0->used = VAR_1;
}
