
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int read_format; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evsel*,int ) ;
 int FUNC_1 (struct evsel*,int ) ;

void FUNC_2(struct evsel *VAR_3,
          bool VAR_4)
{
 if (VAR_4) {
  FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_1);
 } else {
  FUNC_1(VAR_3, VAR_0);
 }
 VAR_3->core.attr.read_format |= VAR_2;
}
