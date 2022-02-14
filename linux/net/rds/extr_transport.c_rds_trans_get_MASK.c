
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_transport {int t_type; int t_owner; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct rds_transport** VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

struct rds_transport *FUNC_3(int VAR_3)
{
 struct rds_transport *VAR_4 = ((void*)0);
 struct rds_transport *VAR_5;
 unsigned int VAR_6;

 FUNC_0(&VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_2[VAR_6];

  if (VAR_5 && VAR_5->t_type == VAR_3 &&
      (!VAR_5->t_owner || FUNC_1(VAR_5->t_owner))) {
   VAR_4 = VAR_5;
   break;
  }
 }
 FUNC_2(&VAR_1);

 return VAR_4;
}
