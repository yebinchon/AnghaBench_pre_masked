
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ListCell ;
typedef int List ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(const ListCell *VAR_0, const ListCell *VAR_1)
{
 int VAR_2 = FUNC_1((const List *) FUNC_0(VAR_0));
 int VAR_3 = FUNC_1((const List *) FUNC_0(VAR_1));

 return (VAR_2 > VAR_3) ? 1 : (VAR_2 == VAR_3) ? 0 : -1;
}
