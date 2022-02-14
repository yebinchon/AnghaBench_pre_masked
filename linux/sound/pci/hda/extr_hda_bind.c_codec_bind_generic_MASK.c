
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {scalar_t__ probe_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_3)
{
 if (VAR_3->probe_id)
  return -VAR_0;

 if (FUNC_1(VAR_3)) {
  VAR_3->probe_id = VAR_2;
  FUNC_2(VAR_3);
  if (FUNC_0(VAR_3))
   return 0;
 }

 VAR_3->probe_id = VAR_1;
 FUNC_2(VAR_3);
 if (FUNC_0(VAR_3))
  return 0;
 return -VAR_0;
}
