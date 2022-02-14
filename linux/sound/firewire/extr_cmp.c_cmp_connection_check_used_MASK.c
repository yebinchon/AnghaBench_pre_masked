
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int unit; } ;
struct cmp_connection {TYPE_1__ resources; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cmp_connection*) ;
 int FUNC_2 (int ,int ,int ,int*,int,int ) ;

int FUNC_3(struct cmp_connection *VAR_3, bool *VAR_4)
{
 __be32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(
   VAR_3->resources.unit, VAR_2,
   FUNC_1(VAR_3), &VAR_5, 4, 0);
 if (VAR_6 >= 0)
  *VAR_4 = !!(VAR_5 & FUNC_0(VAR_0 |
          VAR_1));

 return VAR_6;
}
