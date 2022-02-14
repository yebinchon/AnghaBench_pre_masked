
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pernet_operations {int* id; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*,struct pernet_operations*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct list_head *VAR_4,
          struct pernet_operations *VAR_5)
{
 int VAR_6;

 if (VAR_5->id) {
  VAR_6 = FUNC_1(&VAR_3, VAR_1,
    VAR_0);
  if (VAR_6 < 0)
   return VAR_6;
  *VAR_5->id = VAR_6;
  VAR_2 = FUNC_3(VAR_2, *VAR_5->id + 1);
 }
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_4();
  if (VAR_5->id)
   FUNC_2(&VAR_3, *VAR_5->id);
 }

 return VAR_6;
}
