
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int * buf; int buffer_lock; int * play; int * engine; int * buffer_queue; } ;
struct ao {struct priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct ao *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;

    FUNC_0(VAR_1);
    FUNC_0(VAR_0);
    FUNC_0(VAR_2);

    VAR_4->buffer_queue = ((void*)0);
    VAR_4->engine = ((void*)0);
    VAR_4->play = ((void*)0);

    FUNC_2(&VAR_4->buffer_lock);

    FUNC_1(VAR_4->buf);
    VAR_4->buf = ((void*)0);
}
