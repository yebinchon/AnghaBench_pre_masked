
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int buffer_size; unsigned int content_size; char* buffer; } ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,unsigned int) ;

BOOL FUNC_2(struct wined3d_string_buffer *VAR_2, int VAR_3)
{
    char *VAR_4;
    unsigned int VAR_5 = VAR_2->buffer_size * 2;

    while (VAR_3 > 0 && (unsigned int)VAR_3 >= VAR_5 - VAR_2->content_size)
        VAR_5 *= 2;
    if (!(VAR_4 = FUNC_1(VAR_2->buffer, VAR_5)))
    {
        FUNC_0("Failed to grow buffer.\n");
        VAR_2->buffer[VAR_2->content_size] = '\0';
        return VAR_0;
    }
    VAR_2->buffer = VAR_4;
    VAR_2->buffer_size = VAR_5;
    return VAR_1;
}
