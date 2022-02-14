
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int browse_info ;
typedef int UINT ;
struct TYPE_6__ {int code; scalar_t__ idFrom; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ NMTREEVIEWW ;
typedef int LRESULT ;
typedef int LPNMTVDISPINFOW ;
typedef scalar_t__ LPNMHDR ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,int *,int ,scalar_t__,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static LRESULT FUNC_6( browse_info *VAR_1, UINT VAR_2, LPNMHDR VAR_3 )
{
    NMTREEVIEWW *VAR_4 = (NMTREEVIEWW *)VAR_3;

    FUNC_4("%p %x %p msg=%x\n", VAR_1, VAR_2, VAR_3, VAR_4->hdr.code);

    if (VAR_4->hdr.idFrom != VAR_0)
        return 0;

    switch (VAR_4->hdr.code)
    {
    case 135:
    case 134:
        return FUNC_1( VAR_1, VAR_4 );

    case 131:
    case 130:
        return FUNC_2( VAR_1, VAR_4 );

    case 129:
    case 128:
        return FUNC_0( VAR_1, VAR_4 );

    case 133:
    case 132:
        return FUNC_3( VAR_1, (LPNMTVDISPINFOW)VAR_4 );

    default:
        FUNC_5("unhandled (%d)\n", VAR_4->hdr.code);
        break;
    }

    return 0;
}
