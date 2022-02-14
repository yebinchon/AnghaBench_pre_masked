
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,char const*,int) ;

int FUNC_4(void)
{
 int VAR_1, VAR_2;
 const char *VAR_3 = "/dev/dri/card";

 VAR_2 = -1;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  char VAR_4[80];

  FUNC_3(VAR_4, "%s%u", VAR_3, VAR_1);

  VAR_2 = FUNC_2(VAR_4, VAR_0);
  if (VAR_2 < 0)
   continue;

  if (FUNC_0(VAR_2)) {
   FUNC_1(VAR_2);
   continue;
  } else {
   break;
  }

 }
 return VAR_2;
}
