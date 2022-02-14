
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lx6464es {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lx6464es*) ;

__attribute__((used)) static int FUNC_1(struct lx6464es *VAR_3, u32 *VAR_4,
       int *VAR_5, int *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = FUNC_0(VAR_3);

 if (VAR_8 == VAR_2)
  return 0;

 *VAR_4 = VAR_8;

 VAR_7 = VAR_8 & VAR_0;


 if (VAR_7 & VAR_1) {
  VAR_7 &= ~VAR_1;
  *VAR_6 = 1;
 }

 if (VAR_7) {

  *VAR_5 = 1;
 }

 return 1;
}
