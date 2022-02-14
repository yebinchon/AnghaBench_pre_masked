
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* WORD ;
struct TYPE_13__ {void* top; int right; int left; int bottom; } ;
struct TYPE_10__ {int left; int top; int right; int bottom; } ;
struct TYPE_11__ {int nCount; TYPE_1__ rcBound; } ;
struct TYPE_12__ {void** rdParm; void* rdFunction; int rdSize; TYPE_2__ rdh; scalar_t__ Buffer; } ;
typedef TYPE_3__ RGNDATA ;
typedef TYPE_4__ RECT ;
typedef int PHYSDEV ;
typedef TYPE_3__ METARECORD ;
typedef int INT16 ;
typedef int HRGN ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int,TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 void* VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_3__*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static INT16 FUNC_7(PHYSDEV VAR_2, HRGN VAR_3)
{
    DWORD VAR_4;
    METARECORD *VAR_5;
    RGNDATA *VAR_6;
    RECT *VAR_7, *VAR_8;
    WORD VAR_9 = 0, VAR_10 = 0;
    WORD *VAR_11, *VAR_12;
    BOOL VAR_13;

    if (!(VAR_4 = FUNC_1( VAR_3, 0, ((void*)0) ))) return -1;
    if( !(VAR_6 = FUNC_2( FUNC_0(), 0, VAR_4 )) ) {
        FUNC_6("Can't alloc rgndata buffer\n");
 return -1;
    }
    FUNC_1( VAR_3, VAR_4, VAR_6 );




    VAR_4 = sizeof(METARECORD) + 20 + (VAR_6->rdh.nCount * 12);
    if( !(VAR_5 = FUNC_2( FUNC_0(), VAR_0, VAR_4 )) ) {
        FUNC_6("Can't alloc METARECORD buffer\n");
 FUNC_3( FUNC_0(), 0, VAR_6 );
 return -1;
    }

    VAR_11 = VAR_5->rdParm + 11;
    VAR_12 = ((void*)0);

    VAR_8 = (RECT *)VAR_6->Buffer + VAR_6->rdh.nCount;
    for(VAR_7 = (RECT *)VAR_6->Buffer; VAR_7 < VAR_8; VAR_7++)
    {
        if( VAR_12 && VAR_7->top == *(VAR_12 + 1) )
        {
     *VAR_11++ = VAR_7->left;
     *VAR_11++ = VAR_7->right;
 }
 else
 {
     if(VAR_12)
     {
         *VAR_12 = VAR_11 - VAR_12 - 3;
  *VAR_11++ = *VAR_12;
  if(*VAR_12 > VAR_10)
      VAR_10 = *VAR_12;
  VAR_9++;
     }
     VAR_12 = VAR_11++;
     *VAR_11++ = VAR_7->top;
     *VAR_11++ = VAR_7->bottom;
     *VAR_11++ = VAR_7->left;
     *VAR_11++ = VAR_7->right;
 }
    }

    if (VAR_12)
    {
        *VAR_12 = VAR_11 - VAR_12 - 3;
        *VAR_11++ = *VAR_12;
        if(*VAR_12 > VAR_10)
            VAR_10 = *VAR_12;
        VAR_9++;
    }

    VAR_5->rdParm[0] = 0;
    VAR_5->rdParm[1] = 6;
    VAR_5->rdParm[2] = 0x2f6;
    VAR_5->rdParm[3] = 0;
    VAR_5->rdParm[4] = (VAR_11 - &VAR_5->rdFunction) * sizeof(WORD);
    VAR_5->rdParm[5] = VAR_9;
    VAR_5->rdParm[6] = VAR_10;
    VAR_5->rdParm[7] = VAR_6->rdh.rcBound.left;
    VAR_5->rdParm[8] = VAR_6->rdh.rcBound.top;
    VAR_5->rdParm[9] = VAR_6->rdh.rcBound.right;
    VAR_5->rdParm[10] = VAR_6->rdh.rcBound.bottom;
    VAR_5->rdFunction = VAR_1;
    VAR_5->rdSize = VAR_11 - (WORD *)VAR_5;
    VAR_13 = FUNC_5( VAR_2, VAR_5, VAR_5->rdSize * 2 );
    FUNC_3( FUNC_0(), 0, VAR_5 );
    FUNC_3( FUNC_0(), 0, VAR_6 );
    if(!VAR_13)
    {
        FUNC_6("MFDRV_WriteRecord failed\n");
 return -1;
    }
    return FUNC_4( VAR_2, VAR_3 );
}
