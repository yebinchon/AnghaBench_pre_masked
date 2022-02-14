
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dump_coef; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct hda_codec *VAR_1)
{
 switch (VAR_0) {
 case 0: return 0;
 case 1: return 1;
 default: return VAR_1->dump_coef;
 }
}
