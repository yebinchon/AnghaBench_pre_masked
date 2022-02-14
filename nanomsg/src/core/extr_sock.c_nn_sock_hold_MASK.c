
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sock {int state; int holds; } ;


 int VAR_0 ;






int FUNC_0 (struct nn_sock *VAR_1)
{
    switch (VAR_1->state) {
    case 132:
    case 130:
        VAR_1->holds++;
        return 0;
    case 129:
    case 128:
    case 131:
    default:
        return -VAR_0;
    }
}
