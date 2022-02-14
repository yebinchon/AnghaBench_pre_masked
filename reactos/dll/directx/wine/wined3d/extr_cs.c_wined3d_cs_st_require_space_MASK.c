
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_cs {int data_size; size_t end; size_t start; void* data; } ;
typedef enum wined3d_cs_queue_id { ____Placeholder_wined3d_cs_queue_id } wined3d_cs_queue_id ;
typedef void BYTE ;


 void* FUNC_0 (size_t) ;
 void* FUNC_1 (void*,size_t) ;
 size_t FUNC_2 (size_t,int) ;

__attribute__((used)) static void *FUNC_3(struct wined3d_cs *VAR_0, size_t VAR_1, enum wined3d_cs_queue_id VAR_2)
{
    if (VAR_1 > (VAR_0->data_size - VAR_0->end))
    {
        size_t VAR_3;
        void *VAR_4;

        VAR_3 = FUNC_2(VAR_1, VAR_0->data_size * 2);
        if (!VAR_0->end)
            VAR_4 = FUNC_1(VAR_0->data, VAR_3);
        else
            VAR_4 = FUNC_0(VAR_3);
        if (!VAR_4)
            return ((void*)0);

        VAR_0->data_size = VAR_3;
        VAR_0->start = VAR_0->end = 0;
        VAR_0->data = VAR_4;
    }

    VAR_0->end += VAR_1;

    return (BYTE *)VAR_0->data + VAR_0->start;
}
