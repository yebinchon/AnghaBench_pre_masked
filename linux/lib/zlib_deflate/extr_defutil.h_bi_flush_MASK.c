
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bi_valid; int bi_buf; } ;
typedef TYPE_1__ deflate_state ;
typedef int Byte ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_2(deflate_state *VAR_0)
{
    if (VAR_0->bi_valid == 16) {
        FUNC_1(VAR_0, VAR_0->bi_buf);
        VAR_0->bi_buf = 0;
        VAR_0->bi_valid = 0;
    } else if (VAR_0->bi_valid >= 8) {
        FUNC_0(VAR_0, (Byte)VAR_0->bi_buf);
        VAR_0->bi_buf >>= 8;
        VAR_0->bi_valid -= 8;
    }
}
