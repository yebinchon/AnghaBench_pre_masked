
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct priv {int dvdnav; int * filename; int dvd_speed; TYPE_1__* opts; } ;
struct TYPE_7__ {struct priv* priv; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_6__ {int speed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (int ,char const**) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*) ;

__attribute__((used)) static struct priv *FUNC_8(stream_t *VAR_1, char *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    const char *VAR_4;

    if (!VAR_2)
        return ((void*)0);

    if (!(VAR_3->filename = FUNC_7(VAR_2)))
        return ((void*)0);

    VAR_3->dvd_speed = VAR_3->opts->speed;
    FUNC_1(VAR_1, VAR_3->filename, VAR_3->dvd_speed);

    if (FUNC_3(&(VAR_3->dvdnav), VAR_3->filename) != VAR_0) {
        FUNC_6(VAR_3->filename);
        VAR_3->filename = ((void*)0);
        return ((void*)0);
    }

    if (!VAR_3->dvdnav)
        return ((void*)0);

    FUNC_5(VAR_3->dvdnav, 1);
    if (FUNC_4(VAR_3->dvdnav, 1) != VAR_0)
        FUNC_0(VAR_1, "stream_dvdnav, failed to set PGC positioning\n");

    FUNC_2(VAR_3->dvdnav, &VAR_4);

    return VAR_3;
}
