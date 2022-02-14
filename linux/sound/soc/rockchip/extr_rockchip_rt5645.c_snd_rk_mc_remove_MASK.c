
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* codecs; TYPE_1__* cpus; } ;
struct TYPE_5__ {int * of_node; } ;
struct TYPE_4__ {int * of_node; } ;


 int FUNC_0 (int *) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_1)
{
 FUNC_0(VAR_0.cpus->of_node);
 VAR_0.cpus->of_node = ((void*)0);
 FUNC_0(VAR_0.codecs->of_node);
 VAR_0.codecs->of_node = ((void*)0);

 return 0;
}
