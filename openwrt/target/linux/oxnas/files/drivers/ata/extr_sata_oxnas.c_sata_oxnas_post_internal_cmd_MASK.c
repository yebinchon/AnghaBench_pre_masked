
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {int flags; TYPE_1__* ap; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_1)
{
 FUNC_0("ENTER\n");

 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1->ap->host);
}
