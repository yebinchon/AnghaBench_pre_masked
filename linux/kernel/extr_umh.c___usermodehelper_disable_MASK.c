
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum umh_disable_depth { ____Placeholder_umh_disable_depth } umh_disable_depth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 long FUNC_4 (int ,int,int ) ;

int FUNC_5(enum umh_disable_depth VAR_8)
{
 long VAR_9;

 if (!VAR_8)
  return -VAR_1;

 FUNC_2(&VAR_6);
 VAR_7 = VAR_8;
 FUNC_3(&VAR_6);







 VAR_9 = FUNC_4(VAR_5,
     FUNC_1(&VAR_4) == 0,
     VAR_2);
 if (VAR_9)
  return 0;

 FUNC_0(VAR_3);
 return -VAR_0;
}
