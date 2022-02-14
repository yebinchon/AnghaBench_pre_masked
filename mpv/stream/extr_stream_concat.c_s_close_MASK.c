
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream {struct priv* priv; } ;
struct priv {int num_streams; int * streams; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct stream *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    for (int VAR_2 = 0; VAR_2 < VAR_1->num_streams; VAR_2++)
        FUNC_0(VAR_1->streams[VAR_2]);
}
