
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(struct address_space *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_1(VAR_1, &VAR_4->flags) &&
     FUNC_0(VAR_1, &VAR_4->flags))
  VAR_5 = -VAR_3;
 if (FUNC_1(VAR_0, &VAR_4->flags) &&
     FUNC_0(VAR_0, &VAR_4->flags))
  VAR_5 = -VAR_2;
 return VAR_5;
}
