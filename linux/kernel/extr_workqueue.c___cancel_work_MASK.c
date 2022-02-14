
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct work_struct*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct work_struct*,int ) ;
 int FUNC_3 (struct work_struct*,int,unsigned long*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct work_struct *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 do {
  VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 } while (FUNC_4(VAR_4 == -VAR_0));

 if (FUNC_4(VAR_4 < 0))
  return 0;

 FUNC_2(VAR_1, FUNC_0(VAR_1));
 FUNC_1(VAR_3);
 return VAR_4;
}
