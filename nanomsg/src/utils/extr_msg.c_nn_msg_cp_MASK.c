
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msg {int body; int hdrs; int sphdr; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1 (struct nn_msg *VAR_0, struct nn_msg *VAR_1)
{
    FUNC_0 (&VAR_0->sphdr, &VAR_1->sphdr);
    FUNC_0 (&VAR_0->hdrs, &VAR_1->hdrs);
    FUNC_0 (&VAR_0->body, &VAR_1->body);
}
