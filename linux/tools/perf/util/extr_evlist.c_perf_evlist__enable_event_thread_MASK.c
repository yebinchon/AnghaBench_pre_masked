
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct evsel {TYPE_2__ core; } ;
struct TYPE_3__ {int cpus; } ;
struct evlist {TYPE_1__ core; } ;


 int VAR_0 ;
 int FUNC_0 (struct evsel*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct evlist *VAR_2,
         struct evsel *VAR_3,
         int VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_2(VAR_2->core.cpus);

 if (!VAR_3->core.fd)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  int VAR_7 = FUNC_1(FUNC_0(VAR_3, VAR_5, VAR_4), VAR_1, 0);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
