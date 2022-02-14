
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int video_status; int * vo_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct MPContext *VAR_2)
{
    if (VAR_2->vo_chain) {
        FUNC_1(VAR_2);
        FUNC_2(VAR_2->vo_chain);
        VAR_2->vo_chain = ((void*)0);

        VAR_2->video_status = VAR_1;

        FUNC_0(VAR_2, VAR_0, ((void*)0));
    }
}
