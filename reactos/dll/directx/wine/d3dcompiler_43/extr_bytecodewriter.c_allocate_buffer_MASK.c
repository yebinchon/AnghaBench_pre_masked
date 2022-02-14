
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytecode_buffer {int alloc_size; int state; void* data; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct bytecode_buffer*) ;

__attribute__((used)) static struct bytecode_buffer *FUNC_2(void) {
    struct bytecode_buffer *VAR_2;

    VAR_2 = FUNC_0(sizeof(*VAR_2));
    if(!VAR_2) return ((void*)0);

    VAR_2->alloc_size = VAR_0;
    VAR_2->data = FUNC_0(sizeof(DWORD) * VAR_2->alloc_size);
    if(!VAR_2->data) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }
    VAR_2->state = VAR_1;
    return VAR_2;
}
