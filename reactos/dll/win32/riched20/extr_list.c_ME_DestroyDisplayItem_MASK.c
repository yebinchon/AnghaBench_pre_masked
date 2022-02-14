
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int entry; } ;
struct TYPE_8__ {int style; TYPE_3__* clusters; TYPE_3__* glyphs; TYPE_6__* reobj; } ;
struct TYPE_7__ {TYPE_2__ run; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ member; } ;
typedef TYPE_3__ ME_DisplayItem ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(ME_DisplayItem *VAR_1)
{
  if (0)
    FUNC_3("type=%s\n", FUNC_1(VAR_1->type));
  if (VAR_1->type==VAR_0)
  {
    if (VAR_1->member.run.reobj)
    {
      FUNC_5(&VAR_1->member.run.reobj->entry);
      FUNC_0(VAR_1->member.run.reobj);
    }
    FUNC_4( VAR_1->member.run.glyphs );
    FUNC_4( VAR_1->member.run.clusters );
    FUNC_2(VAR_1->member.run.style);
  }
  FUNC_4(VAR_1);
}
