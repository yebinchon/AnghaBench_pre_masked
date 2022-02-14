
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t string_fill; size_t string_size; char* string; } ;
struct TYPE_6__ {scalar_t__ (* realloc ) (char*,size_t) ;} ;
struct TYPE_8__ {TYPE_2__ data; TYPE_1__ alloc; } ;
typedef TYPE_3__ json_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (char*,size_t) ;

__attribute__((used)) static int FUNC_2(json_stream *VAR_1, int VAR_2)
{
    if (VAR_1->data.string_fill == VAR_1->data.string_size) {
        size_t VAR_3 = VAR_1->data.string_size * 2;
        char *VAR_4 = (char*) VAR_1->alloc.realloc(VAR_1->data.string, VAR_3);
        if (VAR_4 == ((void*)0)) {
            FUNC_0(VAR_1, VAR_0);
            return -1;
        } else {
            VAR_1->data.string_size = VAR_3;
            VAR_1->data.string = VAR_4;
        }
    }
    VAR_1->data.string[VAR_1->data.string_fill++] = VAR_2;
    return 0;
}
