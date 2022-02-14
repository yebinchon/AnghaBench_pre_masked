
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int) ;
 int VAR_4 ;

int FUNC_4(int VAR_5, char **VAR_6)
{
 const char *VAR_7;
 char VAR_8[4];
 int VAR_9, VAR_10;

 if (VAR_5 < 2) {
  FUNC_0(VAR_4, "usage: %s <path>\n", VAR_6[0]);
  return VAR_0;
 }

 VAR_7 = VAR_6[1];


 VAR_9 = FUNC_1(VAR_7, VAR_3 | VAR_2, 0600);
 if (VAR_9 < 0) {
  FUNC_2("open(O_WRONLY)");
  return VAR_0;
 }

 VAR_10 = FUNC_3(VAR_9, VAR_8, sizeof(VAR_8));
 if (VAR_10 != 0) {
  FUNC_0(VAR_4, "Reading a new var should return EOF\n");
  return VAR_0;
 }

 return VAR_1;
}
