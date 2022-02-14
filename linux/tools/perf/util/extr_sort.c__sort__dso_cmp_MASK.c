
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {struct dso* dso; } ;
struct dso {char* long_name; char* short_name; } ;
typedef int int64_t ;


 int FUNC_0 (struct dso*,struct dso*) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int64_t FUNC_2(struct map *VAR_1, struct map *VAR_2)
{
 struct dso *VAR_3 = VAR_1 ? VAR_1->dso : ((void*)0);
 struct dso *VAR_4 = VAR_2 ? VAR_2->dso : ((void*)0);
 const char *VAR_5, *VAR_6;

 if (!VAR_3 || !VAR_4)
  return FUNC_0(VAR_4, VAR_3);

 if (VAR_0 > 0) {
  VAR_5 = VAR_3->long_name;
  VAR_6 = VAR_4->long_name;
 } else {
  VAR_5 = VAR_3->short_name;
  VAR_6 = VAR_4->short_name;
 }

 return FUNC_1(VAR_5, VAR_6);
}
