
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct map {scalar_t__ dso; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,char const*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct map*,int ,int *) ;

int FUNC_3(struct map *VAR_1, u64 VAR_2, const char *VAR_3,
    FILE *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_1 && VAR_1->dso) {
  char *VAR_6 = FUNC_2(VAR_1, VAR_2, ((void*)0));
  if (VAR_6 != VAR_0)
   VAR_5 = FUNC_0(VAR_4, "%s%s", VAR_3, VAR_6);
  FUNC_1(VAR_6);
 }
 return VAR_5;
}
