
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* style; } ;
typedef TYPE_2__ fz_context ;
struct TYPE_6__ {int * user_css; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int * FUNC_1 (TYPE_2__*,char const*) ;

void FUNC_2(fz_context *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0, VAR_0->style->user_css);
 VAR_0->style->user_css = VAR_1 ? FUNC_1(VAR_0, VAR_1) : ((void*)0);
}
