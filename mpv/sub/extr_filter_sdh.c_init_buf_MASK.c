
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int length; scalar_t__ pos; int string; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct buffer *VAR_0, int VAR_1)
{
    VAR_0->string = FUNC_0(((void*)0), VAR_1);
    VAR_0->pos = 0;
    VAR_0->length = VAR_1;
}
