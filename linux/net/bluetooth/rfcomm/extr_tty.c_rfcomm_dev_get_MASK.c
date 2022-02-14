
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dev {int port; } ;


 struct rfcomm_dev* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct rfcomm_dev *FUNC_4(int VAR_1)
{
 struct rfcomm_dev *VAR_2;

 FUNC_1(&VAR_0);

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 && !FUNC_3(&VAR_2->port))
  VAR_2 = ((void*)0);

 FUNC_2(&VAR_0);

 return VAR_2;
}
