
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chunk_entry {scalar_t__ id; scalar_t__ type; int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 char const* FUNC_1 (char*,int ,...) ;

const char *FUNC_2(const struct chunk_entry *VAR_2)
{
    const char *VAR_3 = "";

    if (!VAR_2)
        return "(null)";
    if (VAR_2->id == VAR_1 || VAR_2->id == VAR_0)
        VAR_3 = FUNC_1("type %s, ", FUNC_0(VAR_2->type));
    return FUNC_1("%s chunk, %ssize %u", FUNC_0(VAR_2->id), VAR_3, VAR_2->size);
}
