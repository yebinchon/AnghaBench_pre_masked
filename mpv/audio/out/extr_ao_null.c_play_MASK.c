
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ buffered; scalar_t__ latency; int playing_final; scalar_t__ buffersize; int outburst; } ;
struct ao {struct priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct ao*) ;

__attribute__((used)) static int FUNC_2(struct ao *VAR_1, void **VAR_2, int VAR_3, int VAR_4)
{
    struct priv *VAR_5 = VAR_1->priv;
    int VAR_6;

    FUNC_1(VAR_1);

    if (VAR_5->buffered <= 0)
        VAR_5->buffered = VAR_5->latency;

    VAR_5->playing_final = VAR_4 & VAR_0;
    if (VAR_5->playing_final) {

        VAR_6 = FUNC_0(VAR_5->buffersize - VAR_5->buffered, VAR_3);
    } else {
        int VAR_7 = (VAR_5->buffersize - VAR_5->buffered) / VAR_5->outburst;
        int VAR_8 = VAR_3 / VAR_5->outburst;
        int VAR_9 = VAR_8 > VAR_7 ? VAR_7 : VAR_8;
        VAR_6 = VAR_9 * VAR_5->outburst;
    }
    VAR_5->buffered += VAR_6;
    return VAR_6;
}
