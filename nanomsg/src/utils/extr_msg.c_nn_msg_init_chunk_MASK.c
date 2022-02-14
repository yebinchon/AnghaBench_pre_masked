
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msg {int body; int hdrs; int sphdr; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,void*) ;

void FUNC_2 (struct nn_msg *VAR_0, void *VAR_1)
{
    FUNC_0 (&VAR_0->sphdr, 0);
    FUNC_0 (&VAR_0->hdrs, 0);
    FUNC_1 (&VAR_0->body, VAR_1);
}
