
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*,char**,char**) ;
 scalar_t__ FUNC_4 (char*,char*,int,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static uint64_t
FUNC_6(const char *VAR_2, void *VAR_3)
{
 uintptr_t VAR_4;
 char *VAR_5;
 char *VAR_6;
 FUNC_3(VAR_2, &VAR_6, &VAR_5);


 FUNC_0(VAR_5);

 if (VAR_6)
  VAR_4 = (uintptr_t) FUNC_4(VAR_6, VAR_5,
              1, ((void*)0));
 else
  VAR_4 = (uintptr_t) FUNC_1(VAR_2);

 FUNC_5(VAR_5);
 if (VAR_6)
  FUNC_5(VAR_6);


 if (!VAR_4)
  FUNC_2(VAR_1, "failed to resolve name %s", VAR_2);

 return (uint64_t) VAR_4;
}
