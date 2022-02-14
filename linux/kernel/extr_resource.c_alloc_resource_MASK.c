
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {struct resource* sibling; } ;
typedef int gfp_t ;


 struct resource* VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int,int ) ;
 int FUNC_1 (struct resource*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct resource *FUNC_4(gfp_t VAR_2)
{
 struct resource *VAR_3 = ((void*)0);

 FUNC_2(&VAR_1);
 if (VAR_0) {
  VAR_3 = VAR_0;
  VAR_0 = VAR_3->sibling;
 }
 FUNC_3(&VAR_1);

 if (VAR_3)
  FUNC_1(VAR_3, 0, sizeof(struct resource));
 else
  VAR_3 = FUNC_0(sizeof(struct resource), VAR_2);

 return VAR_3;
}
