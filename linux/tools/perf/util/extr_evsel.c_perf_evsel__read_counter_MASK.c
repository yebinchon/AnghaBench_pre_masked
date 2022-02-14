
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int read_format; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int VAR_0 ;
 int FUNC_0 (struct evsel*,int,int) ;
 int FUNC_1 (struct evsel*,int,int) ;

int FUNC_2(struct evsel *VAR_1, int VAR_2, int VAR_3)
{
 u64 VAR_4 = VAR_1->core.attr.read_format;

 if (VAR_4 & VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3);
}
