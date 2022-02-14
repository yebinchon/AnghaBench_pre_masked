
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_NAME_ENTRY ;
struct TYPE_3__ {int entries; } ;
typedef TYPE_1__ X509_NAME ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int) ;

X509_NAME_ENTRY *FUNC_2(const X509_NAME *VAR_0, int VAR_1)
{
    if (VAR_0 == ((void*)0) || FUNC_0(VAR_0->entries) <= VAR_1
        || VAR_1 < 0)
        return ((void*)0);

    return FUNC_1(VAR_0->entries, VAR_1);
}
