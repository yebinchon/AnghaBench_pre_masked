
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Attributes; } ;
typedef int REGSAM ;
typedef TYPE_1__ MSICOMPONENT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline REGSAM FUNC_0( const MSICOMPONENT *VAR_5 )
{
    REGSAM VAR_6 = 0;
    if (VAR_3 || VAR_2)
        VAR_6 |= (VAR_5->Attributes & VAR_4) ? VAR_1 : VAR_0;
    return VAR_6;
}
