
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct nlattr*) ;

int FUNC_4(struct nlattr **VAR_4,
        u8 *VAR_5, u8 *VAR_6)
{
 int VAR_7;

 if (!VAR_4[VAR_2] && !VAR_4[VAR_3]) {
  FUNC_0(VAR_5);
  FUNC_0(VAR_6);
  VAR_5[0] = 0x2;
  VAR_6[0] = 0x3;

  return 0;
 }


 if (!VAR_4[VAR_2] || !VAR_4[VAR_3])
  return -VAR_0;

 FUNC_2(VAR_5, FUNC_3(VAR_4[VAR_2]), VAR_1);
 FUNC_2(VAR_6, FUNC_3(VAR_4[VAR_3]), VAR_1);


 if (!FUNC_1(VAR_6) ||
     FUNC_1(VAR_5))
  return -VAR_0;






 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_5[VAR_7] &= VAR_6[VAR_7];

 return 0;
}
