
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1843 {int (* read ) (int ,int ) ;int chip; int (* write ) (int ,int ,int) ;} ;
struct ad1843_bitfield {int nbits; int lo_bit; int reg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ad1843 *VAR_0,
        const struct ad1843_bitfield *VAR_1,
        int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_0->read(VAR_0->chip, VAR_1->reg);
 VAR_4 = ((1 << VAR_1->nbits) - 1) << VAR_1->lo_bit;
 VAR_5 = (VAR_3 & VAR_4) >> VAR_1->lo_bit;
 VAR_6 = (VAR_2 << VAR_1->lo_bit) & VAR_4;
 VAR_3 = (VAR_3 & ~VAR_4) | VAR_6;
 VAR_0->write(VAR_0->chip, VAR_1->reg, VAR_3);

 return VAR_5;
}
