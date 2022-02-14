
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int,int) ;
 int FUNC_4 (char*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(int VAR_6, char **VAR_7)
{
 int VAR_8 = VAR_0 | VAR_1;
 int VAR_9 = 0, VAR_10 = 16;

 if (!FUNC_0())
  return -1;

 if (VAR_3)
  FUNC_2(VAR_4);
 if (FUNC_3("/proc", VAR_5, VAR_10, VAR_8) == -1) {
  FUNC_4("%s", FUNC_5(VAR_2));
  VAR_9 = -1;
 }
 if (VAR_3)
  FUNC_1(VAR_4);

 return VAR_9;
}
