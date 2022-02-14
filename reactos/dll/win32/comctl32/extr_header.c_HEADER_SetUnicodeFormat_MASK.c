
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_3__ {scalar_t__ nNotifyFormat; } ;
typedef int LRESULT ;
typedef TYPE_1__ HEADER_INFO ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline LRESULT
FUNC_0 (HEADER_INFO *VAR_2, WPARAM VAR_3)
{
    BOOL VAR_4 = (VAR_2->nNotifyFormat == VAR_1);

    VAR_2->nNotifyFormat = ((BOOL)VAR_3 ? VAR_1 : VAR_0);

    return VAR_4;
}
