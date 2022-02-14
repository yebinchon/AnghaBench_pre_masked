
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (size_t,char const*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_2 (void*,void const*,size_t) ;

void *FUNC_3(const void *VAR_3, size_t VAR_4, const char* VAR_5, int VAR_6)
{
    void *VAR_7;

    if (VAR_3 == ((void*)0) || VAR_4 >= VAR_2)
        return ((void*)0);

    VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return ((void*)0);
    }
    return FUNC_2(VAR_7, VAR_3, VAR_4);
}
