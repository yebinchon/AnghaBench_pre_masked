
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exception_table_entry {int dummy; } ;


 struct exception_table_entry const* FUNC_0 (unsigned long*,struct exception_table_entry const*,size_t const,int,int ) ;
 int VAR_0 ;

const struct exception_table_entry *
FUNC_1(const struct exception_table_entry *VAR_1,
        const size_t VAR_2,
        unsigned long VAR_3)
{
 return FUNC_0(&VAR_3, VAR_1, VAR_2,
         sizeof(struct exception_table_entry), VAR_0);
}
