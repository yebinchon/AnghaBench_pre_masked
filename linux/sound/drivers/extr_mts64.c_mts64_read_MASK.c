
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct parport {int dummy; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*) ;
 int FUNC_2 (struct parport*) ;
 int FUNC_3 (struct parport*) ;
 int FUNC_4 (struct parport*) ;

__attribute__((used)) static u16 FUNC_5(struct parport *VAR_0)
{
 u8 VAR_1, VAR_2;

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 VAR_2 = FUNC_4(VAR_0);
 VAR_1 = FUNC_3(VAR_0);
 FUNC_1(VAR_0);

 return (VAR_2 << 8) | VAR_1;
}
