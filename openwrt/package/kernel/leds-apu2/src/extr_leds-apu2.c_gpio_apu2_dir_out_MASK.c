
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (struct gpio_chip *VAR_3, unsigned VAR_4,
  int VAR_5)
{
 u32 VAR_6;

 FUNC_3 (&VAR_2);

 VAR_6 = FUNC_1 (VAR_1[VAR_4]);
 VAR_6 |= FUNC_0(VAR_0);
 FUNC_2 (VAR_6, VAR_1[VAR_4]);

 FUNC_4 (&VAR_2);

 return 0;
}
