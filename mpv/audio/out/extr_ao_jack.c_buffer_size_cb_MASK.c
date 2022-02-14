
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int buffer_size; } ;
struct ao {struct priv* priv; } ;
typedef int jack_nframes_t ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(jack_nframes_t VAR_0, void *VAR_1)
{
    struct ao *VAR_2 = VAR_1;
    struct priv *VAR_3 = VAR_2->priv;

    FUNC_0(&VAR_3->buffer_size, VAR_0);

    return 0;
}
