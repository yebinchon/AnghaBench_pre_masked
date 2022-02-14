
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {int name; } ;


 int VAR_0 ;
 struct tracepoint* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct tracepoint*) ;
 int FUNC_2 (char*,int ) ;
 struct tracepoint* FUNC_3 (int,int ) ;

__attribute__((used)) static struct tracepoint *FUNC_4(char *VAR_2)
{
 struct tracepoint *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->name = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3->name) {
  FUNC_1(VAR_3);
  return FUNC_0(-VAR_0);
 }

 return VAR_3;
}
