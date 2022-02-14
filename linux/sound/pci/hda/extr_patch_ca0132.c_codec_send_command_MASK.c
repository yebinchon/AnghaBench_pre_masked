
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int FUNC_0 (struct hda_codec*,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct hda_codec *VAR_0, hda_nid_t VAR_1,
  unsigned int VAR_2, unsigned int VAR_3, unsigned int *VAR_4)
{
 unsigned int VAR_5;
 VAR_5 = FUNC_0(VAR_0, VAR_1, 0, VAR_2, VAR_3);
 *VAR_4 = VAR_5;

 return ((VAR_5 == -1) ? -1 : 0);
}
