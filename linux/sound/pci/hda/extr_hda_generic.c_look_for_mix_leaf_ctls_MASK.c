
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 unsigned int FUNC_0 (int ,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ,int ) ;
 scalar_t__ FUNC_3 (struct hda_codec*,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int) ;
 int FUNC_5 (struct hda_codec*,int ,int const**) ;

__attribute__((used)) static bool FUNC_6(struct hda_codec *VAR_4, hda_nid_t VAR_5,
       hda_nid_t VAR_6, unsigned int *VAR_7,
       unsigned int *VAR_8)
{
 int VAR_9, VAR_10;
 const hda_nid_t *VAR_11;
 hda_nid_t VAR_12;

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6, 1);
 if (VAR_9 < 0)
  return 0;

 *VAR_7 = *VAR_8 = 0;
 if (FUNC_3(VAR_4, VAR_5, VAR_0))
  *VAR_7 = FUNC_0(VAR_5, 3, VAR_9, VAR_0);
 if (FUNC_2(VAR_4, VAR_5, VAR_0))
  *VAR_8 = FUNC_0(VAR_5, 3, VAR_9, VAR_0);
 if (*VAR_7 && *VAR_8)
  return 1;


 VAR_10 = FUNC_5(VAR_4, VAR_5, &VAR_11);
 if (VAR_10 < VAR_9)
  return 0;
 VAR_12 = VAR_11[VAR_9];
 if (!*VAR_7 && FUNC_3(VAR_4, VAR_12, VAR_1) &&
     !FUNC_1(VAR_4, VAR_12, VAR_1, 0, VAR_3))
  *VAR_7 = FUNC_0(VAR_12, 3, 0, VAR_1);
 if (!*VAR_8 && FUNC_2(VAR_4, VAR_12, VAR_1) &&
     !FUNC_1(VAR_4, VAR_12, VAR_1, 0, VAR_2))
  *VAR_8 = FUNC_0(VAR_12, 3, 0, VAR_1);

 return *VAR_7 || *VAR_8;
}
