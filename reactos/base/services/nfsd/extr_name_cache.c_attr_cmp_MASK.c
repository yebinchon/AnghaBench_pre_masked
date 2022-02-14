
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_cache_entry {scalar_t__ fileid; } ;



int FUNC_0(struct attr_cache_entry *VAR_0, struct attr_cache_entry *VAR_1)
{
    return VAR_0->fileid < VAR_1->fileid ? -1 : VAR_0->fileid > VAR_1->fileid;
}
