
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ playback_initialized; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int ) ;
 scalar_t__ FUNC_1 (struct MPContext*,int) ;

void FUNC_2(struct MPContext *VAR_1)
{
    if (VAR_1->playback_initialized) {
        if (FUNC_1(VAR_1, 0) != 0)
            FUNC_0(VAR_1, VAR_0);
    }
}
