
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int local_blks_dirtied; } ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ BufferDesc ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_3 ;

void
FUNC_6(Buffer VAR_4)
{
 int VAR_5;
 BufferDesc *VAR_6;
 uint32 VAR_7;

 FUNC_0(FUNC_1(VAR_4));





 VAR_5 = -(VAR_4 + 1);

 FUNC_0(VAR_1[VAR_5] > 0);

 VAR_6 = FUNC_2(VAR_5);

 VAR_7 = FUNC_4(&VAR_6->state);

 if (!(VAR_7 & VAR_0))
  VAR_2.local_blks_dirtied++;

 VAR_7 |= VAR_0;

 FUNC_5(&VAR_6->state, VAR_7);
}
