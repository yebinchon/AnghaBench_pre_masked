
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ json_malloc_t ;
typedef scalar_t__ json_free_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4()
{
    json_malloc_t VAR_4 = ((void*)0);
    json_free_t VAR_5 = ((void*)0);

    FUNC_3(VAR_3, VAR_2);
    FUNC_2(&VAR_4, &VAR_5);
    FUNC_0();

    if (VAR_1 != 1 || VAR_0 != 1
        || VAR_4 != VAR_3 || VAR_5 != VAR_2)
        FUNC_1("Custom allocation failed");
}
