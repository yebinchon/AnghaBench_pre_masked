
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotated_source {int source; } ;


 int FUNC_0 (int *) ;
 struct annotated_source* FUNC_1 (int) ;

__attribute__((used)) static struct annotated_source *FUNC_2(void)
{
 struct annotated_source *VAR_0 = FUNC_1(sizeof(*VAR_0));

 if (VAR_0 != ((void*)0))
  FUNC_0(&VAR_0->source);

 return VAR_0;
}
