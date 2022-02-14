
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct hda_codec*,int ,int) ;

void FUNC_1(struct hda_codec *VAR_9, hda_nid_t VAR_10, int VAR_11,
        unsigned int *VAR_12)
{
 u32 VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_0(VAR_9, VAR_10, VAR_11);
 VAR_14 = (VAR_13 & VAR_0) >> VAR_1;
 VAR_15 = (VAR_13 & VAR_2) >> VAR_3;
 VAR_15 = (VAR_15 + 1) * 25;
 VAR_12[VAR_7] = VAR_8;
 VAR_12[VAR_6] = 2 * sizeof(unsigned int);
 VAR_12[VAR_4] = -VAR_14 * VAR_15;
 VAR_12[VAR_5] = VAR_15;
}
