
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_sequence {scalar_t__ size; scalar_t__ count; int * sequence; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct msg_sequence **VAR_0, int VAR_1)
{
    struct msg_sequence *VAR_2 = VAR_0[VAR_1];
    FUNC_0(VAR_2->sequence);
    VAR_2->sequence = ((void*)0);
    VAR_2->count = VAR_2->size = 0;
}
