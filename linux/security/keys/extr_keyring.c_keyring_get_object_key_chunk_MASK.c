
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int index_key; } ;


 unsigned long FUNC_0 (int *,int) ;
 struct key* FUNC_1 (void const*) ;

__attribute__((used)) static unsigned long FUNC_2(const void *VAR_0, int VAR_1)
{
 const struct key *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_2->index_key, VAR_1);
}
