
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int buffer_size; int buffer; } ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wined3d_string_buffer*) ;

BOOL FUNC_3(struct wined3d_string_buffer *VAR_2)
{
    VAR_2->buffer_size = 32;
    if (!(VAR_2->buffer = FUNC_1(VAR_2->buffer_size)))
    {
        FUNC_0("Failed to allocate shader buffer memory.\n");
        return VAR_0;
    }

    FUNC_2(VAR_2);
    return VAR_1;
}
