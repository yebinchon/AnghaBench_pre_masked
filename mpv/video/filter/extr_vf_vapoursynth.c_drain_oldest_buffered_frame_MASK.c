
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_buffered; int in_frameno; int * buffered; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_0)
{
    if (!VAR_0->num_buffered)
        return;
    FUNC_0(VAR_0->buffered[0]);
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_buffered - 1; VAR_1++)
        VAR_0->buffered[VAR_1] = VAR_0->buffered[VAR_1 + 1];
    VAR_0->num_buffered--;
    VAR_0->in_frameno++;
}
