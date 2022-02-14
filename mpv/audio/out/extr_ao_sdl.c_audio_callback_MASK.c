
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int sstride; scalar_t__ bps; } ;
typedef void Uint8 ;


 int FUNC_0 (struct ao*,char*) ;
 int FUNC_1 (struct ao*,void**,int,scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0, Uint8 *VAR_1, int VAR_2)
{
    struct ao *VAR_3 = VAR_0;

    void *VAR_4[1] = {VAR_1};

    if (VAR_2 % VAR_3->sstride)
        FUNC_0(VAR_3, "SDL audio callback not sample aligned");



    double VAR_5 = 2 * VAR_2 / (double)VAR_3->bps;

    FUNC_1(VAR_3, VAR_4, VAR_2 / VAR_3->sstride, FUNC_2() + 1000000LL * VAR_5);
}
