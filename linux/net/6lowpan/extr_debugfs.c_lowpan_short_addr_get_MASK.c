
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wpan_dev {int short_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_0, u64 *VAR_1)
{
 struct wpan_dev *VAR_2 = VAR_0;

 FUNC_1();
 *VAR_1 = FUNC_0(VAR_2->short_addr);
 FUNC_2();

 return 0;
}
