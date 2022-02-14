
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esschan {int dummy; } ;
struct es1968 {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct es1968*,int,int) ;
 int FUNC_1 (struct es1968*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct es1968 *VAR_1, struct esschan *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_1, 0, 5);
 VAR_4 = FUNC_0(VAR_1, 1, 5);
 VAR_5 = (VAR_3 > VAR_4 ? VAR_3 - VAR_4 : VAR_4 - VAR_3);

 if (VAR_5 > 1)
  FUNC_1(VAR_1, VAR_0, VAR_3);
}
