
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {int size; } ;
struct path {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (struct path const*,char*,size_t) ;
 char* FUNC_3 (char*,char*,char const*) ;
 int FUNC_4 (struct seq_buf*,int) ;
 size_t FUNC_5 (struct seq_buf*,char**) ;

int FUNC_6(struct seq_buf *VAR_0, const struct path *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4 = FUNC_5(VAR_0, &VAR_3);
 int VAR_5 = -1;

 FUNC_1(VAR_0->size == 0);

 if (VAR_4) {
  char *VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4);
  if (!FUNC_0(VAR_6)) {
   char *VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_2);
   if (VAR_7)
    VAR_5 = VAR_7 - VAR_3;
  }
 }
 FUNC_4(VAR_0, VAR_5);

 return VAR_5;
}
