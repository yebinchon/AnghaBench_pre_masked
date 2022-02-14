
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwAspect; scalar_t__ cfFormat; scalar_t__ tymed; } ;
typedef int HRESULT ;
typedef TYPE_1__ FORMATETC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_1( const FORMATETC *VAR_13 )
{

    if (VAR_13->dwAspect == VAR_5 && VAR_13->cfFormat != VAR_4)
        return VAR_6;

    if (!VAR_13->cfFormat ||
        (VAR_13->cfFormat == VAR_4 && VAR_13->tymed == VAR_12) ||
        (VAR_13->cfFormat == VAR_1 && VAR_13->tymed == VAR_10) ||
        (VAR_13->cfFormat == VAR_2 && VAR_13->tymed == VAR_11) ||
        (VAR_13->cfFormat == VAR_3 && VAR_13->tymed == VAR_9))
        return VAR_8;
    else if (VAR_13->tymed == VAR_11)
        return VAR_0;
    else
    {
        FUNC_0("invalid clipformat/tymed combination: %d/%d\n", VAR_13->cfFormat, VAR_13->tymed);
        return VAR_7;
    }
}
