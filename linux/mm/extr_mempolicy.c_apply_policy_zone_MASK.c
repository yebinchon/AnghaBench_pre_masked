
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; } ;
struct mempolicy {TYPE_1__ v; } ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mempolicy *VAR_4, enum zone_type VAR_5)
{
 enum zone_type VAR_6 = VAR_3;

 FUNC_0(VAR_6 == VAR_1);
 if (!FUNC_1(VAR_4->v.nodes, VAR_2[VAR_0]))
  VAR_6 = VAR_1;

 return VAR_5 >= VAR_6;
}
