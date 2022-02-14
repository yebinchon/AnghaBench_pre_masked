
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* json_user_io ;
struct TYPE_7__ {void* peek; void* get; void* ptr; } ;
struct TYPE_8__ {TYPE_1__ user; } ;
struct TYPE_9__ {TYPE_2__ source; int peek; int get; } ;
struct TYPE_10__ {TYPE_3__ source; } ;
typedef TYPE_4__ json_stream ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(json_stream *VAR_2, json_user_io VAR_3, json_user_io VAR_4, void *VAR_5)
{
    FUNC_0(VAR_2);
    VAR_2->source.get = VAR_0;
    VAR_2->source.peek = VAR_1;
    VAR_2->source.source.user.ptr = VAR_5;
    VAR_2->source.source.user.get = VAR_3;
    VAR_2->source.source.user.peek = VAR_4;
}
