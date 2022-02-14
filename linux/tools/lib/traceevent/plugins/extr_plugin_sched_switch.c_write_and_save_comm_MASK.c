
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int len; char* buffer; } ;
struct tep_record {scalar_t__ data; } ;
struct tep_format_field {TYPE_1__* event; int size; scalar_t__ offset; } ;
struct TYPE_2__ {int tep; } ;


 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (struct trace_seq*,char*,int ,char const*) ;
 int FUNC_2 (struct trace_seq*) ;

__attribute__((used)) static void FUNC_3(struct tep_format_field *VAR_0,
    struct tep_record *VAR_1,
    struct trace_seq *VAR_2, int VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 VAR_4 = (char *)(VAR_1->data + VAR_0->offset);
 VAR_5 = VAR_2->len;
 FUNC_1(VAR_2, "%.*s",
    VAR_0->size, VAR_4);


 FUNC_2(VAR_2);
 VAR_4 = &VAR_2->buffer[VAR_5];


 FUNC_0(VAR_0->event->tep, VAR_4, VAR_3);
}
