
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,size_t,char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (struct strlist*,char*) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(char *VAR_5, size_t VAR_6, const char *VAR_7,
         struct strlist *VAR_8, bool VAR_9,
         bool VAR_10)
{
 int VAR_11, VAR_12;
 char *VAR_13, *VAR_14;

 if (*VAR_7 == '.')
  VAR_7++;
 VAR_14 = FUNC_5(VAR_7);
 if (!VAR_14)
  return -VAR_2;


 VAR_13 = FUNC_7(VAR_14, ".@");
 if (VAR_13 && VAR_13 != VAR_14)
  *VAR_13 = '\0';


 VAR_12 = FUNC_0(VAR_5, VAR_6, "%s%s", VAR_14, VAR_9 ? "__return" : "");
 if (VAR_12 < 0) {
  FUNC_3("snprintf() failed: %d\n", VAR_12);
  goto out;
 }
 if (!FUNC_6(VAR_8, VAR_5))
  goto out;

 if (!VAR_10) {
  FUNC_4("Error: event \"%s\" already exists.\n"
      " Hint: Remove existing event by 'perf probe -d'\n"
      "       or force duplicates by 'perf probe -f'\n"
      "       or set 'force=yes' in BPF source.\n",
      VAR_5);
  VAR_12 = -VAR_0;
  goto out;
 }


 for (VAR_11 = 1; VAR_11 < VAR_4; VAR_11++) {
  VAR_12 = FUNC_0(VAR_5, VAR_6, "%s_%d", VAR_14, VAR_11);
  if (VAR_12 < 0) {
   FUNC_3("snprintf() failed: %d\n", VAR_12);
   goto out;
  }
  if (!FUNC_6(VAR_8, VAR_5))
   break;
 }
 if (VAR_11 == VAR_4) {
  FUNC_4("Too many events are on the same function.\n");
  VAR_12 = -VAR_3;
 }

out:
 FUNC_1(VAR_14);


 if (VAR_12 >= 0 && !FUNC_2(VAR_5)) {
  FUNC_4("Internal error: \"%s\" is an invalid event name.\n",
      VAR_5);
  VAR_12 = -VAR_1;
 }

 return VAR_12;
}
