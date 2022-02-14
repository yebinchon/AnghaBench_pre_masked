
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int float8 ;
struct TYPE_11__ {scalar_t__ rd_options; } ;
struct TYPE_10__ {scalar_t__ btm_version; int btm_last_cleanup_num_heap_tuples; int btm_oldest_btpo_xact; } ;
struct TYPE_9__ {int num_heap_tuples; TYPE_5__* index; } ;
struct TYPE_8__ {scalar_t__ vacuum_cleanup_index_scale_factor; } ;
typedef TYPE_1__ StdRdOptions ;
typedef int Page ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef int Buffer ;
typedef TYPE_3__ BTMetaPageData ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_6(IndexVacuumInfo *VAR_5)
{
 Buffer VAR_6;
 Page VAR_7;
 BTMetaPageData *VAR_8;
 bool VAR_9 = 0;

 VAR_6 = FUNC_4(VAR_5->index, VAR_0, VAR_2);
 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_0(VAR_7);

 if (VAR_8->btm_version < VAR_1)
 {




  VAR_9 = 1;
 }
 else if (FUNC_2(VAR_8->btm_oldest_btpo_xact) &&
    FUNC_3(VAR_8->btm_oldest_btpo_xact,
           VAR_3))
 {




  VAR_9 = 1;
 }
 else
 {
  StdRdOptions *VAR_10;
  float8 VAR_11;
  float8 VAR_12;
  VAR_10 = (StdRdOptions *) VAR_5->index->rd_options;
  VAR_11 = (VAR_10 &&
        VAR_10->vacuum_cleanup_index_scale_factor >= 0)
   ? VAR_10->vacuum_cleanup_index_scale_factor
   : VAR_4;
  VAR_12 = VAR_8->btm_last_cleanup_num_heap_tuples;

  if (VAR_11 <= 0 ||
   VAR_12 <= 0 ||
   (VAR_5->num_heap_tuples - VAR_12) /
   VAR_12 >= VAR_11)
   VAR_9 = 1;
 }

 FUNC_5(VAR_5->index, VAR_6);
 return VAR_9;
}
