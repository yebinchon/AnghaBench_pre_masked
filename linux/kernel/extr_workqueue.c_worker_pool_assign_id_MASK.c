
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct worker_pool*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct worker_pool *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_3);

 VAR_5 = FUNC_0(&VAR_2, VAR_4, 0, VAR_1,
   VAR_0);
 if (VAR_5 >= 0) {
  VAR_4->id = VAR_5;
  return 0;
 }
 return VAR_5;
}
