
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int read_format; } ;
struct perf_evsel {TYPE_1__ attr; } ;
struct perf_evlist {int dummy; } ;
typedef int read_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ,int *) ;
 int FUNC_1 (struct perf_evlist*,struct perf_evsel*,int,int,int ) ;
 int FUNC_2 (struct perf_evlist*) ;
 int FUNC_3 (int,int **,int) ;

int FUNC_4(struct perf_evlist *VAR_7,
      struct perf_evsel *VAR_8,
      int VAR_9, int VAR_10, int VAR_11)
{
 u64 VAR_12[4] = { 0, };
 int VAR_13 = 1;
 u64 VAR_14;
 int VAR_15;

 VAR_15 = FUNC_0(VAR_11, VAR_1, &VAR_14);
 if (!VAR_15)
  goto add;

 if (VAR_6 != VAR_0)
  return -1;







 if (FUNC_2(VAR_7) & VAR_2)
  return -1;

 if (!(VAR_8->attr.read_format & VAR_3) ||
     FUNC_3(VAR_11, &VAR_12, sizeof(VAR_12)) == -1)
  return -1;

 if (VAR_8->attr.read_format & VAR_4)
  ++VAR_13;
 if (VAR_8->attr.read_format & VAR_5)
  ++VAR_13;

 VAR_14 = VAR_12[VAR_13];

add:
 FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_14);
 return 0;
}
