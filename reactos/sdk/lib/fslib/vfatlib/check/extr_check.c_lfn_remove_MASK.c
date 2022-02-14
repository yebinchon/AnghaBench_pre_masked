
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef int empty ;
struct TYPE_4__ {int * name; } ;
typedef TYPE_1__ DIR_ENT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(off_t VAR_1, off_t VAR_2)
{
    DIR_ENT VAR_3;





    FUNC_1(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.name[0] = VAR_0;

    for (; VAR_1 < VAR_2; VAR_1 += sizeof(VAR_3)) {
 FUNC_0(VAR_1, sizeof(DIR_ENT), &VAR_3);
    }
}
