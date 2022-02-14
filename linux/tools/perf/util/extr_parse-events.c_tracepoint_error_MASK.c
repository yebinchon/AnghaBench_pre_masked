
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_error {void* help; void* str; } ;
typedef int help ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int,char const*,char const*) ;

__attribute__((used)) static void FUNC_3(struct parse_events_error *VAR_1, int VAR_2,
        const char *VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_0];

 if (!VAR_1)
  return;





 VAR_2 = FUNC_0(VAR_2);

 switch (VAR_2) {
 case 129:
  VAR_1->str = FUNC_1("can't access trace events");
  break;
 case 128:
  VAR_1->str = FUNC_1("unknown tracepoint");
  break;
 default:
  VAR_1->str = FUNC_1("failed to add tracepoint");
  break;
 }

 FUNC_2(VAR_2, VAR_5, sizeof(VAR_5), VAR_3, VAR_4);
 VAR_1->help = FUNC_1(VAR_5);
}
