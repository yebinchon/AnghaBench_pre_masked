
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int input_count; int abbr_card; scalar_t__ estimating; } ;
typedef TYPE_1__ uuid_sortsupport_state ;
typedef int uint64 ;
typedef int uint32 ;
struct TYPE_7__ {int data; } ;
typedef TYPE_2__ pg_uuid_t ;
struct TYPE_8__ {TYPE_1__* ssup_extra; } ;
typedef TYPE_3__* SortSupport ;
typedef scalar_t__ Datum ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;

__attribute__((used)) static Datum
FUNC_6(Datum VAR_0, SortSupport VAR_1)
{
 uuid_sortsupport_state *VAR_2 = VAR_1->ssup_extra;
 pg_uuid_t *VAR_3 = FUNC_2(VAR_0);
 Datum VAR_4;

 FUNC_5(&VAR_4, VAR_3->data, sizeof(Datum));
 VAR_2->input_count += 1;

 if (VAR_2->estimating)
 {
  uint32 VAR_5;




  VAR_5 = (uint32) VAR_4;


  FUNC_3(&VAR_2->abbr_card, FUNC_1(FUNC_4(VAR_5)));
 }
 VAR_4 = FUNC_0(VAR_4);

 return VAR_4;
}
