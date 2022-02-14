
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_convert_fmt {scalar_t__ src_fmt; int dst_bits; int pad_msb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ao_convert_fmt *VAR_1)
{
    if (FUNC_0(VAR_1->src_fmt) * 8 == VAR_1->dst_bits && !VAR_1->pad_msb)
        return 0;
    if (VAR_1->src_fmt == VAR_0 && VAR_1->dst_bits == 24 && !VAR_1->pad_msb)
        return 1;
    if (VAR_1->src_fmt == VAR_0 && VAR_1->dst_bits == 32 && VAR_1->pad_msb == 8)
        return 2;
    return -1;
}
