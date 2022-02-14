
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {unsigned int buffer_size; void* buffer; } ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 void* FUNC_2 (int ,int ,void*,unsigned int) ;

void* FUNC_3(struct process* VAR_0, unsigned VAR_1)
{
    if (VAR_1 > VAR_0->buffer_size)
    {
        if (VAR_0->buffer)
            VAR_0->buffer = FUNC_2(FUNC_0(), 0, VAR_0->buffer, VAR_1);
        else
            VAR_0->buffer = FUNC_1(FUNC_0(), 0, VAR_1);
        VAR_0->buffer_size = (VAR_0->buffer) ? VAR_1 : 0;
    }
    return VAR_0->buffer;
}
