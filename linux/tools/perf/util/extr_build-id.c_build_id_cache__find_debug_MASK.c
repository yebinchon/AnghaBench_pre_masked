
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {int dummy; } ;
struct nscookie {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 char* FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct nsinfo*,struct nscookie*) ;
 int FUNC_5 (struct nscookie*) ;
 char* FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,scalar_t__,char*,char const*,char const*) ;
 int FUNC_8 (char**) ;

__attribute__((used)) static char *FUNC_9(const char *VAR_2,
     struct nsinfo *VAR_3)
{
 char *VAR_4 = ((void*)0);
 char *VAR_5;
 struct nscookie VAR_6;
 size_t VAR_7 = 0;

 VAR_5 = FUNC_2(1, VAR_0);
 if (!VAR_5)
  goto out;

 VAR_7 = FUNC_0(VAR_5, VAR_0,
       "/usr/lib/debug/.build-id/");
 FUNC_7(VAR_5 + VAR_7, VAR_0 - VAR_7, "%.2s/%s.debug", VAR_2,
   VAR_2 + 2);

 FUNC_4(VAR_3, &VAR_6);
 VAR_4 = FUNC_6(VAR_5, ((void*)0));
 if (VAR_4 && FUNC_1(VAR_4, VAR_1))
  FUNC_8(&VAR_4);
 FUNC_5(&VAR_6);
out:
 FUNC_3(VAR_5);
 return VAR_4;
}
