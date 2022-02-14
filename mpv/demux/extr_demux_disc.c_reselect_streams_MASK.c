
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {scalar_t__* streams; int slave; int num_streams; } ;
struct TYPE_3__ {struct priv* priv; } ;
typedef TYPE_1__ demuxer_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(demuxer_t *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    int VAR_3 = FUNC_1(VAR_2->slave);
    for (int VAR_4 = 0; VAR_4 < FUNC_0(VAR_3, VAR_2->num_streams); VAR_4++) {
        if (VAR_2->streams[VAR_4]) {
            FUNC_4(VAR_2->slave, FUNC_2(VAR_2->slave, VAR_4),
                VAR_0, FUNC_3(VAR_2->streams[VAR_4]));
        }
    }
}
