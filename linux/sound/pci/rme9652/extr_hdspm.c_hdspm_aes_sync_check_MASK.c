
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 VAR_3 = FUNC_0(VAR_1, VAR_0);

 VAR_4 = (VAR_3 & (0x0080 >> VAR_2)) ? 1 : 0;
 VAR_5 = (VAR_3 & (0x8000 >> VAR_2)) ? 1 : 0;

 if (VAR_5)
  return 2;
 else if (VAR_4)
  return 1;
 return 0;
}
