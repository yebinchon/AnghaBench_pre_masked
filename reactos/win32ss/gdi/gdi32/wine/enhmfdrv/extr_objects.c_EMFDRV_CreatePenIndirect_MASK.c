
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int emr ;
struct TYPE_11__ {int nSize; int iType; } ;
struct TYPE_8__ {scalar_t__ y; int x; } ;
struct TYPE_9__ {int elpColor; int lopnColor; TYPE_1__ lopnWidth; int elpWidth; int elpPenStyle; int lopnStyle; } ;
struct TYPE_10__ {TYPE_7__ emr; scalar_t__ ihPen; TYPE_2__ lopn; } ;
typedef int PHYSDEV ;
typedef int INT ;
typedef int HPEN ;
typedef TYPE_2__ EXTLOGPEN ;
typedef TYPE_3__ EMRCREATEPEN ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,TYPE_2__*) ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static DWORD FUNC_6(PHYSDEV VAR_1, HPEN VAR_2)
{
    EMRCREATEPEN VAR_3;
    DWORD VAR_4 = 0;

    if (!FUNC_2( VAR_2, sizeof(VAR_3.lopn), &VAR_3.lopn ))
    {

        EXTLOGPEN *VAR_5;
        INT VAR_6 = FUNC_2( VAR_2, 0, ((void*)0) );

        if (!VAR_6) return 0;

        VAR_5 = FUNC_4( FUNC_3(), 0, VAR_6 );

        FUNC_2( VAR_2, VAR_6, VAR_5 );

        VAR_3.lopn.lopnStyle = VAR_5->elpPenStyle;
        VAR_3.lopn.lopnWidth.x = VAR_5->elpWidth;
        VAR_3.lopn.lopnWidth.y = 0;
        VAR_3.lopn.lopnColor = VAR_5->elpColor;

        FUNC_5( FUNC_3(), 0, VAR_5 );
    }

    VAR_3.emr.iType = VAR_0;
    VAR_3.emr.nSize = sizeof(VAR_3);
    VAR_3.ihPen = VAR_4 = FUNC_0( VAR_1, VAR_2 );

    if(!FUNC_1( VAR_1, &VAR_3.emr ))
        VAR_4 = 0;
    return VAR_4;
}
