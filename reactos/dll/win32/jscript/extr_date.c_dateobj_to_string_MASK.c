
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jsval_t ;
struct TYPE_5__ {int bias; int time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;
typedef int DOUBLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_3(DateInstance *VAR_1, jsval_t *VAR_2)
{
    DOUBLE VAR_3;
    int VAR_4;

    VAR_3 = FUNC_2(VAR_1->time, VAR_1);
    VAR_4 = VAR_1->bias +
        FUNC_1(VAR_3, VAR_1);

    return FUNC_0(VAR_3, VAR_0, VAR_4, VAR_2);
}
