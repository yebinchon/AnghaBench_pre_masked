
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;
struct auxtrace_record {int dummy; } ;
typedef int buffer ;


 struct auxtrace_record* FUNC_0 (struct evlist*,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;

struct auxtrace_record *FUNC_3(struct evlist *VAR_0,
           int *VAR_1)
{
 char VAR_2[64];
 int VAR_3;

 *VAR_1 = 0;

 VAR_3 = FUNC_1(VAR_2, sizeof(VAR_2));
 if (VAR_3) {
  *VAR_1 = VAR_3;
  return ((void*)0);
 }

 if (!FUNC_2(VAR_2, "GenuineIntel,", 13))
  return FUNC_0(VAR_0, VAR_1);

 return ((void*)0);
}
