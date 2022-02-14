
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t USHORT ;
typedef int * PEMS_HANDLE ;


 size_t FUNC_0 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static inline PEMS_HANDLE FUNC_1(USHORT VAR_1)
{
    if (VAR_1 >= FUNC_0(VAR_0)) return ((void*)0);
    return &VAR_0[VAR_1];
}
