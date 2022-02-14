
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {int dummy; } ;
struct MPContext {int mconfig; TYPE_2__* opts; struct vo* video_out; } ;
struct TYPE_4__ {TYPE_1__* vo; } ;
struct TYPE_3__ {int fullscreen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (struct MPContext*,int ,int *) ;
 int FUNC_4 (struct vo*,int ,int*) ;
 int FUNC_5 (struct vo*,int ) ;

__attribute__((used)) static void FUNC_6(struct MPContext *VAR_7)
{
    struct vo *VAR_8 = VAR_7->video_out;
    int VAR_9 = VAR_8 ? FUNC_5(VAR_8, VAR_3) : 0;
    if (VAR_9 & VAR_5)
        FUNC_3(VAR_7, VAR_0, ((void*)0));
    if (VAR_9 & VAR_6)
        FUNC_3(VAR_7, VAR_1, ((void*)0));
    if (VAR_9 & VAR_4) {


        int VAR_10 = VAR_7->opts->vo->fullscreen;
        FUNC_4(VAR_8, VAR_2, &VAR_10);
        FUNC_2(VAR_7->mconfig,
            FUNC_1(VAR_7->mconfig, FUNC_0("fullscreen")), &VAR_10, 0);
    }
}
