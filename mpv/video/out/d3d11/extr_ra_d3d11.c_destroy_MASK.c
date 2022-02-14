
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_d3d11 {scalar_t__ iqueue; scalar_t__ debug; scalar_t__ ctx; scalar_t__ dev; scalar_t__ dev1; scalar_t__ ctx1; scalar_t__ vbuf; scalar_t__ blit_sampler; scalar_t__ blit_vbuf; scalar_t__ blit_layout; scalar_t__ blit_vs; scalar_t__ blit_float_ps; scalar_t__ clear_cbuf; scalar_t__ clear_vbuf; scalar_t__ clear_layout; scalar_t__ clear_vs; scalar_t__ clear_ps; } ;
struct ra {struct ra_d3d11* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ra*,char*) ;
 int FUNC_5 (struct ra*) ;

__attribute__((used)) static void FUNC_6(struct ra *VAR_2)
{
    struct ra_d3d11 *VAR_3 = VAR_2->priv;


    FUNC_3(VAR_3->clear_ps);
    FUNC_3(VAR_3->clear_vs);
    FUNC_3(VAR_3->clear_layout);
    FUNC_3(VAR_3->clear_vbuf);
    FUNC_3(VAR_3->clear_cbuf);
    FUNC_3(VAR_3->blit_float_ps);
    FUNC_3(VAR_3->blit_vs);
    FUNC_3(VAR_3->blit_layout);
    FUNC_3(VAR_3->blit_vbuf);
    FUNC_3(VAR_3->blit_sampler);
    FUNC_3(VAR_3->vbuf);
    FUNC_3(VAR_3->ctx1);
    FUNC_3(VAR_3->dev1);
    FUNC_3(VAR_3->dev);

    if (VAR_3->debug && VAR_3->ctx) {


        FUNC_1(VAR_3->ctx);
        FUNC_2(VAR_3->ctx);
    }
    FUNC_3(VAR_3->ctx);

    if (VAR_3->debug) {

        FUNC_4(VAR_2, "after destroy");
        FUNC_0(VAR_3->debug, VAR_0);
        FUNC_4(VAR_2, "after leak check");
        FUNC_0(VAR_3->debug, VAR_1);
        FUNC_4(VAR_2, "after leak summary");
    }
    FUNC_3(VAR_3->debug);
    FUNC_3(VAR_3->iqueue);

    FUNC_5(VAR_2);
}
