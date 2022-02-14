
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {int regmap; scalar_t__ base; } ;
struct reg_sequence {int member_1; scalar_t__ member_0; } ;


 int FUNC_0 (struct reg_sequence*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (int ,struct reg_sequence*,int ) ;

__attribute__((used)) static int FUNC_2(struct wm_adsp *VAR_21, unsigned int VAR_22)
{
 struct reg_sequence VAR_23[] = {
  { VAR_21->base + VAR_0, 0x5555 },
  { VAR_21->base + VAR_0, 0xAAAA },
  { VAR_21->base + VAR_5, 0xFFFFFFFF },
  { VAR_21->base + VAR_13, 0xFFFFFFFF },
  { VAR_21->base + VAR_1, VAR_22 },
  { VAR_21->base + VAR_9, VAR_22 },
  { VAR_21->base + VAR_17, VAR_22 },
  { VAR_21->base + VAR_6, 0xFFFFFFFF },
  { VAR_21->base + VAR_14, 0xFFFFFFFF },
  { VAR_21->base + VAR_2, VAR_22 },
  { VAR_21->base + VAR_10, VAR_22 },
  { VAR_21->base + VAR_18, VAR_22 },
  { VAR_21->base + VAR_7, 0xFFFFFFFF },
  { VAR_21->base + VAR_15, 0xFFFFFFFF },
  { VAR_21->base + VAR_3, VAR_22 },
  { VAR_21->base + VAR_11, VAR_22 },
  { VAR_21->base + VAR_19, VAR_22 },
  { VAR_21->base + VAR_8, 0xFFFFFFFF },
  { VAR_21->base + VAR_16, 0xFFFFFFFF },
  { VAR_21->base + VAR_4, VAR_22 },
  { VAR_21->base + VAR_12, VAR_22 },
  { VAR_21->base + VAR_20, VAR_22 },
  { VAR_21->base + VAR_0, 0 },
 };

 return FUNC_1(VAR_21->regmap, VAR_23, FUNC_0(VAR_23));
}
