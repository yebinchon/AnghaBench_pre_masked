
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct axg_tdm_stream {TYPE_1__* iface; } ;
struct axg_tdm_formatter_hw {unsigned int skew_offset; } ;
struct TYPE_2__ {int fmt; scalar_t__ slot_width; } ;


 int VAR_0 ;


 int VAR_1 ;



 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct regmap*,struct axg_tdm_stream*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct regmap*,int ,unsigned int,unsigned int) ;
 int FUNC_6 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct regmap *VAR_10,
        const struct axg_tdm_formatter_hw *VAR_11,
        struct axg_tdm_stream *VAR_12)
{
 unsigned int VAR_13, VAR_14 = VAR_11->skew_offset;


 switch (VAR_12->iface->fmt & VAR_1) {
 case 130:
 case 132:
  VAR_14 += 1;
  break;

 case 129:
 case 131:
  break;

 default:
  FUNC_4("Unsupported format: %u\n",
         VAR_12->iface->fmt & VAR_1);
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_14);


 switch (VAR_12->iface->fmt & VAR_1) {
 case 130:
 case 129:
 case 128:
  VAR_13 |= VAR_4;
  break;
 }


 if (FUNC_3(VAR_12->iface->fmt))
  VAR_13 |= VAR_7;


 VAR_13 |= FUNC_0(VAR_12->iface->slot_width - 1);





 FUNC_5(VAR_10, VAR_2,
      (VAR_5 | VAR_7 |
       VAR_4 | VAR_6 |
       VAR_3), VAR_13);


 FUNC_6(VAR_10, VAR_9, 0x76543210);

 return FUNC_2(VAR_10, VAR_12, VAR_8);
}
