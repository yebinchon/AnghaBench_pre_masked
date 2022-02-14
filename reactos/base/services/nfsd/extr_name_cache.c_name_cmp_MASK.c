
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name_cache_entry {int component_len; int component; } ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct name_cache_entry *VAR_0, struct name_cache_entry *VAR_1)
{
    const int VAR_2 = VAR_1->component_len - VAR_0->component_len;
    return VAR_2 ? VAR_2 : FUNC_0(VAR_0->component, VAR_1->component, VAR_0->component_len);
}
