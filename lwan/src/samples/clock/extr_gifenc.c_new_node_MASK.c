
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int key; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static Node *FUNC_1(uint16_t VAR_0, int VAR_1)
{
    Node *VAR_2 = FUNC_0(1, sizeof(*VAR_2) + VAR_1 * sizeof(Node *));
    if (VAR_2)
        VAR_2->key = VAR_0;
    return VAR_2;
}
