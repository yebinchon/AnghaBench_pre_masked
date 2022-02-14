
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static char *FUNC_5(void)
{
 char VAR_5[VAR_0];
 char *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 off_t VAR_8;
 char VAR_9;

 for (;;) {
  VAR_8 = FUNC_3(VAR_2, &VAR_9, 1);
  if (VAR_8 < 0) {
   FUNC_2("reading input file");
   goto out;
  }

  if (!VAR_8) {
   FUNC_2("no data");
   goto out;
  }

  if (VAR_3) {
   int VAR_10 = FUNC_4(VAR_1, &VAR_9, 1);

   if (VAR_10 <= 0 || VAR_10 != VAR_8) {
    FUNC_2("repiping input file string");
    goto out;
   }
  }

  VAR_5[VAR_7++] = VAR_9;

  if (!VAR_9)
   break;
 }

 VAR_4 += VAR_7;

 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6)
  FUNC_1(VAR_6, VAR_5, VAR_7);
out:
 return VAR_6;
}
