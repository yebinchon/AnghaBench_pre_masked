
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static bool FUNC_3(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 unsigned int VAR_5 = FUNC_2(VAR_3, VAR_4);


 return FUNC_0(VAR_5) != VAR_2 &&
  (FUNC_1(VAR_5) == VAR_1 ||
   FUNC_1(VAR_5) == VAR_0);
}
