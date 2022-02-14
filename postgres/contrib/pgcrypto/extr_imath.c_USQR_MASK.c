
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ mp_size ;
typedef TYPE_1__* mp_int ;
struct TYPE_7__ {scalar_t__ used; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_5(mp_int VAR_0, mp_int VAR_1)
{
 mp_size VAR_2 = FUNC_2(VAR_0);
 mp_size VAR_3 = VAR_2 + VAR_2;

 FUNC_3(FUNC_1(VAR_1), VAR_3);
 (void) FUNC_4(FUNC_1(VAR_0), FUNC_1(VAR_1), VAR_2);
 VAR_1->used = VAR_3;
 FUNC_0(VAR_1);
}
