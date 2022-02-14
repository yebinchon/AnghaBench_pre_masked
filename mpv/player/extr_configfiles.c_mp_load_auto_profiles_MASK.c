
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int filename; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct MPContext*,char*,int ) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct MPContext *VAR_0)
{
    FUNC_1(VAR_0, "protocol",
                         FUNC_3(FUNC_0(VAR_0->filename), ((void*)0)));
    FUNC_1(VAR_0, "extension",
                         FUNC_0(FUNC_4(VAR_0->filename, ((void*)0))));

    FUNC_2(VAR_0);
}
