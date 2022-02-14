
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* string; int string_size; scalar_t__ string_fill; } ;
struct TYPE_6__ {scalar_t__ (* malloc ) (int) ;} ;
struct TYPE_8__ {TYPE_2__ data; TYPE_1__ alloc; } ;
typedef TYPE_3__ json_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(json_stream *VAR_1)
{
    VAR_1->data.string_fill = 0;
    if (VAR_1->data.string == ((void*)0)) {
        VAR_1->data.string_size = 1024;
        VAR_1->data.string = (char*) VAR_1->alloc.malloc(VAR_1->data.string_size);
        if (VAR_1->data.string == ((void*)0)) {
            FUNC_0(VAR_1, VAR_0);
            return -1;
        }
    }
    VAR_1->data.string[0] = '\0';
    return 0;
}
