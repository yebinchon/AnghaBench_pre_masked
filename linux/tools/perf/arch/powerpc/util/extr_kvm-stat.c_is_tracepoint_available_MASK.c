
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_error {int * str; } ;
struct evlist {int dummy; } ;


 int FUNC_0 (struct evlist*,char const*,struct parse_events_error*) ;
 int FUNC_1 (char*,char const*,int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, struct evlist *VAR_1)
{
 struct parse_events_error VAR_2;
 int VAR_3;

 VAR_2.str = ((void*)0);
 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2);
 if (VAR_2.str)
  FUNC_1("%s : %s\n", VAR_0, VAR_2.str);
 return VAR_3;
}
