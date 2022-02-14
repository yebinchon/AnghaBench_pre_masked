
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int fb_queue_len; int * fb_queue; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    FUNC_1(VAR_1->fb_queue[0]);
    FUNC_0(VAR_1->fb_queue, VAR_1->fb_queue_len, 0);
}
