
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist_test {int name; int id; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct evlist_test*) ;

__attribute__((used)) static int FUNC_2(struct evlist_test *VAR_0, unsigned VAR_1)
{
 int VAR_2, VAR_3 = 0;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct evlist_test *VAR_5 = &VAR_0[VAR_4];

  FUNC_0("running test %d '%s'", VAR_5->id, VAR_5->name);
  VAR_2 = FUNC_1(VAR_5);
  if (VAR_2)
   VAR_3 = VAR_2;
  FUNC_0("\n");
 }

 return VAR_3;
}
