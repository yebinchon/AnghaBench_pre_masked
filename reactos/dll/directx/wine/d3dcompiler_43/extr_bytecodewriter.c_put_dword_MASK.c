
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytecode_buffer {int alloc_size; int size; int * data; int state; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct bytecode_buffer *VAR_1, DWORD VAR_2) {
    if(FUNC_1(VAR_1->state)) return;

    if(VAR_1->alloc_size == VAR_1->size) {
        DWORD *VAR_3;
        VAR_1->alloc_size *= 2;
        VAR_3 = FUNC_2(VAR_1->data,
                               sizeof(DWORD) * VAR_1->alloc_size);
        if(!VAR_3) {
            FUNC_0("Failed to grow the buffer data memory\n");
            VAR_1->state = VAR_0;
            return;
        }
        VAR_1->data = VAR_3;
    }
    VAR_1->data[VAR_1->size++] = VAR_2;
}
