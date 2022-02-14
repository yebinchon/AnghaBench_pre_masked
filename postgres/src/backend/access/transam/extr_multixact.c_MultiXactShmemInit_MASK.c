
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ perBackendXactIds; } ;
struct TYPE_7__ {int PagePrecedes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 TYPE_2__* FUNC_2 (char*,int ,int*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ,int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(void)
{
 bool VAR_17;

 FUNC_4(VAR_0, "Shared Memory Init for MultiXact");

 VAR_9->PagePrecedes = VAR_10;
 VAR_6->PagePrecedes = VAR_7;

 FUNC_3(VAR_9,
      "multixact_offset", VAR_13, 0,
      VAR_8, "pg_multixact/offsets",
      VAR_3);
 FUNC_3(VAR_6,
      "multixact_member", VAR_12, 0,
      VAR_5, "pg_multixact/members",
      VAR_2);


 VAR_11 = FUNC_2("Shared MultiXact State",
          VAR_16,
          &VAR_17);
 if (!VAR_1)
 {
  FUNC_0(!VAR_17);


  FUNC_1(VAR_11, 0, VAR_16);
 }
 else
  FUNC_0(VAR_17);





 VAR_14 = VAR_11->perBackendXactIds;
 VAR_15 = VAR_14 + VAR_4;
}
