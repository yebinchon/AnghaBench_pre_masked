
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {scalar_t__ file_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char**,char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct strlist*,char const*) ;
 int FUNC_4 (struct strlist*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct strlist *VAR_3, const char *VAR_4,
         const char *VAR_5)
{
 int VAR_6;
 char *VAR_7 = ((void*)0);

 if (FUNC_5(VAR_4, "file://", 7) == 0)
  return FUNC_4(VAR_3, VAR_4 + 7);

 if (VAR_5) {
  VAR_6 = -VAR_1;
  if (FUNC_1(&VAR_7, "%s/%s", VAR_5, VAR_4) < 0)
   goto out;

  if (FUNC_0(VAR_7, VAR_2) == 0) {
   VAR_6 = FUNC_4(VAR_3, VAR_7);
   goto out;
  }

  if (VAR_3->file_only) {
   VAR_6 = -VAR_0;
   goto out;
  }
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4);
out:
 FUNC_2(VAR_7);
 return VAR_6;
}
