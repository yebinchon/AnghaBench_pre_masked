
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = VAR_4 + FUNC_0(1000);

 do {
  VAR_6 = FUNC_2(VAR_5, VAR_3, 0,
      VAR_0, 0);
  if ((VAR_6 == VAR_1) ||
      (VAR_6 == VAR_2))
   break;
  FUNC_1(1);
 } while (FUNC_3(VAR_4, VAR_7));
}
