
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; int* buffer; } ;
struct TYPE_4__ {TYPE_1__ buffer; } ;
struct json_source {size_t position; TYPE_2__ source; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct json_source *VAR_1)
{
    if (VAR_1->position < VAR_1->source.buffer.length)
        return VAR_1->source.buffer.buffer[VAR_1->position];
    else
        return VAR_0;
}
