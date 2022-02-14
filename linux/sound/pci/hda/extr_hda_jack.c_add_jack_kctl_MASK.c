
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct auto_pin_cfg {int dummy; } ;
typedef int name ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 unsigned int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,struct auto_pin_cfg const*,char*,int,int *) ;
 int FUNC_4 (struct hda_codec*,int ,char*,int,int ,int *) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_3, hda_nid_t VAR_4,
    const struct auto_pin_cfg *VAR_5,
    const char *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 char VAR_9[VAR_2];
 int VAR_10;
 bool VAR_11;

 if (!VAR_4)
  return 0;
 VAR_7 = FUNC_2(VAR_3, VAR_4);
 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 == VAR_1)
  return 0;
 VAR_11 = (VAR_8 != VAR_0) ||
         !FUNC_1(VAR_3, VAR_4);

 if (VAR_6)
  FUNC_6(VAR_9, VAR_6, sizeof(VAR_9));
 else
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_9, sizeof(VAR_9), ((void*)0));
 if (VAR_11)

  FUNC_8(VAR_9, " Phantom", sizeof(VAR_9) - FUNC_7(VAR_9) - 1);
 VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_9, VAR_11, 0, ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;

 if (!VAR_11)
  return FUNC_5(VAR_3, VAR_4);
 return 0;
}
