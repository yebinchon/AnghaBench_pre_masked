
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 static hda_nid_t VAR_1[] = { 0x14, 0x1c };
 static hda_nid_t VAR_2[] = { 0x1c };

 FUNC_1(VAR_0, 0x24, FUNC_0(VAR_1), VAR_1);
 FUNC_1(VAR_0, 0x33, FUNC_0(VAR_2), VAR_2);
}
