
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct device_node*) ;
 unsigned int FUNC_1 (struct device_node*,int ,struct device_node**,struct device_node**) ;

__attribute__((used)) static unsigned int FUNC_2(struct device_node *VAR_6,
       struct device_node *VAR_7)
{
 struct device_node *VAR_8 = ((void*)0);
 struct device_node *VAR_9 = ((void*)0);
 unsigned int VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_0,
      &VAR_8, &VAR_9);
 VAR_10 &= ~VAR_5;


 if (!VAR_8 || VAR_8 == VAR_7) {
  VAR_10 |= (!VAR_9 || VAR_9 == VAR_7) ?
   VAR_4 : VAR_3;
 } else {
  VAR_10 |= (!VAR_9 || VAR_9 == VAR_7) ?
   VAR_2 : VAR_1;
 }

 FUNC_0(VAR_8);
 FUNC_0(VAR_9);

 return VAR_10;
}
