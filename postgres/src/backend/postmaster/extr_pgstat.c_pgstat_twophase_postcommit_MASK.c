
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_6__ {scalar_t__ tuples_deleted; scalar_t__ tuples_updated; scalar_t__ tuples_inserted; scalar_t__ t_truncated; int t_shared; int t_id; } ;
typedef TYPE_2__ TwoPhasePgStatRecord ;
typedef int TransactionId ;
struct TYPE_5__ {int t_changed_tuples; scalar_t__ t_delta_dead_tuples; scalar_t__ t_delta_live_tuples; scalar_t__ t_truncated; int t_tuples_deleted; int t_tuples_updated; int t_tuples_inserted; } ;
struct TYPE_7__ {TYPE_1__ t_counts; } ;
typedef TYPE_3__ PgStat_TableStatus ;


 TYPE_3__* FUNC_0 (int ,int ) ;

void
FUNC_1(TransactionId VAR_0, uint16 VAR_1,
         void *VAR_2, uint32 VAR_3)
{
 TwoPhasePgStatRecord *VAR_4 = (TwoPhasePgStatRecord *) VAR_2;
 PgStat_TableStatus *VAR_5;


 VAR_5 = FUNC_0(VAR_4->t_id, VAR_4->t_shared);


 VAR_5->t_counts.t_tuples_inserted += VAR_4->tuples_inserted;
 VAR_5->t_counts.t_tuples_updated += VAR_4->tuples_updated;
 VAR_5->t_counts.t_tuples_deleted += VAR_4->tuples_deleted;
 VAR_5->t_counts.t_truncated = VAR_4->t_truncated;
 if (VAR_4->t_truncated)
 {

  VAR_5->t_counts.t_delta_live_tuples = 0;
  VAR_5->t_counts.t_delta_dead_tuples = 0;
 }
 VAR_5->t_counts.t_delta_live_tuples +=
  VAR_4->tuples_inserted - VAR_4->tuples_deleted;
 VAR_5->t_counts.t_delta_dead_tuples +=
  VAR_4->tuples_updated + VAR_4->tuples_deleted;
 VAR_5->t_counts.t_changed_tuples +=
  VAR_4->tuples_inserted + VAR_4->tuples_updated +
  VAR_4->tuples_deleted;
}
