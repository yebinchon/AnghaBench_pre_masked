
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* classes; } ;
typedef TYPE_1__ compile_ctx_t ;
struct TYPE_5__ {int name; struct TYPE_5__* next; } ;
typedef TYPE_2__ class_desc_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1(compile_ctx_t *VAR_2, const WCHAR *VAR_3)
{
    class_desc_t *VAR_4;

    for(VAR_4 = VAR_2->classes; VAR_4; VAR_4 = VAR_4->next) {
        if(!FUNC_0(VAR_4->name, VAR_3))
            return VAR_1;
    }

    return VAR_0;
}
