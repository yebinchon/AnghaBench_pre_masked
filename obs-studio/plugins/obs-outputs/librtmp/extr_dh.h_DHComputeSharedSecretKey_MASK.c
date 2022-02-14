
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int p; } ;
typedef int * MP_t ;
typedef TYPE_1__ MDH ;


 size_t VAR_0 ;
 int FUNC_0 (int *,size_t,int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *,int ,size_t) ;
 int VAR_1 ;
 int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_6(MDH *VAR_2, uint8_t *VAR_3, size_t VAR_4,
                         uint8_t *VAR_5)
{
    MP_t VAR_6 = ((void*)0), VAR_7 = ((void*)0);
    size_t VAR_8;
    int VAR_9;

    if (!VAR_2 || !VAR_5 || VAR_4 >= VAR_0)
        return -1;

    FUNC_2(VAR_7, VAR_3, VAR_4);
    if (!VAR_7)
        return -1;

    FUNC_3(VAR_6, VAR_1, VAR_8);
    FUNC_4(VAR_8);

    if (FUNC_5(VAR_7, VAR_2->p, VAR_6))
        VAR_9 = FUNC_0(VAR_5, VAR_4, VAR_7, VAR_2);
    else
        VAR_9 = -1;

    FUNC_1(VAR_6);
    FUNC_1(VAR_7);

    return VAR_9;
}
