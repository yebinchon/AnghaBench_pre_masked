
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int ,int,int,int,int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1,
       int VAR_2, int VAR_3, int VAR_4,
       bool VAR_5)
{

 if (!VAR_5 && FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4))
  return;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
