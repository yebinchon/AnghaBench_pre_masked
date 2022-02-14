
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int out; } ;
struct TYPE_8__ {scalar_t__ origin_id; int origin_lsn; } ;
typedef TYPE_1__ ReorderBufferTXN ;
typedef TYPE_2__ LogicalDecodingContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int,char**) ;

__attribute__((used)) static void
FUNC_5(LogicalDecodingContext *VAR_1, ReorderBufferTXN *VAR_2)
{
 bool VAR_3 = VAR_2->origin_id != VAR_0;

 FUNC_0(VAR_1, !VAR_3);
 FUNC_2(VAR_1->out, VAR_2);

 if (VAR_3)
 {
  char *VAR_4;


  FUNC_1(VAR_1, 0);
  FUNC_0(VAR_1, 1);
  if (FUNC_4(VAR_2->origin_id, 1, &VAR_4))
   FUNC_3(VAR_1->out, VAR_4, VAR_2->origin_lsn);
 }

 FUNC_1(VAR_1, 1);
}
