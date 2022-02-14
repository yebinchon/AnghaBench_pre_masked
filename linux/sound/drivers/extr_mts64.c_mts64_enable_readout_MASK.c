
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*,int ) ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_1)
{
 u8 VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2 |= VAR_0;
 FUNC_1(VAR_1, VAR_2);
}
