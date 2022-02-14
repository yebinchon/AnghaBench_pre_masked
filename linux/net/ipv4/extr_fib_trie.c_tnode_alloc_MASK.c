
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnode {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (unsigned long) ;
 int VAR_2 ;
 struct tnode* FUNC_1 (size_t,int ) ;
 struct tnode* FUNC_2 (size_t) ;

__attribute__((used)) static struct tnode *FUNC_3(int VAR_3)
{
 size_t VAR_4;


 if (VAR_3 > VAR_2)
  return ((void*)0);


 VAR_4 = FUNC_0(1ul << VAR_3);

 if (VAR_4 <= VAR_1)
  return FUNC_1(VAR_4, VAR_0);
 else
  return FUNC_2(VAR_4);
}
