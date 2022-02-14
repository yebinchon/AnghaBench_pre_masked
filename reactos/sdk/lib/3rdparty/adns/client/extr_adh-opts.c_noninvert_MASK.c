
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optioninfo {char* sopt; char* lopt; } ;


 int FUNC_0 (char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_1(const struct optioninfo *VAR_0) {
  FUNC_0("option %s%s%s%s%s may not be inverted",
    VAR_0->sopt ? "-" : "", VAR_0->sopt ? VAR_0->sopt : "",
    VAR_0->lopt && VAR_0->sopt ? " / " : "",
    VAR_0->lopt ? "--" : "", VAR_0->lopt ? VAR_0->lopt : "");
}
