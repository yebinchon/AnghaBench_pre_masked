
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct ida*,int) ;
 scalar_t__ FUNC_1 (struct ida*,int ) ;
 unsigned int FUNC_2 (struct ida*,unsigned int,int ) ;
 int FUNC_3 (struct ida*) ;
 int FUNC_4 (struct ida*,int ) ;
 int FUNC_5 (struct ida*) ;

__attribute__((used)) static void FUNC_6(struct ida *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_2, FUNC_2(VAR_2, VAR_3, VAR_0) !=
    VAR_3 + VAR_4);
 }

 FUNC_3(VAR_2);
 FUNC_0(VAR_2, !FUNC_5(VAR_2));

 FUNC_0(VAR_2, FUNC_1(VAR_2, VAR_0) != 0);
 FUNC_0(VAR_2, FUNC_5(VAR_2));
 FUNC_4(VAR_2, 0);
 FUNC_0(VAR_2, !FUNC_5(VAR_2));
}
