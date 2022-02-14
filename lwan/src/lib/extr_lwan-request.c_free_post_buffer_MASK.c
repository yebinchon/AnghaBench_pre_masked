
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_backed_buffer {int size; int ptr; } ;


 int FUNC_0 (struct file_backed_buffer*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
    struct file_backed_buffer *VAR_1 = VAR_0;

    FUNC_1(VAR_1->ptr, VAR_1->size);
    FUNC_0(VAR_1);
}
