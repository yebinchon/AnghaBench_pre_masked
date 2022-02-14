
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int h_source; } ;
struct bnep_session {int flags; int role; int state; TYPE_2__* dev; TYPE_1__ eh; } ;
struct bnep_conninfo {int flags; int role; int state; int device; int dst; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct bnep_conninfo*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bnep_conninfo *VAR_2, struct bnep_session *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0);

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_1(VAR_2->dst, VAR_3->eh.h_source, VAR_1);
 FUNC_3(VAR_2->device, VAR_3->dev->name);
 VAR_2->flags = VAR_3->flags & VAR_4;
 VAR_2->state = VAR_3->state;
 VAR_2->role = VAR_3->role;
}
