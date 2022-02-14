
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcTreeNode {size_t prefixlen; int * name; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct chmcTreeNode * const *VAR_2 = VAR_0;
 const struct chmcTreeNode * const *VAR_3 = VAR_1;
 const struct chmcTreeNode *VAR_4 = *VAR_2, *VAR_5 = *VAR_3;

 return FUNC_0( &VAR_4->name[VAR_4->prefixlen], &VAR_5->name[VAR_5->prefixlen] );
}
