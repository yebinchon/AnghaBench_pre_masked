
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned long*,unsigned long) ;
 int FUNC_2 () ;
 unsigned long* VAR_5 ;
 int FUNC_3 (unsigned long*,int ,int) ;
 unsigned long* FUNC_4 (int *,int,int,int,int,int ) ;
 int VAR_6 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned long VAR_7;

 VAR_6 = FUNC_2();
 VAR_5 = FUNC_4(((void*)0), VAR_6 * 2, VAR_3|VAR_4,
  VAR_2|VAR_0, -1, 0);

 FUNC_0(VAR_5 == VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  VAR_5[VAR_7] = VAR_7;

 FUNC_3(VAR_5+VAR_6, 0, VAR_6);

 FUNC_5();

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_0(FUNC_1(VAR_5+VAR_7, VAR_7));

 return 0;
}
