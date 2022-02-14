
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int StringInfoData ;
typedef int Port ;
typedef scalar_t__ AuthRequest ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(Port *VAR_2, AuthRequest VAR_3, const char *VAR_4, int VAR_5)
{
 StringInfoData VAR_6;

 FUNC_0();

 FUNC_1(&VAR_6, 'R');
 FUNC_5(&VAR_6, (int32) VAR_3);
 if (VAR_5 > 0)
  FUNC_4(&VAR_6, VAR_4, VAR_5);

 FUNC_2(&VAR_6);






 if (VAR_3 != VAR_0 && VAR_3 != VAR_1)
  FUNC_3();

 FUNC_0();
}
