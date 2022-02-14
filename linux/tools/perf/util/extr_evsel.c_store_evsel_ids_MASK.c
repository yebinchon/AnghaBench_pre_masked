
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct evsel {TYPE_1__ core; } ;
struct evlist {int core; } ;


 int FUNC_0 (struct evsel*,int,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct evsel *VAR_0, struct evlist *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0->core.fd); VAR_2++) {
  for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_0->core.fd);
       VAR_3++) {
   int VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);

   if (FUNC_1(&VAR_1->core, &VAR_0->core,
         VAR_2, VAR_3, VAR_4) < 0)
    return -1;
  }
 }

 return 0;
}
