
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ readpos; } ;
struct trace_seq {scalar_t__ buffer; TYPE_1__ seq; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (void*,scalar_t__,size_t) ;
 scalar_t__ FUNC_1 (struct trace_seq*) ;

__attribute__((used)) static ssize_t FUNC_2(struct trace_seq *VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_1) <= VAR_1->seq.readpos)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1) - VAR_1->seq.readpos;
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;
 FUNC_0(VAR_2, VAR_1->buffer + VAR_1->seq.readpos, VAR_3);

 VAR_1->seq.readpos += VAR_3;
 return VAR_3;
}
