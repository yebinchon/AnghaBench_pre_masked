
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int * video_out; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int ,int *) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct MPContext *VAR_1)
{
    FUNC_1(VAR_1);
    if (VAR_1->video_out) {
        FUNC_2(VAR_1->video_out);
        FUNC_0(VAR_1, VAR_0, ((void*)0));
    }
    VAR_1->video_out = ((void*)0);
}
