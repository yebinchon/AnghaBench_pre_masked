
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned short,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_1,
  unsigned int VAR_2,
  unsigned short VAR_3,
  unsigned short *VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_2,
    VAR_3, VAR_0, 32, 0);

 if (VAR_4)
  *VAR_4 = (unsigned short)VAR_5;

 return 0;
}
