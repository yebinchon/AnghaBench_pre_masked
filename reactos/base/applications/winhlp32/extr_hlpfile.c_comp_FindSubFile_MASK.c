
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (void*,void const*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, const void *VAR_1,
                            int VAR_2, void** VAR_3)
{
    *VAR_3 = (char *)VAR_0+FUNC_3(VAR_0)+(VAR_2?5:3);
    FUNC_0("Comparing %s with %s\n", FUNC_1((char *)VAR_0), FUNC_1((const char *)VAR_1));
    return FUNC_2(VAR_0, VAR_1);
}
