
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter_node {scalar_t__ r; } ;


 int FUNC_0 (struct strfilter_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct strfilter_node *VAR_0, char *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_0->r ? 2 : 0;

 if (VAR_1 && VAR_3)
  *VAR_1++ = '(';
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;
 if (VAR_1 && VAR_3)
  *(VAR_1 + VAR_2) = ')';
 return VAR_2 + VAR_3;
}
