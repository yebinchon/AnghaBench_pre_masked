
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct axg_tdm_stream {int physical_width; TYPE_1__* iface; scalar_t__ width; } ;
struct axg_tdm_formatter_hw {unsigned int skew_offset; } ;
struct TYPE_2__ {int fmt; scalar_t__ slots; scalar_t__ slot_width; } ;


 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int FUNC_2 (scalar_t__) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned int VAR_7 ;
 unsigned int FUNC_4 (int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct regmap*,struct axg_tdm_stream*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct regmap*,int ,unsigned int,unsigned int) ;
 int FUNC_9 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct regmap *VAR_12,
         const struct axg_tdm_formatter_hw *VAR_13,
         struct axg_tdm_stream *VAR_14)
{
 unsigned int VAR_15, VAR_16 = VAR_13->skew_offset;


 switch (VAR_14->iface->fmt & VAR_1) {
 case 129:
 case 131:
  break;

 case 128:
 case 130:
  VAR_16 += 1;
  break;

 default:
  FUNC_7("Unsupported format: %u\n",
         VAR_14->iface->fmt & VAR_1);
  return -VAR_0;
 }

 VAR_15 = FUNC_1(VAR_16);


 VAR_15 |= FUNC_0(VAR_14->iface->slot_width - 1);


 VAR_15 |= FUNC_2(VAR_14->iface->slots - 1);

 FUNC_8(VAR_12, VAR_2,
      VAR_4 |
      VAR_3 |
      VAR_5, VAR_15);


 VAR_15 = FUNC_3(VAR_14->width - 1);


 switch (VAR_14->physical_width) {
 case 8:

  VAR_15 |= FUNC_4(0);
  break;
 case 16:

  VAR_15 |= FUNC_4(2);
  break;
 case 32:

  VAR_15 |= FUNC_4(4);
  break;
 default:
  FUNC_7("Unsupported physical width: %u\n",
         VAR_14->physical_width);
  return -VAR_0;
 }


 if (FUNC_6(VAR_14->iface->fmt))
  VAR_15 |= VAR_9;

 FUNC_8(VAR_12, VAR_6,
      (VAR_8 | VAR_7 |
       VAR_9), VAR_15);


 FUNC_9(VAR_12, VAR_11, 0x76543210);

 return FUNC_5(VAR_12, VAR_14, VAR_10);
}
