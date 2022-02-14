
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct strbuf*,struct list_head*) ;
 int VAR_2 ;
 int FUNC_3 (struct strbuf*,char*,char*) ;
 int FUNC_4 (struct strbuf*,int) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, struct strbuf *VAR_4,
            struct list_head *VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9 = -VAR_0;

 VAR_7 = FUNC_5(VAR_3);
 if (!VAR_7)
  return -VAR_1;
 VAR_6 = VAR_7;

 FUNC_4(VAR_4, 100);
 FUNC_3(VAR_4, "%s", "");

 while ((VAR_8 = FUNC_6(&VAR_6, ",")) != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5);
  if (VAR_9 == -VAR_0) {
   FUNC_0(VAR_2, "Cannot find metric or group `%s'\n",
     VAR_8);
   break;
  }
 }
 FUNC_1(VAR_7);
 return VAR_9;
}
