
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {char* buffer; scalar_t__ content_size; } ;



void FUNC_0(struct wined3d_string_buffer *VAR_0)
{
    VAR_0->buffer[0] = '\0';
    VAR_0->content_size = 0;
}
