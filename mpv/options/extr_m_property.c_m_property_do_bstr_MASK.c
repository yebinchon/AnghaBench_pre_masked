
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct m_property {int dummy; } ;
typedef int name0 ;
struct TYPE_4__ {int len; } ;
typedef TYPE_1__ bstr ;


 char* FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct m_property const*,char*,int,void*,void*) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(const struct m_property *VAR_1, bstr VAR_2,
                              int VAR_3, void *VAR_4, void *VAR_5)
{
    char VAR_6[64];
    if (VAR_2.len >= sizeof(VAR_6))
        return VAR_0;
    FUNC_2(VAR_6, sizeof(VAR_6), "%.*s", FUNC_0(VAR_2));
    return FUNC_1(((void*)0), VAR_1, VAR_6, VAR_3, VAR_4, VAR_5);
}
