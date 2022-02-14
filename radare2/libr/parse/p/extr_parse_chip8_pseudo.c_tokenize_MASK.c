
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(const char* VAR_0, char* VAR_1[]) {
 int VAR_2 = FUNC_3 (VAR_0), VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 char *VAR_7, *VAR_8 = (char*) VAR_0;
 const char* VAR_9 = ", \t\n";

 while (VAR_4 < VAR_2) {
  VAR_5 = FUNC_2 (VAR_8, VAR_9);
  VAR_7 = FUNC_0 (VAR_5 + 1, sizeof(char));
  FUNC_1 (VAR_7, VAR_8, VAR_5);
  VAR_1[VAR_3] = VAR_7;
  VAR_4 += VAR_5;
  VAR_8 += VAR_5;
  VAR_3++;

  VAR_6 = FUNC_4 (VAR_8, VAR_9);
  VAR_4 += VAR_6;
  VAR_8 += VAR_6;
 }

 return VAR_3;
}
