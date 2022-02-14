
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int core; int preset; scalar_t__ probe_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,char*) ;
 scalar_t__ FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct hda_codec *VAR_1)
{
 int VAR_2;

 if (FUNC_3(VAR_1))
  VAR_1->probe_id = VAR_0;
 else
  VAR_1->probe_id = 0;

 VAR_2 = FUNC_4(&VAR_1->core);
 if (VAR_2 < 0)
  return VAR_2;

 if (!VAR_1->preset)
  FUNC_1(VAR_1);
 if (!VAR_1->preset) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 < 0) {
   FUNC_2(VAR_1, "Unable to bind the codec\n");
   goto error;
  }
 }

 return 0;

 error:
 FUNC_5(&VAR_1->core);
 return VAR_2;
}
