
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HMODULE ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline HMODULE FUNC_4(const char *VAR_2)
{
 char VAR_3[VAR_0];
 HMODULE VAR_4;

 FUNC_3(VAR_3, VAR_1);
 FUNC_2(VAR_3, "\\");
 FUNC_2(VAR_3, VAR_2);

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_3);
}
