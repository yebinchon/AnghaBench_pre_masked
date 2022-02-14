
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_entry {int length; scalar_t__ address; } ;


 int FUNC_0 (char const*,char const*,int) ;

int FUNC_1(struct mac_entry *VAR_0, struct mac_entry *VAR_1)
{
    const int VAR_2 = VAR_1->length - VAR_0->length;
    return VAR_2 ? VAR_2 : FUNC_0((const char*)VAR_0->address,
        (const char*)VAR_1->address, VAR_0->length);
}
