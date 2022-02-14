
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int mem_info; } ;
typedef int out ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,size_t,char*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_0, char *VAR_1,
        size_t VAR_2, unsigned int VAR_3)
{
 char VAR_4[64];

 FUNC_0(VAR_4, sizeof(VAR_4), VAR_0->mem_info);
 return FUNC_1(VAR_1, VAR_2, "%-*s", VAR_3, VAR_4);
}
