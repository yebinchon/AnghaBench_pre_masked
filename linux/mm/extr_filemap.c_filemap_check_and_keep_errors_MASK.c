
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

__attribute__((used)) static int FUNC_1(struct address_space *VAR_4)
{

 if (FUNC_0(VAR_0, &VAR_4->flags))
  return -VAR_2;
 if (FUNC_0(VAR_1, &VAR_4->flags))
  return -VAR_3;
 return 0;
}
