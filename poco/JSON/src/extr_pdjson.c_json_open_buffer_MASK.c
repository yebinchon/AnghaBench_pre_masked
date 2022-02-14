
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* buffer; size_t length; } ;
struct TYPE_8__ {TYPE_1__ buffer; } ;
struct TYPE_9__ {TYPE_2__ source; int peek; int get; } ;
struct TYPE_10__ {TYPE_3__ source; } ;
typedef TYPE_4__ json_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;

void FUNC_1(json_stream *VAR_2, const void *VAR_3, size_t VAR_4)
{
    FUNC_0(VAR_2);
    VAR_2->source.get = VAR_0;
    VAR_2->source.peek = VAR_1;
    VAR_2->source.source.buffer.buffer = (char*) VAR_3;
    VAR_2->source.source.buffer.length = VAR_4;
}
