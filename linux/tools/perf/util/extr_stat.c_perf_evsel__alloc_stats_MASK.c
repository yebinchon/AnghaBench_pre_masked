
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int threads; } ;
struct evsel {TYPE_1__ core; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct evsel*,int,int) ;
 scalar_t__ FUNC_1 (struct evsel*,int,int) ;
 scalar_t__ FUNC_2 (struct evsel*) ;
 int FUNC_3 (struct evsel*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct evsel *VAR_1, bool VAR_2)
{
 int VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_4(VAR_1->core.threads);

 if (FUNC_2(VAR_1) < 0 ||
     FUNC_0(VAR_1, VAR_3, VAR_4) < 0 ||
     (VAR_2 && FUNC_1(VAR_1, VAR_3, VAR_4) < 0))
  return -VAR_0;

 return 0;
}
