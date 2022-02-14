
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (struct rtl8366_smi*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_3, int VAR_4,
      unsigned VAR_5, unsigned VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = (VAR_0 |
  (VAR_1 <<
   VAR_2));

 VAR_8 = VAR_6;
 VAR_8 |= VAR_5 << VAR_2;

 FUNC_0(VAR_3, FUNC_1(VAR_4), VAR_7, VAR_8);

 return 0;
}
