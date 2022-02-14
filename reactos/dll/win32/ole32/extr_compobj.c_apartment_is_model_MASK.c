
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int multi_threaded; } ;
typedef int DWORD ;
typedef int BOOL ;
typedef TYPE_1__ APARTMENT ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0(const APARTMENT *VAR_1, DWORD VAR_2)
{
    return (VAR_1->multi_threaded == !(VAR_2 & VAR_0));
}
