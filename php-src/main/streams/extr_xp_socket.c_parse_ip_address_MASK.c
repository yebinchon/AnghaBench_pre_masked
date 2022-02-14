
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int error_text; } ;
struct TYPE_5__ {int namelen; int name; } ;
struct TYPE_7__ {TYPE_2__ outputs; int want_errortext; TYPE_1__ inputs; } ;
typedef TYPE_3__ php_stream_xport_param ;


 char* FUNC_0 (int ,int ,int*,int ,int *) ;

__attribute__((used)) static inline char *FUNC_1(php_stream_xport_param *VAR_0, int *VAR_1)
{
 return FUNC_0(VAR_0->inputs.name, VAR_0->inputs.namelen, VAR_1, VAR_0->want_errortext, &VAR_0->outputs.error_text);
}
