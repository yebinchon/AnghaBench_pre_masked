
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bluray_priv_s {scalar_t__ cfg_title; int cfg_playlist; int current_title; int bd; } ;
struct TYPE_4__ {struct bluray_priv_s* priv; } ;
typedef TYPE_1__ stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct bluray_priv_s*,int) ;
 scalar_t__ FUNC_3 (struct bluray_priv_s*,int) ;

__attribute__((used)) static void FUNC_4(stream_t *VAR_2, int VAR_3) {
    struct bluray_priv_s *VAR_4 = VAR_2->priv;

    if (VAR_4->cfg_title == VAR_1) {
        if (!FUNC_2(VAR_4, VAR_4->cfg_playlist))
            FUNC_0(VAR_2, "Couldn't start playlist '%05d'.\n", VAR_4->cfg_playlist);
        VAR_4->current_title = FUNC_1(VAR_4->bd);
    } else {
        int VAR_5 = -1;
        if (VAR_4->cfg_title != VAR_0 )
            VAR_5 = VAR_4->cfg_title;
        else
            VAR_5 = VAR_3;
        if (VAR_5 < 0)
            return;

        if (FUNC_3(VAR_4, VAR_5))
            VAR_4->current_title = VAR_5;
        else {
            FUNC_0(VAR_2, "Couldn't start title '%d'.\n", VAR_5);
            VAR_4->current_title = FUNC_1(VAR_4->bd);
        }
    }
}
