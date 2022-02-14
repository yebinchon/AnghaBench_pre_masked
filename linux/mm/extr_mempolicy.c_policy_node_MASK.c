
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preferred_node; } ;
struct mempolicy {scalar_t__ mode; int flags; TYPE_1__ v; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(gfp_t VAR_4, struct mempolicy *VAR_5,
        int VAR_6)
{
 if (VAR_5->mode == VAR_2 && !(VAR_5->flags & VAR_1))
  VAR_6 = VAR_5->v.preferred_node;
 else {





  FUNC_0(VAR_5->mode == VAR_0 && (VAR_4 & VAR_3));
 }

 return VAR_6;
}
