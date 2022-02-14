
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lexbuf {int dummy; } ;
struct TYPE_3__ {int rule; int pool; } ;
typedef TYPE_1__ fz_css ;
typedef int fz_context ;


 int FUNC_0 (int *,struct lexbuf*,int ,char const*,char const*) ;
 int FUNC_1 (struct lexbuf*) ;
 int FUNC_2 (struct lexbuf*,int ) ;

void FUNC_3(fz_context *VAR_0, fz_css *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct lexbuf VAR_4;
 FUNC_0(VAR_0, &VAR_4, VAR_1->pool, VAR_2, VAR_3);
 FUNC_1(&VAR_4);
 VAR_1->rule = FUNC_2(&VAR_4, VAR_1->rule);
}
