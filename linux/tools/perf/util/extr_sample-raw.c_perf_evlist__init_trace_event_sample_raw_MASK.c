
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int trace_event_sample_raw; int env; } ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;

void FUNC_2(struct evlist *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_1->env);

 if (VAR_2 && !FUNC_1("s390", VAR_2))
  VAR_1->trace_event_sample_raw = VAR_0;
}
