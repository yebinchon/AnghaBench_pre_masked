
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** children; } ;
typedef TYPE_1__ Node ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static Node *FUNC_1(int VAR_0, int *VAR_1)
{
    Node *VAR_2 = FUNC_0(0, VAR_0);

    for (*VAR_1 = 0; *VAR_1 < VAR_0; (*VAR_1)++)
        VAR_2->children[*VAR_1] = FUNC_0(*VAR_1, VAR_0);
    *VAR_1 += 2;
    return VAR_2;
}
