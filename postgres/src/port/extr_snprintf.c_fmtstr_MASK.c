
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PrintfTarget ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char,int,int *) ;
 int FUNC_2 (char const*,int,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4, PrintfTarget *VAR_5)
{
 int VAR_6,
    VAR_7;





 if (VAR_4)
  VAR_7 = FUNC_4(VAR_0, VAR_3);
 else
  VAR_7 = FUNC_3(VAR_0);

 VAR_6 = FUNC_0(VAR_2, VAR_7, VAR_1);

 if (VAR_6 > 0)
 {
  FUNC_1(' ', VAR_6, VAR_5);
  VAR_6 = 0;
 }

 FUNC_2(VAR_0, VAR_7, VAR_5);

 FUNC_5(VAR_6, VAR_5);
}
