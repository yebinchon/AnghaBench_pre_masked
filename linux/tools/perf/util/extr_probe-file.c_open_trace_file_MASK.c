
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,char*,int ,char const*) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_5 ;
 int FUNC_3 () ;

int FUNC_4(const char *VAR_6, bool VAR_7)
{
 char VAR_8[VAR_3];
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_3, "%s/%s", FUNC_3(), VAR_6);
 if (VAR_9 >= 0) {
  FUNC_2("Opening %s write=%d\n", VAR_8, VAR_7);
  if (VAR_7 && !VAR_5)
   VAR_9 = FUNC_1(VAR_8, VAR_2 | VAR_0, 0);
  else
   VAR_9 = FUNC_1(VAR_8, VAR_1, 0);

  if (VAR_9 < 0)
   VAR_9 = -VAR_4;
 }
 return VAR_9;
}
