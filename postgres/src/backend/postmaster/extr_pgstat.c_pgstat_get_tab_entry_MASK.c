
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tables; } ;
struct TYPE_5__ {scalar_t__ autovac_analyze_count; scalar_t__ autovac_analyze_timestamp; scalar_t__ analyze_count; scalar_t__ analyze_timestamp; scalar_t__ autovac_vacuum_count; scalar_t__ autovac_vacuum_timestamp; scalar_t__ vacuum_count; scalar_t__ vacuum_timestamp; scalar_t__ blocks_hit; scalar_t__ blocks_fetched; scalar_t__ changes_since_analyze; scalar_t__ n_dead_tuples; scalar_t__ n_live_tuples; scalar_t__ tuples_hot_updated; scalar_t__ tuples_deleted; scalar_t__ tuples_updated; scalar_t__ tuples_inserted; scalar_t__ tuples_fetched; scalar_t__ tuples_returned; scalar_t__ numscans; } ;
typedef TYPE_1__ PgStat_StatTabEntry ;
typedef TYPE_2__ PgStat_StatDBEntry ;
typedef int Oid ;
typedef int HASHACTION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int*) ;

__attribute__((used)) static PgStat_StatTabEntry *
FUNC_1(PgStat_StatDBEntry *VAR_2, Oid VAR_3, bool VAR_4)
{
 PgStat_StatTabEntry *VAR_5;
 bool VAR_6;
 HASHACTION VAR_7 = (VAR_4 ? VAR_0 : VAR_1);


 VAR_5 = (PgStat_StatTabEntry *) FUNC_0(VAR_2->tables,
             &VAR_3,
             VAR_7, &VAR_6);

 if (!VAR_4 && !VAR_6)
  return ((void*)0);


 if (!VAR_6)
 {
  VAR_5->numscans = 0;
  VAR_5->tuples_returned = 0;
  VAR_5->tuples_fetched = 0;
  VAR_5->tuples_inserted = 0;
  VAR_5->tuples_updated = 0;
  VAR_5->tuples_deleted = 0;
  VAR_5->tuples_hot_updated = 0;
  VAR_5->n_live_tuples = 0;
  VAR_5->n_dead_tuples = 0;
  VAR_5->changes_since_analyze = 0;
  VAR_5->blocks_fetched = 0;
  VAR_5->blocks_hit = 0;
  VAR_5->vacuum_timestamp = 0;
  VAR_5->vacuum_count = 0;
  VAR_5->autovac_vacuum_timestamp = 0;
  VAR_5->autovac_vacuum_count = 0;
  VAR_5->analyze_timestamp = 0;
  VAR_5->analyze_count = 0;
  VAR_5->autovac_analyze_timestamp = 0;
  VAR_5->autovac_analyze_count = 0;
 }

 return VAR_5;
}
