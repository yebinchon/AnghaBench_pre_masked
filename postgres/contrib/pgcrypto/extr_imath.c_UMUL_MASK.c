
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ mp_size ;
typedef TYPE_1__* mp_int ;
struct TYPE_8__ {scalar_t__ used; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_5(mp_int VAR_0, mp_int VAR_1, mp_int VAR_2)
{
 mp_size VAR_3 = FUNC_2(VAR_0);
 mp_size VAR_4 = FUNC_2(VAR_1);
 mp_size VAR_5 = VAR_3 + VAR_4;

 FUNC_3(FUNC_1(VAR_2), VAR_5);
 (void) FUNC_4(FUNC_1(VAR_0), FUNC_1(VAR_1), FUNC_1(VAR_2), VAR_3, VAR_4);
 VAR_2->used = VAR_5;
 FUNC_0(VAR_2);
}
