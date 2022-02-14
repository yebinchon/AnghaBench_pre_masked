
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int audio_status; int * ao_chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct MPContext*,int ,int *) ;

void FUNC_2(struct MPContext *VAR_2)
{
    if (VAR_2->ao_chain) {
        FUNC_0(VAR_2->ao_chain);
        VAR_2->ao_chain = ((void*)0);

        VAR_2->audio_status = VAR_1;

        FUNC_1(VAR_2, VAR_0, ((void*)0));
    }
}
