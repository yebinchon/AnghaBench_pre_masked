
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int cpu; } ;


 int FUNC_0 (char*,size_t,char*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, char *VAR_1,
        size_t VAR_2, unsigned int VAR_3)
{
 return FUNC_0(VAR_1, VAR_2, "%*.*d", VAR_3, VAR_3, VAR_0->cpu);
}
