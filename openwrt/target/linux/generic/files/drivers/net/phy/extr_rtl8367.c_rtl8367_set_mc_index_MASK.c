
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct rtl8366_smi *VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_5 >= VAR_1 || VAR_6 >= VAR_2)
  return -VAR_0;

 return FUNC_2(VAR_4, FUNC_0(VAR_5),
    VAR_3 <<
     FUNC_1(VAR_5),
    (VAR_6 & VAR_3) <<
     FUNC_1(VAR_5));
}
