
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hres; } ;
typedef TYPE_1__ parser_ctx_t ;
struct TYPE_9__ {int is_public; struct TYPE_9__* next; } ;
typedef TYPE_2__ dim_decl_t ;
struct TYPE_10__ {TYPE_2__* props; } ;
typedef TYPE_3__ class_decl_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static class_decl_t *FUNC_1(parser_ctx_t *VAR_3, class_decl_t *VAR_4, dim_decl_t *VAR_5, unsigned VAR_6)
{
    if(VAR_6 & VAR_1) {
        FUNC_0("variant prop van't be default value\n");
        VAR_3->hres = VAR_0;
        return ((void*)0);
    }

    VAR_5->is_public = !(VAR_6 & VAR_2);
    VAR_5->next = VAR_4->props;
    VAR_4->props = VAR_5;
    return VAR_4;
}
