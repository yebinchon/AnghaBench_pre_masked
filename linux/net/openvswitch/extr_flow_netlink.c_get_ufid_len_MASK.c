
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,char*,size_t,size_t) ;
 size_t FUNC_1 (struct nlattr const*) ;

__attribute__((used)) static size_t FUNC_2(const struct nlattr *VAR_1, bool VAR_2)
{
 size_t VAR_3;

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 1 || VAR_3 > VAR_0) {
  FUNC_0(VAR_2, "ufid size %u bytes exceeds the range (1, %d)",
     FUNC_1(VAR_1), VAR_0);
  return 0;
 }

 return VAR_3;
}
