
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int mg; } ;
struct map {struct dso* dso; } ;
struct machine {int dummy; } ;
struct dso {char* long_name; } ;
typedef enum dso_type { ____Placeholder_dso_type } dso_type ;


 int VAR_0 ;
 int FUNC_0 (struct dso*,struct machine*) ;
 struct map* FUNC_1 (int ) ;
 struct map* FUNC_2 (struct map*) ;

__attribute__((used)) static enum dso_type FUNC_3(struct machine *VAR_1,
           struct thread *VAR_2)
{
 enum dso_type VAR_3 = VAR_0;
 struct map *VAR_4 = FUNC_1(VAR_2->mg);

 for (; VAR_4 ; VAR_4 = FUNC_2(VAR_4)) {
  struct dso *VAR_5 = VAR_4->dso;
  if (!VAR_5 || VAR_5->long_name[0] != '/')
   continue;
  VAR_3 = FUNC_0(VAR_5, VAR_1);
  if (VAR_3 != VAR_0)
   break;
 }

 return VAR_3;
}
