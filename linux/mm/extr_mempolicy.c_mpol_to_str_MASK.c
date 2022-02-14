
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; int preferred_node; } ;
struct mempolicy {int flags; unsigned short mode; TYPE_1__ v; } ;
typedef int nodemask_t ;




 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;

 unsigned short VAR_4 ;
 unsigned short VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int) ;
 struct mempolicy VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 char** VAR_8 ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (char*,int,char*,...) ;

void FUNC_6(char *VAR_9, int VAR_10, struct mempolicy *VAR_11)
{
 char *VAR_12 = VAR_9;
 nodemask_t VAR_13 = VAR_6;
 unsigned short VAR_14 = 130;
 unsigned short VAR_15 = 0;

 if (VAR_11 && VAR_11 != &VAR_7 && !(VAR_11->flags & VAR_1)) {
  VAR_14 = VAR_11->mode;
  VAR_15 = VAR_11->flags;
 }

 switch (VAR_14) {
 case 130:
  break;
 case 128:
  if (VAR_15 & VAR_0)
   VAR_14 = VAR_4;
  else
   FUNC_1(VAR_11->v.preferred_node, VAR_13);
  break;
 case 131:
 case 129:
  VAR_13 = VAR_11->v.nodes;
  break;
 default:
  FUNC_0(1);
  FUNC_5(VAR_12, VAR_10, "unknown");
  return;
 }

 VAR_12 += FUNC_5(VAR_12, VAR_10, "%s", VAR_8[VAR_14]);

 if (VAR_15 & VAR_5) {
  VAR_12 += FUNC_5(VAR_12, VAR_9 + VAR_10 - VAR_12, "=");




  if (VAR_15 & VAR_3)
   VAR_12 += FUNC_5(VAR_12, VAR_9 + VAR_10 - VAR_12, "static");
  else if (VAR_15 & VAR_2)
   VAR_12 += FUNC_5(VAR_12, VAR_9 + VAR_10 - VAR_12, "relative");
 }

 if (!FUNC_3(VAR_13))
  VAR_12 += FUNC_4(VAR_12, VAR_9 + VAR_10 - VAR_12, ":%*pbl",
          FUNC_2(&VAR_13));
}
