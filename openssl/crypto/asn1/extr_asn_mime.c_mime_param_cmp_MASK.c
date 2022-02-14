
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int param_name; } ;
typedef TYPE_1__ MIME_PARAM ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const MIME_PARAM *const *VAR_0,
                          const MIME_PARAM *const *VAR_1)
{
    if (!(*VAR_0)->param_name || !(*VAR_1)->param_name)
        return ! !(*VAR_0)->param_name - ! !(*VAR_1)->param_name;
    return FUNC_0((*VAR_0)->param_name, (*VAR_1)->param_name);
}
