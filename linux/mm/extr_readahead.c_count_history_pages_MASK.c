
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct address_space*,int,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static pgoff_t FUNC_3(struct address_space *VAR_0,
       pgoff_t VAR_1, unsigned long VAR_2)
{
 pgoff_t VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_0, VAR_1 - 1, VAR_2);
 FUNC_2();

 return VAR_1 - 1 - VAR_3;
}
