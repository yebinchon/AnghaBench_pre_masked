
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,struct resource*,int ,struct resource*) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,struct resource**) ;
 struct resource** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct resource**) ;
 struct resource* FUNC_4 (struct resource*,struct resource*) ;

int FUNC_5(struct device *VAR_4, struct resource *VAR_5,
     struct resource *VAR_6)
{
 struct resource *VAR_7, **VAR_8;

 VAR_8 = FUNC_2(VAR_3, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 *VAR_8 = VAR_6;

 VAR_7 = FUNC_4(VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4, "resource collision: %pR conflicts with %s %pR\n",
   VAR_6, VAR_7->name, VAR_7);
  FUNC_3(VAR_8);
  return -VAR_0;
 }

 FUNC_1(VAR_4, VAR_8);
 return 0;
}
