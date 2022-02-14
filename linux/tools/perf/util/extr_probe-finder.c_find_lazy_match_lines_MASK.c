
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intlist {int dummy; } ;
typedef int ssize_t ;
typedef int sbuf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (struct intlist*,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*,int ) ;
 int FUNC_8 (int,char*,int) ;
 scalar_t__ FUNC_9 (char*,char const*) ;

__attribute__((used)) static int FUNC_10(struct intlist *VAR_2,
     const char *VAR_3, const char *VAR_4)
{
 FILE *VAR_5;
 char *VAR_6 = ((void*)0);
 size_t VAR_7;
 ssize_t VAR_8;
 int VAR_9 = 0, VAR_10 = 1;
 char VAR_11[VAR_0];

 VAR_5 = FUNC_2(VAR_3, "r");
 if (!VAR_5) {
  FUNC_7("Failed to open %s: %s\n", VAR_3,
      FUNC_8(VAR_1, VAR_11, sizeof(VAR_11)));
  return -VAR_1;
 }

 while ((VAR_8 = FUNC_4(&VAR_6, &VAR_7, VAR_5)) > 0) {

  if (VAR_6[VAR_8 - 1] == '\n')
   VAR_6[VAR_8 - 1] = '\0';

  if (FUNC_9(VAR_6, VAR_4)) {
   FUNC_5(VAR_2, VAR_10);
   VAR_9++;
  }
  VAR_10++;
 }

 if (FUNC_1(VAR_5))
  VAR_9 = -VAR_1;
 FUNC_3(VAR_6);
 FUNC_0(VAR_5);

 if (VAR_9 == 0)
  FUNC_6("No matched lines found in %s.\n", VAR_3);
 return VAR_9;
}
