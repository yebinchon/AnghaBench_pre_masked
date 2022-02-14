
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFlags; } ;
typedef int DWORD ;
typedef TYPE_1__ DDPIXELFORMAT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline BOOL FUNC_0(const DDPIXELFORMAT *VAR_5)
{
    DWORD VAR_6 = VAR_0 | VAR_1 | VAR_2
            | VAR_3 | VAR_4;
    return !!(VAR_5->dwFlags & VAR_6);
}
