
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcasp {int slot_width; int max_format_width; int dai_fmt; scalar_t__ op_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct davinci_mcasp*,int ,int ,int ) ;
 int FUNC_5 (struct davinci_mcasp*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct davinci_mcasp *VAR_7,
           int VAR_8)
{
 u32 VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = (1ULL << VAR_8) - 1;

 if (VAR_7->slot_width)
  VAR_12 = VAR_7->slot_width;
 else if (VAR_7->max_format_width)
  VAR_12 = VAR_7->max_format_width;
 else
  VAR_12 = VAR_8;
 if ((VAR_7->dai_fmt & VAR_5) ==
     VAR_6) {
  VAR_10 = (VAR_12 / 4) & 0x7;
  VAR_11 = 0;
 } else {
  VAR_10 = (VAR_8 / 4) & 0x7;
  VAR_11 = (VAR_12 - VAR_8) / 4;
 }


 VAR_9 = (VAR_12 >> 1) - 1;

 if (VAR_7->op_mode != VAR_0) {
  FUNC_4(VAR_7, VAR_1, FUNC_1(VAR_9),
          FUNC_1(0x0F));
  FUNC_4(VAR_7, VAR_3, FUNC_3(VAR_9),
          FUNC_3(0x0F));
  FUNC_4(VAR_7, VAR_3, FUNC_2(VAR_10),
          FUNC_2(7));
  FUNC_4(VAR_7, VAR_1, FUNC_0(VAR_11),
          FUNC_0(7));
  FUNC_5(VAR_7, VAR_2, VAR_13);
 }

 FUNC_5(VAR_7, VAR_4, VAR_13);

 return 0;
}
