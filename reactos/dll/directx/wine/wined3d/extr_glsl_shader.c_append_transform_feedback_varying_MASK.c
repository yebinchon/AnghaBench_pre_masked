
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {scalar_t__ content_size; int buffer; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const char **VAR_0, unsigned int *VAR_1,
        char **VAR_2, unsigned int *VAR_3, struct wined3d_string_buffer *VAR_4)
{
    if (VAR_0 && *VAR_2)
    {
        char *VAR_5 = *VAR_2;

        VAR_0[*VAR_1] = VAR_5;

        FUNC_0(VAR_5, VAR_4->buffer, VAR_4->content_size + 1);
        VAR_5 += VAR_4->content_size + 1;

        *VAR_2 = VAR_5;
    }

    *VAR_3 += VAR_4->content_size + 1;
    ++(*VAR_1);
}
