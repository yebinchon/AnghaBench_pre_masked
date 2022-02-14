
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_entry {int dummy; } ;
struct bprint_entry {int buf; int fmt; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct bprint_entry*,struct trace_entry*) ;
 int FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (struct trace_seq*,int ,int ) ;

enum print_line_t FUNC_3(struct trace_iterator *VAR_0)
{
 struct trace_seq *VAR_1 = &VAR_0->seq;
 struct trace_entry *VAR_2 = VAR_0->ent;
 struct bprint_entry *VAR_3;

 FUNC_0(VAR_3, VAR_2);

 FUNC_2(VAR_1, VAR_3->fmt, VAR_3->buf);

 return FUNC_1(VAR_1);
}
