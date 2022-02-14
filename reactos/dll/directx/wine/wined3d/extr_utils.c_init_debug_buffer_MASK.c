
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_buffer {int str; int size; int ptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(struct debug_buffer *VAR_0, const char *VAR_1)
{
    FUNC_1(VAR_0->str, VAR_1);
    VAR_0->ptr = VAR_0->str;
    VAR_0->size = FUNC_0(VAR_0->str);
}
