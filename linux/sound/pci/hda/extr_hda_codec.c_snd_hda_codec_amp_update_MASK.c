
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int core; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int) ;
 unsigned int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int *,unsigned int,int,int) ;

int FUNC_3(struct hda_codec *VAR_3, hda_nid_t VAR_4,
        int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 unsigned int VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);


 if ((FUNC_0(VAR_3, VAR_4, VAR_6) &
      (VAR_1 | VAR_0)) == VAR_0)
  VAR_10 |= VAR_2;
 return FUNC_2(&VAR_3->core, VAR_10, VAR_8, VAR_9);
}
