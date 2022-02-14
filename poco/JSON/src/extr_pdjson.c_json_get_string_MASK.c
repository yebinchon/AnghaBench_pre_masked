
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t string_fill; char const* string; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ json_stream ;



const char *FUNC_0(json_stream *VAR_0, size_t *VAR_1)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->data.string_fill;
    if (VAR_0->data.string == ((void*)0))
        return "";
    else
        return VAR_0->data.string;
}
