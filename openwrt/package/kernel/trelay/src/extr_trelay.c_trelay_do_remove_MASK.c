
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trelay {int dev2; int dev1; int debugfs; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct trelay*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct trelay*,char*) ;

__attribute__((used)) static int FUNC_6(struct trelay *VAR_1)
{
 FUNC_3(&VAR_1->list);



 FUNC_0(VAR_1->debugfs);

 FUNC_1(VAR_1->dev1);
 FUNC_1(VAR_1->dev2);

 FUNC_4(VAR_1->dev1);
 FUNC_4(VAR_1->dev2);

 FUNC_5(VAR_0, VAR_1, "stopped");

 FUNC_2(VAR_1);

 return 0;
}
