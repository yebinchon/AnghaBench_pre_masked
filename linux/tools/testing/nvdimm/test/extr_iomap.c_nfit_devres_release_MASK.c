
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct resource *VAR_3 = *((struct resource **) VAR_2);

 FUNC_0(!FUNC_1(((void*)0), &VAR_0, VAR_3->start,
   FUNC_2(VAR_3)));
}
