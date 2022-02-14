
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int nr; int * values; } ;
struct TYPE_8__ {int one; TYPE_3__ group; int time_running; int time_enabled; } ;
struct perf_sample {TYPE_4__ read; } ;
struct TYPE_5__ {int read_format; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned int,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_6(PyObject *VAR_3,
      struct perf_sample *VAR_4,
      struct evsel *VAR_5)
{
 u64 VAR_6 = VAR_5->core.attr.read_format;
 PyObject *VAR_7;
 unsigned int VAR_8;

 if (VAR_6 & VAR_1) {
  FUNC_5(VAR_3, "time_enabled",
   FUNC_2(VAR_4->read.time_enabled));
 }

 if (VAR_6 & VAR_2) {
  FUNC_5(VAR_3, "time_running",
   FUNC_2(VAR_4->read.time_running));
 }

 if (VAR_6 & VAR_0)
  VAR_7 = FUNC_0(VAR_4->read.group.nr);
 else
  VAR_7 = FUNC_0(1);

 if (!VAR_7)
  FUNC_3("couldn't create Python list");

 if (VAR_6 & VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_4->read.group.nr; VAR_8++) {
   PyObject *VAR_9 = FUNC_4(&VAR_4->read.group.values[VAR_8]);
   FUNC_1(VAR_7, VAR_8, VAR_9);
  }
 } else {
  PyObject *VAR_10 = FUNC_4(&VAR_4->read.one);
  FUNC_1(VAR_7, 0, VAR_10);
 }
 FUNC_5(VAR_3, "values", VAR_7);
}
