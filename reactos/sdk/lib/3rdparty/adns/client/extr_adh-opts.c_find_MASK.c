
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optioninfo {int dummy; } ;
typedef int comparer_type ;


 scalar_t__ VAR_0 ;
 struct optioninfo* FUNC_0 (char const**,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,char const*) ;

__attribute__((used)) static const struct optioninfo *FUNC_2(const char **VAR_3,
         const char *VAR_4,
         comparer_type *VAR_5) {
  const struct optioninfo *VAR_6;
  const char *VAR_7;

  VAR_7= *VAR_3;
  VAR_6= FUNC_0(VAR_3,VAR_2,VAR_5);
  if (VAR_6) return VAR_6;
  VAR_6= FUNC_0(VAR_3,VAR_1,VAR_5);
  if (!VAR_6) FUNC_1("unknown option %s%s",VAR_4,VAR_7);
  if (VAR_0) FUNC_1("global option %s%s specified after query domain(s)",VAR_4,VAR_7);
  return VAR_6;
}
