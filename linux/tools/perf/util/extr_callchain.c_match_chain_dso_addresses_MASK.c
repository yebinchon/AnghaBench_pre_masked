
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct map {struct dso* dso; } ;
struct dso {int dummy; } ;
typedef enum match_result { ____Placeholder_match_result } match_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum match_result FUNC_0(struct map *VAR_3, u64 VAR_4,
         struct map *VAR_5, u64 VAR_6)
{
 struct dso *VAR_7 = VAR_3 ? VAR_3->dso : ((void*)0);
 struct dso *VAR_8 = VAR_5 ? VAR_5->dso : ((void*)0);

 if (VAR_7 != VAR_8)
  return VAR_7 < VAR_8 ? VAR_2 : VAR_1;

 if (VAR_4 != VAR_6)
   return VAR_4 < VAR_6 ? VAR_2 : VAR_1;

 return VAR_0;
}
