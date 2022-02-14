
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFlags; scalar_t__ dwFourCC; } ;
typedef TYPE_1__ DDPIXELFORMAT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline BOOL FUNC_0(const DDPIXELFORMAT *VAR_6)
{
    return (VAR_6->dwFlags & VAR_0) && (VAR_6->dwFourCC == VAR_1
            || VAR_6->dwFourCC == VAR_2 || VAR_6->dwFourCC == VAR_3
            || VAR_6->dwFourCC == VAR_4 || VAR_6->dwFourCC == VAR_5);
}
