
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int num_streams; int storage; } ;
struct TYPE_8__ {scalar_t__ type; int* pwcsName; } ;
typedef TYPE_1__ STATSTG ;
typedef TYPE_2__ MSIDATABASE ;
typedef int IStream ;
typedef int IEnumSTATSTG ;
typedef int HRESULT ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int ,int **) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int*,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*,int*,int **) ;

__attribute__((used)) static UINT FUNC_12( MSIDATABASE *VAR_4 )
{
    WCHAR VAR_5[VAR_2 + 1];
    IEnumSTATSTG *VAR_6;
    STATSTG VAR_7;
    HRESULT VAR_8;
    UINT VAR_9, VAR_10 = VAR_1;
    IStream *VAR_11;

    VAR_8 = FUNC_5( VAR_4->storage, 0, ((void*)0), 0, &VAR_6 );
    if (FUNC_2( VAR_8 ))
        return VAR_0;

    for (;;)
    {
        VAR_9 = 0;
        VAR_8 = FUNC_3( VAR_6, 1, &VAR_7, &VAR_9 );
        if (FUNC_2( VAR_8 ) || !VAR_9)
            break;


        if (VAR_7.type != VAR_3 || *VAR_7.pwcsName == 0x4840)
        {
            FUNC_0( VAR_7.pwcsName );
            continue;
        }
        FUNC_9( VAR_7.pwcsName, VAR_5 );
        if (FUNC_10( VAR_4, VAR_5 ))
        {
            FUNC_0( VAR_7.pwcsName );
            continue;
        }
        FUNC_6("found new stream %s\n", FUNC_8( VAR_5 ));

        VAR_8 = FUNC_11( VAR_4, VAR_7.pwcsName, &VAR_11 );
        FUNC_0( VAR_7.pwcsName );
        if (FUNC_2( VAR_8 ))
        {
            FUNC_1("unable to open stream %08x\n", VAR_8);
            VAR_10 = VAR_0;
            break;
        }

        VAR_10 = FUNC_7( VAR_4, VAR_5, VAR_11 );
        if (VAR_10 != VAR_1)
            break;
    }

    FUNC_6("loaded %u streams\n", VAR_4->num_streams);
    FUNC_4( VAR_6 );
    return VAR_10;
}
