
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feat_fd {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct feat_fd*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,size_t*,int *) ;
 scalar_t__ FUNC_5 (char) ;
 char* FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_10(struct feat_fd *VAR_0, const char *VAR_1)
{
 FILE *VAR_2;
 char *VAR_3 = ((void*)0);
 char *VAR_4, *VAR_5;
 const char *VAR_6 = VAR_1;
 size_t VAR_7 = 0;
 int VAR_8 = -1;

 if (!VAR_6)
  return -1;

 VAR_2 = FUNC_2("/proc/cpuinfo", "r");
 if (!VAR_2)
  return -1;

 while (FUNC_4(&VAR_3, &VAR_7, VAR_2) > 0) {
  VAR_8 = FUNC_9(VAR_3, VAR_6, FUNC_8(VAR_6));
  if (!VAR_8)
   break;
 }

 if (VAR_8) {
  VAR_8 = -1;
  goto done;
 }

 VAR_4 = VAR_3;

 VAR_5 = FUNC_7(VAR_3, ':');
 if (VAR_5 && *(VAR_5+1) == ' ' && *(VAR_5+2))
  VAR_4 = VAR_5 + 2;
 VAR_5 = FUNC_7(VAR_4, '\n');
 if (VAR_5)
  *VAR_5 = '\0';


 VAR_5 = VAR_4;
 while (*VAR_5) {
  if (FUNC_5(*VAR_5)) {
   char *VAR_9 = VAR_5 + 1;
   char *VAR_10 = FUNC_6(VAR_9);
   *VAR_5 = ' ';
   if (VAR_10 != (VAR_5+1))
    while ((*VAR_9++ = *VAR_10++));
  }
  VAR_5++;
 }
 VAR_8 = FUNC_0(VAR_0, VAR_4);
done:
 FUNC_3(VAR_3);
 FUNC_1(VAR_2);
 return VAR_8;
}
