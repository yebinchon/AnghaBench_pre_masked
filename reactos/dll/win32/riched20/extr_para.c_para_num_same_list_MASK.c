
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ wNumbering; scalar_t__ wNumberingStart; int wNumberingStyle; } ;
typedef TYPE_1__ PARAFORMAT2 ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static inline BOOL FUNC_0( const PARAFORMAT2 *VAR_1, const PARAFORMAT2 *VAR_2 )
{
    return VAR_1->wNumbering == VAR_2->wNumbering &&
        VAR_1->wNumberingStart == VAR_2->wNumberingStart &&
        VAR_1->wNumberingStyle == VAR_2->wNumberingStyle &&
        !(VAR_1->wNumberingStyle & VAR_0);
}
