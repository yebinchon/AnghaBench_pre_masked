
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char*,int) ;
 void* FUNC_2 (void*,char const*) ;

__attribute__((used)) static void *FUNC_3(const char *VAR_2)
{
    void *VAR_3 = ((void*)0);
    void *VAR_4 = FUNC_1(
        "/System/Library/Frameworks/OpenGL.framework/OpenGL",
        VAR_0 | VAR_1);
    if (!VAR_4)
        return ((void*)0);
    VAR_3 = FUNC_2(VAR_4, VAR_2);
    FUNC_0(VAR_4);
    return VAR_3;
}
