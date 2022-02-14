
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__**) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_4,
   &VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3 = VAR_6;
 VAR_6 = FUNC_0(VAR_2, VAR_0, ((void*)0));
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (VAR_6 < 0)
  FUNC_1(VAR_2, VAR_0);






 VAR_5 = VAR_2->bd_dev;
 return VAR_6;
}
