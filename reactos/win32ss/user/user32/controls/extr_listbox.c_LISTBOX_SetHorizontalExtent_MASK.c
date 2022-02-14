
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int info ;
struct TYPE_7__ {int style; scalar_t__ horz_extent; scalar_t__ horz_pos; scalar_t__ width; int self; } ;
struct TYPE_6__ {int cbSize; scalar_t__ nMax; int fMask; scalar_t__ nMin; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef int LRESULT ;
typedef TYPE_2__ LB_DESCR ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static LRESULT FUNC_3( LB_DESCR *VAR_8, INT VAR_9 )
{
    if (VAR_8->style & VAR_1)
        return VAR_2;
    if (VAR_9 == VAR_8->horz_extent) return VAR_2;
    FUNC_2("[%p]: new horz extent = %d\n", VAR_8->self, VAR_9 );
    VAR_8->horz_extent = VAR_9;
    if (VAR_8->style & VAR_7) {
        SCROLLINFO VAR_10;
        VAR_10.cbSize = sizeof(VAR_10);
        VAR_10.nMin = 0;
        VAR_10.nMax = VAR_8->horz_extent ? VAR_8->horz_extent - 1 : 0;
        VAR_10.fMask = VAR_5;
        if (VAR_8->style & VAR_0)
            VAR_10.fMask |= VAR_4;
        FUNC_1( VAR_8->self, VAR_3, &VAR_10, VAR_6 );
    }
    if (VAR_8->horz_pos > VAR_9 - VAR_8->width)
        FUNC_0( VAR_8, VAR_9 - VAR_8->width );
    return VAR_2;
}
