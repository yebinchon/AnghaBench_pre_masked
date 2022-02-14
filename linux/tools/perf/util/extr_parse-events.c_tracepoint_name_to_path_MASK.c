
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_path {struct tracepoint_path* name; struct tracepoint_path* system; } ;


 int FUNC_0 (struct tracepoint_path*) ;
 char* FUNC_1 (char const*,char) ;
 struct tracepoint_path* FUNC_2 (char*) ;
 struct tracepoint_path* FUNC_3 (char const*,int) ;
 struct tracepoint_path* FUNC_4 (int) ;
 int FUNC_5 (struct tracepoint_path**) ;

struct tracepoint_path *FUNC_6(const char *VAR_0)
{
 struct tracepoint_path *VAR_1 = FUNC_4(sizeof(*VAR_1));
 char *VAR_2 = FUNC_1(VAR_0, ':');

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 VAR_1->system = FUNC_3(VAR_0, VAR_2 - VAR_0);
 VAR_1->name = FUNC_2(VAR_2+1);

 if (VAR_1->system == ((void*)0) || VAR_1->name == ((void*)0)) {
  FUNC_5(&VAR_1->system);
  FUNC_5(&VAR_1->name);
  FUNC_5(&VAR_1);
 }

 return VAR_1;
}
