
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_waiter {int dummy; } ;
struct MPContext {int playback_abort; TYPE_1__* opts; } ;
struct TYPE_2__ {int external_files; int sub_name; int audio_files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPContext*,int ) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct mp_waiter*,int ) ;
 int FUNC_5 (struct MPContext*) ;
 int FUNC_6 (struct MPContext*,int ,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
    void **VAR_4 = VAR_3;
    struct MPContext *VAR_5 = VAR_4[0];
    struct mp_waiter *VAR_6 = VAR_4[1];

    FUNC_2(VAR_5);

    FUNC_1(VAR_5);
    FUNC_6(VAR_5, VAR_5->opts->audio_files, VAR_0);
    FUNC_6(VAR_5, VAR_5->opts->sub_name, VAR_1);
    FUNC_6(VAR_5, VAR_5->opts->external_files, VAR_2);
    FUNC_0(VAR_5, VAR_5->playback_abort);

    FUNC_4(VAR_6, 0);
    FUNC_5(VAR_5);
    FUNC_3(VAR_5);
}
