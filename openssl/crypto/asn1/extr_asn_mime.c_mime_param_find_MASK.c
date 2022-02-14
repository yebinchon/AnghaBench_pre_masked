
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int params; } ;
struct TYPE_7__ {char* param_name; int * param_value; } ;
typedef TYPE_1__ MIME_PARAM ;
typedef TYPE_2__ MIME_HEADER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;

__attribute__((used)) static MIME_PARAM *FUNC_2(MIME_HEADER *VAR_0, const char *VAR_1)
{
    MIME_PARAM VAR_2;
    int VAR_3;

    VAR_2.param_name = (char *)VAR_1;
    VAR_2.param_value = ((void*)0);
    VAR_3 = FUNC_0(VAR_0->params, &VAR_2);
    return FUNC_1(VAR_0->params, VAR_3);
}
