
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ MinVal; scalar_t__ MaxVal; } ;
typedef int RECT ;
typedef TYPE_1__ PROGRESS_INFO ;
typedef int LONG ;
typedef scalar_t__ INT ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ,int const*) ;

__attribute__((used)) static inline int FUNC_2( const PROGRESS_INFO *VAR_0, LONG VAR_1,
                                    const RECT* VAR_2, INT VAR_3 )
{
    return FUNC_0 (VAR_3 - VAR_0->MinVal, FUNC_1 (VAR_1, VAR_2),
                      VAR_0->MaxVal - VAR_0->MinVal);
}
