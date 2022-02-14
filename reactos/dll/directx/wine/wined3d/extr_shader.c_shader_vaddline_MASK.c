
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct wined3d_string_buffer {unsigned int buffer_size; unsigned int content_size; int * buffer; } ;


 int FUNC_0 (int *,unsigned int,char const*,int ) ;

int FUNC_1(struct wined3d_string_buffer *VAR_0, const char *VAR_1, va_list VAR_2)
{
    unsigned int VAR_3;
    int VAR_4;

    VAR_3 = VAR_0->buffer_size - VAR_0->content_size;
    VAR_4 = FUNC_0(&VAR_0->buffer[VAR_0->content_size], VAR_3, VAR_1, VAR_2);
    if (VAR_4 < 0 || (unsigned int)VAR_4 >= VAR_3 )
        return VAR_4;

    VAR_0->content_size += VAR_4;
    return 0;
}
