
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sample_read_value {int value; int id; } ;
struct TYPE_3__ {int read_format; } ;
struct TYPE_4__ {scalar_t__ nr_members; TYPE_1__ attr; } ;
struct evsel {int evlist; TYPE_2__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct evsel* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct evsel*,int,int,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct evsel *VAR_3,
          int VAR_4, int VAR_5, u64 *VAR_6)
{
 u64 VAR_7 = VAR_3->core.attr.read_format;
 struct sample_read_value *VAR_8;
 u64 VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12;

 VAR_9 = *VAR_6++;

 if (VAR_9 != (u64) VAR_3->core.nr_members)
  return -VAR_0;

 if (VAR_7 & VAR_1)
  VAR_10 = *VAR_6++;

 if (VAR_7 & VAR_2)
  VAR_11 = *VAR_6++;

 VAR_8 = (struct sample_read_value *) VAR_6;

 FUNC_1(VAR_3, VAR_4, VAR_5,
         VAR_8[0].value, VAR_10, VAR_11);

 for (VAR_12 = 1; VAR_12 < VAR_9; VAR_12++) {
  struct evsel *VAR_13;

  VAR_13 = FUNC_0(VAR_3->evlist, VAR_8[VAR_12].id);
  if (!VAR_13)
   return -VAR_0;

  FUNC_1(VAR_13, VAR_4, VAR_5,
          VAR_8[VAR_12].value, VAR_10, VAR_11);
 }

 return 0;
}
