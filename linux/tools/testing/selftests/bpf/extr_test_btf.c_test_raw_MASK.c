
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int raw_test_num; } ;


 unsigned int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned int VAR_2;
 int VAR_3 = 0;

 if (VAR_0.raw_test_num)
  return FUNC_1(FUNC_2(VAR_0.raw_test_num));

 for (VAR_2 = 1; VAR_2 <= FUNC_0(VAR_1); VAR_2++)
  VAR_3 |= FUNC_1(FUNC_2(VAR_2));

 return VAR_3;
}
