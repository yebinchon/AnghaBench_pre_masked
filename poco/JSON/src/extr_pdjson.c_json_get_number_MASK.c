
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ json_stream ;


 double FUNC_0 (char*,int *) ;

double FUNC_1(json_stream *VAR_0)
{
    char *VAR_1 = VAR_0->data.string;
    return VAR_1 == ((void*)0) ? 0 : FUNC_0(VAR_1, ((void*)0));
}
