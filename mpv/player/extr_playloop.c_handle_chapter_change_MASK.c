
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int last_chapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (struct MPContext*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct MPContext *VAR_1)
{
    int VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 != VAR_1->last_chapter) {
        VAR_1->last_chapter = VAR_2;
        FUNC_1(VAR_1, VAR_0, ((void*)0));
    }
}
