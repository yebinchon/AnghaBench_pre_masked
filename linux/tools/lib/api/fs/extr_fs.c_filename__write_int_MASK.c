
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4(const char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_0), VAR_4 = -1;
 char VAR_5[64];

 if (VAR_3 < 0)
  return VAR_4;

 FUNC_2(VAR_5, "%d", VAR_2);
 if (FUNC_3(VAR_3, VAR_5, sizeof(VAR_5)) == sizeof(VAR_5))
  VAR_4 = 0;

 FUNC_0(VAR_3);
 return VAR_4;
}
