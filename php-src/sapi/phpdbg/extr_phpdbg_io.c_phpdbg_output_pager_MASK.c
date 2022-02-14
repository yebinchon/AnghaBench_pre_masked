
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (char const*,char,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char const*,int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static int FUNC_6(int VAR_2, const char *VAR_3, int VAR_4) {
 int VAR_5 = 0, VAR_6 = 0;
 const char *VAR_7 = VAR_3, *VAR_8 = VAR_3 + VAR_4;

 while ((VAR_7 = FUNC_2(VAR_7, '\n', VAR_8 - VAR_7))) {
  VAR_5++;
  VAR_7++;

  if (VAR_5 % FUNC_0(VAR_1) == 0) {
   VAR_6 += FUNC_4(VAR_2, VAR_3 + VAR_6, (VAR_7 - VAR_3) - VAR_6);

   if (FUNC_2(VAR_7, '\n', VAR_8 - VAR_7)) {
    char VAR_9[VAR_0];
    FUNC_5(VAR_2, FUNC_1("\r---Type <return> to continue or q <return> to quit---"));
    FUNC_3(VAR_9);
    if (*VAR_9 == 'q') {
     break;
    }
    FUNC_5(VAR_2, "\r", 1);
   } else break;
  }
 }
 if (VAR_6 && VAR_5 % FUNC_0(VAR_1) != 0) {
  VAR_6 += FUNC_4(VAR_2, VAR_3 + VAR_6, VAR_4 - VAR_6);
 } else if (!VAR_6) {
  VAR_6 += FUNC_4(VAR_2, VAR_3, VAR_4);
 }
 return VAR_6;
}
