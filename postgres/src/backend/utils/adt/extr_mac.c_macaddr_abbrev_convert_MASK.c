
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int uint32 ;
struct TYPE_4__ {int input_count; int abbr_card; scalar_t__ estimating; } ;
typedef TYPE_1__ macaddr_sortsupport_state ;
typedef int macaddr ;
struct TYPE_5__ {TYPE_1__* ssup_extra; } ;
typedef TYPE_2__* SortSupport ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,int *,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;

__attribute__((used)) static Datum
FUNC_7(Datum VAR_1, SortSupport VAR_2)
{
 macaddr_sortsupport_state *VAR_3 = VAR_2->ssup_extra;
 macaddr *VAR_4 = FUNC_1(VAR_1);
 Datum VAR_5;
 FUNC_5(&VAR_5, VAR_4, VAR_0);

 VAR_3->input_count += 1;







 if (VAR_3->estimating)
 {
  uint32 VAR_6;




  VAR_6 = (uint32) VAR_5;


  FUNC_3(&VAR_3->abbr_card, FUNC_2(FUNC_4(VAR_6)));
 }
 VAR_5 = FUNC_0(VAR_5);

 return VAR_5;
}
