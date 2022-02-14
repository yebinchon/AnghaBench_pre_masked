
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device_node*) ;
 unsigned int FUNC_2 (struct device_node*,char*,struct device_node**,struct device_node**) ;

int FUNC_3(struct device *VAR_6,
        struct device_node *VAR_7,
        struct device_node *VAR_8,
        char *VAR_9,
        unsigned int *VAR_10)
{
 struct device_node *VAR_11 = ((void*)0);
 struct device_node *VAR_12 = ((void*)0);
 unsigned int VAR_13;

 VAR_13 = FUNC_2(VAR_7, VAR_9,
      &VAR_11, &VAR_12);
 VAR_13 &= ~VAR_5;

 if (!VAR_11 && !VAR_12) {





  FUNC_0(VAR_6, "Revert to legacy daifmt parsing\n");

  VAR_13 = FUNC_2(VAR_8, ((void*)0), ((void*)0), ((void*)0)) |
   (VAR_13 & ~VAR_4);
 } else {
  if (VAR_8 == VAR_11)
   VAR_13 |= (VAR_8 == VAR_12) ?
    VAR_0 : VAR_1;
  else
   VAR_13 |= (VAR_8 == VAR_12) ?
    VAR_2 : VAR_3;
 }

 FUNC_1(VAR_11);
 FUNC_1(VAR_12);

 *VAR_10 = VAR_13;

 return 0;
}
