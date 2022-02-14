
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct priv {scalar_t__ filename; scalar_t__ dvd_speed; int * dvdnav; } ;
struct TYPE_4__ {struct priv* priv; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(stream_t *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_1(VAR_1->dvdnav);
    VAR_1->dvdnav = ((void*)0);
    if (VAR_1->dvd_speed)
        FUNC_0(VAR_0, VAR_1->filename, -1);
    if (VAR_1->filename)
        FUNC_2(VAR_1->filename);
}
