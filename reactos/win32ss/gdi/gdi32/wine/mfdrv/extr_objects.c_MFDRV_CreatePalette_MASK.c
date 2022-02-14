
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int rdSize; int* rdParm; int rdFunction; } ;
typedef int PHYSDEV ;
typedef TYPE_1__ METARECORD ;
typedef int LOGPALETTE ;
typedef int HPALETTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (int**,int *,int) ;

__attribute__((used)) static BOOL FUNC_6(PHYSDEV VAR_3, HPALETTE VAR_4, LOGPALETTE* VAR_5, int VAR_6)
{
    int VAR_7;
    BOOL VAR_8;
    METARECORD *VAR_9;

    VAR_9 = FUNC_1( FUNC_0(), 0, sizeof(METARECORD) + VAR_6 - sizeof(WORD) );
    VAR_9->rdSize = (sizeof(METARECORD) + VAR_6 - sizeof(WORD)) / sizeof(WORD);
    VAR_9->rdFunction = VAR_1;
    FUNC_5(&(VAR_9->rdParm), VAR_5, VAR_6);
    if (!(FUNC_4( VAR_3, VAR_9, VAR_9->rdSize * sizeof(WORD))))
    {
        FUNC_2(FUNC_0(), 0, VAR_9);
        return VAR_0;
    }

    VAR_9->rdSize = sizeof(METARECORD) / sizeof(WORD);
    VAR_9->rdFunction = VAR_2;

    if ((VAR_7 = FUNC_3( VAR_3, VAR_4 )) == -1) VAR_8 = VAR_0;
    else
    {
        *(VAR_9->rdParm) = VAR_7;
        VAR_8 = FUNC_4( VAR_3, VAR_9, VAR_9->rdSize * sizeof(WORD));
    }
    FUNC_2(FUNC_0(), 0, VAR_9);
    return VAR_8;
}
