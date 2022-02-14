
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (int,char const**) ;
 int FUNC_4 (int,char const**) ;
 int FUNC_5 (int,char const**) ;
 int FUNC_6 (int,char const**) ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 () ;

int FUNC_9(int VAR_4, const char *VAR_5[])
{
 int (*VAR_6)(int VAR_7, const char *VAR_8[]);
 int VAR_9;

 VAR_2 = (char *) VAR_5[0];

 if (VAR_4 < 2) {
  FUNC_8();
  return VAR_0;
 }

 if (FUNC_7(VAR_5[1], "add") == 0) {
  VAR_6 = FUNC_1;
 } else if (FUNC_7(VAR_5[1], "and") == 0) {
  VAR_6 = FUNC_2;
 } else if (FUNC_7(VAR_5[1], "or") == 0) {
  VAR_6 = FUNC_5;
 } else if (FUNC_7(VAR_5[1], "xor") == 0) {
  VAR_6 = FUNC_6;
 } else if (FUNC_7(VAR_5[1], "mac2bin") == 0) {
  VAR_6 = FUNC_4;
 } else if (FUNC_7(VAR_5[1], "bin2mac") == 0) {
  VAR_6 = FUNC_3;
 } else {
  FUNC_0(VAR_3, "unknown command '%s'\n", VAR_5[1]);
  FUNC_8();
  return VAR_0;
 }

 VAR_4 -= 2;
 VAR_5 += 2;

 VAR_9 = VAR_6(VAR_4, VAR_5);
 if (VAR_9)
  return VAR_0;

 return VAR_1;
}
