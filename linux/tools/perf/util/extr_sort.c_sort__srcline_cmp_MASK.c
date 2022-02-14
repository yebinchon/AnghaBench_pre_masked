
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {void* srcline; } ;
typedef int int64_t ;


 void* FUNC_0 (struct hist_entry*) ;
 int FUNC_1 (void*,void*) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 if (!VAR_0->srcline)
  VAR_0->srcline = FUNC_0(VAR_0);
 if (!VAR_1->srcline)
  VAR_1->srcline = FUNC_0(VAR_1);

 return FUNC_1(VAR_1->srcline, VAR_0->srcline);
}
