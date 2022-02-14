
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static char FUNC_2(bool VAR_1)
{
 char VAR_2[64] = "forcibly remove current file (unrecoverable)? [y/Y confirms]";
 int VAR_3;

 if (VAR_1)
  FUNC_1(VAR_2, 64, "forcibly remove %d file(s) (unrecoverable)? [y/Y confirms]", VAR_0);

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 == 'y' || VAR_3 == 'Y')
  return 'f';
 return 'i';
}
