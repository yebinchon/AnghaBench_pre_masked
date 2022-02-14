
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, size_t VAR_3)
{
 int VAR_4;

 if (!VAR_2) {
  return VAR_1;
 }

 if (VAR_3 == 2 && !FUNC_1("on", VAR_2)) {
  VAR_4 = VAR_1;
 } else if (VAR_3 == 3 && !FUNC_1("yes", VAR_2)) {
  VAR_4 = VAR_1;
 } else if (VAR_3 == 4 && !FUNC_1("true", VAR_2)) {
  VAR_4 = VAR_1;
 } else if (VAR_3 == 6 && !FUNC_1(VAR_2, "stderr")) {
  VAR_4 = VAR_0;
 } else if (VAR_3 == 6 && !FUNC_1(VAR_2, "stdout")) {
  VAR_4 = VAR_1;
 } else {
  FUNC_0(VAR_4, VAR_2);
  if (VAR_4 && VAR_4 != VAR_1 && VAR_4 != VAR_0) {
   VAR_4 = VAR_1;
  }
 }

 return VAR_4;
}
