
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hda_codec {int core; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int,unsigned int*) ;

int FUNC_2(struct hda_codec *VAR_1, hda_nid_t VAR_2,
   u8 *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_5)
  return 0;

 VAR_7 = VAR_5 + 1;
 VAR_7 = VAR_7 < VAR_4 ? VAR_7 : VAR_4;

 VAR_8 = 0;
 while (VAR_8 < VAR_7) {
  if (FUNC_1(&VAR_1->core, VAR_2,
      VAR_0, VAR_8, &VAR_5))
   break;

  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   VAR_3[VAR_8] = (u8)VAR_5;
   VAR_5 >>= 4;
   VAR_8++;
   if (VAR_8 >= VAR_7)
    break;
  }
 }
 return VAR_8;
}
