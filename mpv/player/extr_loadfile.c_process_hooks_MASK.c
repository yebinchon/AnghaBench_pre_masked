
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ stop_play; } ;


 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (struct MPContext*,char*) ;
 int FUNC_2 (struct MPContext*,char*) ;
 int FUNC_3 (struct MPContext*) ;

__attribute__((used)) static void FUNC_4(struct MPContext *VAR_0, char *VAR_1)
{
    FUNC_1(VAR_0, VAR_1);

    while (!FUNC_2(VAR_0, VAR_1)) {
        FUNC_3(VAR_0);


        if (VAR_0->stop_play)
            FUNC_0(VAR_0);
    }
}
