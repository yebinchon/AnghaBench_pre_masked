
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_ctx {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (double*,struct parse_ctx*,char const**) ;

__attribute__((used)) static int FUNC_2(struct parse_ctx *VAR_0, const char *VAR_1, double VAR_2)
{
 double VAR_3;

 if (FUNC_1(&VAR_3, VAR_0, &VAR_1))
  FUNC_0("parse test failed", 0);
 FUNC_0("unexpected value", VAR_3 == VAR_2);
 return 0;
}
