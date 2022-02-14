
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct machine {int dsos; } ;
struct dso {int dummy; } ;
typedef enum dso_type { ____Placeholder_dso_type } dso_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 struct dso* FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct dso*,struct machine*) ;
 int FUNC_2 (struct machine*,struct thread*) ;

__attribute__((used)) static struct dso *FUNC_3(struct machine *VAR_3,
          struct thread *VAR_4)
{
 struct dso *VAR_5 = ((void*)0);
 enum dso_type VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 switch (VAR_6) {
 case 131:
  VAR_5 = FUNC_0(&VAR_3->dsos, VAR_1, 1);
  if (!VAR_5) {
   VAR_5 = FUNC_0(&VAR_3->dsos, VAR_0,
        1);
   if (VAR_5 && VAR_6 != FUNC_1(VAR_5, VAR_3))
    VAR_5 = ((void*)0);
  }
  break;
 case 128:
  VAR_5 = FUNC_0(&VAR_3->dsos, VAR_2, 1);
  break;
 case 130:
 case 129:
 default:
  VAR_5 = FUNC_0(&VAR_3->dsos, VAR_0, 1);
  break;
 }

 return VAR_5;
}
