
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int dummy; } ;
struct print_entry {char* buf; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*,unsigned int,unsigned long,char const*) ;

__attribute__((used)) static enum print_line_t FUNC_4(struct trace_iterator *VAR_1)
{
 struct trace_entry *VAR_2 = VAR_1->ent;
 struct print_entry *VAR_3 = (struct print_entry *)VAR_2;
 const char *VAR_4 = VAR_3->buf;
 struct trace_seq *VAR_5 = &VAR_1->seq;
 unsigned long long VAR_6 = FUNC_1(VAR_1->ts);
 unsigned long VAR_7 = FUNC_0(VAR_6, VAR_0);
 unsigned VAR_8 = (unsigned long)VAR_6;


 FUNC_3(VAR_5, "MARK %u.%06lu %s", VAR_8, VAR_7, VAR_4);

 return FUNC_2(VAR_5);
}
