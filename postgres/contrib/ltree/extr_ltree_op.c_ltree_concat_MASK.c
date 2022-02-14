
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ numlevel; } ;
typedef TYPE_1__ ltree ;


 char* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ltree *
FUNC_5(ltree *VAR_1, ltree *VAR_2)
{
 ltree *VAR_3;

 VAR_3 = (ltree *) FUNC_4(FUNC_2(VAR_1) + FUNC_2(VAR_2) - VAR_0);
 FUNC_1(VAR_3, FUNC_2(VAR_1) + FUNC_2(VAR_2) - VAR_0);
 VAR_3->numlevel = VAR_1->numlevel + VAR_2->numlevel;

 FUNC_3(FUNC_0(VAR_3), FUNC_0(VAR_1), FUNC_2(VAR_1) - VAR_0);
 FUNC_3(((char *) FUNC_0(VAR_3)) + FUNC_2(VAR_1) - VAR_0,
     FUNC_0(VAR_2),
     FUNC_2(VAR_2) - VAR_0);
 return VAR_3;
}
