
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int core; int dp_mst; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int *,int ,int ) ;

unsigned int FUNC_3(struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4, VAR_5);
 unsigned int VAR_7;

 if (!VAR_4->dp_mst || !(VAR_6 & VAR_2) ||
     FUNC_1(VAR_6) != VAR_3)
  return 0;

 VAR_7 = FUNC_2(&VAR_4->core, VAR_5, VAR_1);
 if (VAR_7 == -1)
  VAR_7 = 0;
 return VAR_7 & VAR_0;
}
