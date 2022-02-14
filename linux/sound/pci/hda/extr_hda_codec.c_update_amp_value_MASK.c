
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int,int,int,int ,unsigned int) ;

__attribute__((used)) static inline int
FUNC_2(struct hda_codec *VAR_1, hda_nid_t VAR_2,
   int VAR_3, int VAR_4, int VAR_5, unsigned int VAR_6,
   unsigned int VAR_7)
{
 unsigned int VAR_8;

 if (VAR_7 > 0)
  VAR_7 += VAR_6;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_4, 0);
 if (VAR_7 > VAR_8)
  VAR_7 = VAR_8;
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_0, VAR_7);
}
