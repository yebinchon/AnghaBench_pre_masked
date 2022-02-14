
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int mainloop; int stream; } ;
struct ao {size_t sstride; struct priv* priv; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_1(VAR_1->mainloop);
    size_t VAR_2 = FUNC_0(VAR_1->stream);
    FUNC_2(VAR_1->mainloop);
    return VAR_2 / VAR_0->sstride;
}
