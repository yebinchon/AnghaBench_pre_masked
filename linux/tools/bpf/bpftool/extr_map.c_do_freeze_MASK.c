
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,char***) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(int VAR_3, char **VAR_4)
{
 int VAR_5, VAR_6;

 if (!FUNC_1(2))
  return -1;

 VAR_6 = FUNC_5(&VAR_3, &VAR_4);
 if (VAR_6 < 0)
  return -1;

 if (VAR_3) {
  FUNC_3(VAR_6);
  return FUNC_0();
 }

 VAR_5 = FUNC_2(VAR_6);
 FUNC_3(VAR_6);
 if (VAR_5) {
  FUNC_6("failed to freeze map: %s", FUNC_7(VAR_0));
  return VAR_5;
 }

 if (VAR_1)
  FUNC_4(VAR_2);

 return 0;
}
