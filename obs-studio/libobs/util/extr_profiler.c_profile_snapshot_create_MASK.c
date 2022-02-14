
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {size_t num; int * array; } ;
struct TYPE_9__ {TYPE_5__ roots; } ;
typedef TYPE_2__ profiler_snapshot_t ;
struct TYPE_10__ {size_t num; TYPE_1__* array; } ;
struct TYPE_8__ {int * mutex; int entry; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__) ;
 int FUNC_3 (TYPE_5__,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

profiler_snapshot_t *FUNC_7(void)
{
 profiler_snapshot_t *VAR_2 = FUNC_1(sizeof(profiler_snapshot_t));

 FUNC_4(&VAR_1);
 FUNC_3(VAR_2->roots, VAR_0.num);
 for (size_t VAR_3 = 0; VAR_3 < VAR_0.num; VAR_3++) {
  FUNC_4(VAR_0.array[VAR_3].mutex);
  FUNC_0(VAR_0.array[VAR_3].entry,
          FUNC_2(VAR_2->roots));
  FUNC_5(VAR_0.array[VAR_3].mutex);
 }
 FUNC_5(&VAR_1);

 for (size_t VAR_4 = 0; VAR_4 < VAR_2->roots.num; VAR_4++)
  FUNC_6(&VAR_2->roots.array[VAR_4]);

 return VAR_2;
}
