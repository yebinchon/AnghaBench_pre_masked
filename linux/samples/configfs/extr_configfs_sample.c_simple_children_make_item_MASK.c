
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct simple_child {struct config_item item; scalar_t__ storeme; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct simple_child* FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct config_item *FUNC_3(struct config_group *VAR_3,
  const char *VAR_4)
{
 struct simple_child *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct simple_child), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->item, VAR_4,
       &VAR_2);

 VAR_5->storeme = 0;

 return &VAR_5->item;
}
