
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int buffersize; int latency; int buffered; int outburst; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (struct ao*) ;

__attribute__((used)) static int FUNC_1(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_0(VAR_0);
    int VAR_2 = VAR_1->buffersize - VAR_1->latency - VAR_1->buffered;
    return VAR_2 / VAR_1->outburst * VAR_1->outburst;
}
