
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct priv {int seek_reinit; int slave; scalar_t__ is_cdda; } ;
struct TYPE_4__ {int stream; struct priv* priv; } ;
typedef TYPE_1__ demuxer_t ;


 int FUNC_0 (TYPE_1__*,char*,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,double,int) ;
 int FUNC_2 (int ,int ,double*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(demuxer_t *VAR_4, double VAR_5, int VAR_6)
{
    struct priv *VAR_7 = VAR_4->priv;

    if (VAR_7->is_cdda) {
        FUNC_1(VAR_7->slave, VAR_5, VAR_6);
        return;
    }

    if (VAR_6 & VAR_0) {
        double VAR_8 = 0;
        FUNC_2(VAR_4->stream, VAR_2, &VAR_8);
        VAR_5 *= VAR_8;
    }

    FUNC_0(VAR_4, "seek to: %f\n", VAR_5);





    FUNC_1(VAR_7->slave, 0, VAR_0 | VAR_1);
    FUNC_3(VAR_4->stream);

    double VAR_9[] = {VAR_5, VAR_6};
    FUNC_2(VAR_4->stream, VAR_3, VAR_9);

    VAR_7->seek_reinit = 1;
}
