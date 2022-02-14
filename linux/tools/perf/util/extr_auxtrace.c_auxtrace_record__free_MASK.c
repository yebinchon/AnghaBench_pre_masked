
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_record {int (* free ) (struct auxtrace_record*) ;} ;


 int FUNC_0 (struct auxtrace_record*) ;

void FUNC_1(struct auxtrace_record *VAR_0)
{
 if (VAR_0)
  VAR_0->free(VAR_0);
}
