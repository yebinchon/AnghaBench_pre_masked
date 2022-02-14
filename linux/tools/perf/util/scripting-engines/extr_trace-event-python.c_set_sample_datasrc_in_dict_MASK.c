
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample {int data_src; } ;
struct TYPE_2__ {int val; } ;
struct mem_info {TYPE_1__ data_src; } ;
typedef int PyObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,struct mem_info*) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_4(PyObject *VAR_0,
           struct perf_sample *VAR_1)
{
 struct mem_info VAR_2 = { .data_src.val = VAR_1->data_src };
 char VAR_3[100];

 FUNC_3(VAR_0, "datasrc",
   FUNC_0(VAR_1->data_src));

 FUNC_2(VAR_3, 100, &VAR_2);

 FUNC_3(VAR_0, "datasrc_decode",
   FUNC_1(VAR_3));
}
