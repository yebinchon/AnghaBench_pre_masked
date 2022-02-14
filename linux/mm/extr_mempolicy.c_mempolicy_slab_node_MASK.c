
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zoneref {int zone; } ;
struct zonelist {int dummy; } ;
struct TYPE_4__ {unsigned int preferred_node; int nodes; } ;
struct mempolicy {int flags; int mode; TYPE_1__ v; } ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;
struct TYPE_6__ {struct zonelist* node_zonelists; } ;
struct TYPE_5__ {struct mempolicy* mempolicy; } ;


 int FUNC_0 () ;
 int VAR_0 ;

 int VAR_1 ;


 TYPE_3__* FUNC_1 (int) ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct zoneref* FUNC_2 (struct zonelist*,int,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 unsigned int FUNC_5 (struct mempolicy*) ;
 int FUNC_6 () ;
 unsigned int FUNC_7 (int ) ;

unsigned int FUNC_8(void)
{
 struct mempolicy *VAR_4;
 int VAR_5 = FUNC_6();

 if (FUNC_4())
  return VAR_5;

 VAR_4 = VAR_3->mempolicy;
 if (!VAR_4 || VAR_4->flags & VAR_1)
  return VAR_5;

 switch (VAR_4->mode) {
 case 128:



  return VAR_4->v.preferred_node;

 case 129:
  return FUNC_5(VAR_4);

 case 130: {
  struct zoneref *VAR_6;





  struct zonelist *VAR_7;
  enum zone_type VAR_8 = FUNC_3(VAR_0);
  VAR_7 = &FUNC_1(VAR_5)->node_zonelists[VAR_2];
  VAR_6 = FUNC_2(VAR_7, VAR_8,
       &VAR_4->v.nodes);
  return VAR_6->zone ? FUNC_7(VAR_6->zone) : VAR_5;
 }

 default:
  FUNC_0();
 }
}
