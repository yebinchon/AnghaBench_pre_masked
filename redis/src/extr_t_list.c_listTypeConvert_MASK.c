
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int encoding; int ptr; } ;
typedef TYPE_1__ robj ;
struct TYPE_6__ {size_t list_max_ziplist_size; int list_compress_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t,int,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3(robj *VAR_4, int VAR_5) {
    FUNC_1(((void*)0),VAR_4,VAR_4->type==VAR_2);
    FUNC_1(((void*)0),VAR_4,VAR_4->encoding==VAR_1);

    if (VAR_5 == VAR_0) {
        size_t VAR_6 = VAR_3.list_max_ziplist_size;
        int VAR_7 = VAR_3.list_compress_depth;
        VAR_4->ptr = FUNC_0(VAR_6, VAR_7, VAR_4->ptr);
        VAR_4->encoding = VAR_0;
    } else {
        FUNC_2("Unsupported list conversion");
    }
}
