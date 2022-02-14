
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ calls; int usage; } ;
struct TYPE_9__ {scalar_t__ query_len; int key; TYPE_1__ counters; } ;
typedef TYPE_2__ pgssEntry ;
struct TYPE_10__ {int mean_query_len; int cur_median_usage; } ;
typedef int Size ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_2__* FUNC_5 (int *) ;
 TYPE_2__** FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__**) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_2__**,int,int,int ) ;

__attribute__((used)) static void
FUNC_9(void)
{
 HASH_SEQ_STATUS VAR_8;
 pgssEntry **VAR_9;
 pgssEntry *VAR_10;
 int VAR_11;
 int VAR_12;
 Size VAR_13;
 int VAR_14;
 VAR_9 = FUNC_6(FUNC_2(VAR_7) * sizeof(pgssEntry *));

 VAR_12 = 0;
 VAR_13 = 0;
 VAR_14 = 0;

 FUNC_4(&VAR_8, VAR_7);
 while ((VAR_10 = FUNC_5(&VAR_8)) != ((void*)0))
 {
  VAR_9[VAR_12++] = VAR_10;

  if (VAR_10->counters.calls == 0)
   VAR_10->counters.usage *= VAR_2;
  else
   VAR_10->counters.usage *= VAR_4;

  if (VAR_10->query_len >= 0)
  {
   VAR_13 += VAR_10->query_len + 1;
   VAR_14++;
  }
 }


 FUNC_8(VAR_9, VAR_12, sizeof(pgssEntry *), VAR_5);


 if (VAR_12 > 0)
  VAR_6->cur_median_usage = VAR_9[VAR_12 / 2]->counters.usage;

 if (VAR_14 > 0)
  VAR_6->mean_query_len = VAR_13 / VAR_14;
 else
  VAR_6->mean_query_len = VAR_0;


 VAR_11 = FUNC_0(10, VAR_12 * VAR_3 / 100);
 VAR_11 = FUNC_1(VAR_11, VAR_12);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
 {
  FUNC_3(VAR_7, &VAR_9[VAR_12]->key, VAR_1, ((void*)0));
 }

 FUNC_7(VAR_9);
}
