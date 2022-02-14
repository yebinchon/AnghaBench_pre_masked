
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int core; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 int FUNC_2 (int *,int ,unsigned int,unsigned int) ;

int FUNC_3(struct hda_codec *VAR_4, hda_nid_t VAR_5, int VAR_6,
         unsigned int VAR_7)
{
 unsigned int VAR_8;

 FUNC_1(VAR_4, VAR_5,
          FUNC_0(VAR_4, VAR_5) | VAR_2);
 VAR_8 = VAR_6 == VAR_3 ? VAR_1 : VAR_0;
 return FUNC_2(&VAR_4->core, VAR_5, VAR_8, VAR_7);
}
