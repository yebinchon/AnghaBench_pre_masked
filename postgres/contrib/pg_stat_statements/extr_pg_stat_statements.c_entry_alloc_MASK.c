
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pgssHashKey ;
struct TYPE_7__ {int usage; } ;
struct TYPE_5__ {int query_len; int encoding; int query_offset; int mutex; TYPE_3__ counters; } ;
typedef TYPE_1__ pgssEntry ;
struct TYPE_6__ {int cur_median_usage; } ;
typedef int Size ;
typedef int Counters ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static pgssEntry *
FUNC_6(pgssHashKey *VAR_5, Size VAR_6, int VAR_7, int VAR_8,
   bool VAR_9)
{
 pgssEntry *VAR_10;
 bool VAR_11;


 while (FUNC_3(VAR_3) >= VAR_4)
  FUNC_2();


 VAR_10 = (pgssEntry *) FUNC_4(VAR_3, VAR_5, VAR_0, &VAR_11);

 if (!VAR_11)
 {



  FUNC_5(&VAR_10->counters, 0, sizeof(Counters));

  VAR_10->counters.usage = VAR_9 ? VAR_2->cur_median_usage : VAR_1;

  FUNC_1(&VAR_10->mutex);

  FUNC_0(VAR_7 >= 0);
  VAR_10->query_offset = VAR_6;
  VAR_10->query_len = VAR_7;
  VAR_10->encoding = VAR_8;
 }

 return VAR_10;
}
