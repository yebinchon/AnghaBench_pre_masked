
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_ring {int rpos; scalar_t__ buffer; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (unsigned char*,scalar_t__,int) ;
 int FUNC_3 (struct mp_ring*) ;
 int FUNC_4 (struct mp_ring*) ;
 int FUNC_5 (struct mp_ring*) ;

int FUNC_6(struct mp_ring *VAR_0, unsigned char *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_5(VAR_0);
    int VAR_4 = FUNC_3(VAR_0);
    int VAR_5 = FUNC_0(VAR_2, VAR_4);
    int VAR_6 = FUNC_4(VAR_0) % VAR_3;

    int VAR_7 = FUNC_0(VAR_3 - VAR_6, VAR_5);
    int VAR_8 = VAR_5 - VAR_7;

    if (VAR_1) {
        FUNC_2(VAR_1, VAR_0->buffer + VAR_6, VAR_7);
        FUNC_2(VAR_1 + VAR_7, VAR_0->buffer, VAR_8);
    }

    FUNC_1(&VAR_0->rpos, VAR_5);

    return VAR_5;
}
