
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct evsel {TYPE_1__ core; struct evsel* leader; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct evsel*,int,int) ;
 scalar_t__ FUNC_2 (struct evsel*) ;

__attribute__((used)) static int FUNC_3(struct evsel *VAR_0, int VAR_1, int VAR_2)
{
 struct evsel *VAR_3 = VAR_0->leader;
 int VAR_4;

 if (FUNC_2(VAR_0))
  return -1;





 FUNC_0(!VAR_3->core.fd);

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_4 == -1);

 return VAR_4;
}
