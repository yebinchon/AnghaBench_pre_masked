
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_6)
{
 int VAR_7;
 char VAR_8[VAR_3];

 do {
  VAR_7 = FUNC_1(VAR_6, VAR_2|VAR_1);
  if (VAR_7 >= 0)
   return VAR_7;

  FUNC_2("dso open failed: %s\n",
    FUNC_3(VAR_5, VAR_8, sizeof(VAR_8)));
  if (!VAR_4 || VAR_5 != VAR_0)
   break;

  FUNC_0();
 } while (1);

 return -1;
}
