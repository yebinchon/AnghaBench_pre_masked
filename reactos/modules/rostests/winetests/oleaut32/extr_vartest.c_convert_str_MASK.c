
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int dwInFlags; int cDig; } ;
typedef int OLECHAR ;
typedef TYPE_1__ NUMPARSE ;
typedef int LCID ;
typedef int INT ;
typedef int HRESULT ;
typedef TYPE_1__ BYTE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char const*,int,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_4( const char *VAR_3, INT VAR_4, ULONG VAR_5,
                            NUMPARSE *VAR_6, BYTE VAR_7[128], LCID VAR_8 )
{
    OLECHAR VAR_9[128];
    FUNC_1( VAR_0,0, VAR_3, -1, VAR_9, FUNC_0( VAR_9 ));
    FUNC_2( VAR_7, VAR_1, 128 );
    FUNC_2( VAR_6, 255, sizeof(*VAR_6) );
    VAR_6->cDig = VAR_4;
    VAR_6->dwInFlags = VAR_5;
    return FUNC_3( VAR_9, VAR_8, VAR_2, VAR_6, VAR_7);
}
