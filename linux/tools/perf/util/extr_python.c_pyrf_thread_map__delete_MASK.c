
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pyrf_thread_map {int threads; } ;
struct TYPE_2__ {int (* tp_free ) (int *) ;} ;
typedef int PyObject ;


 TYPE_1__* FUNC_0 (struct pyrf_thread_map*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pyrf_thread_map *VAR_0)
{
 FUNC_1(VAR_0->threads);
 FUNC_0(VAR_0)->tp_free((PyObject*)VAR_0);
}
