
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ version; int flags; } ;
typedef TYPE_1__ ole_stream_header_t ;
typedef int header ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef int DefaultHandler ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int,int ,int **) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int,int*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static HRESULT FUNC_7(DefaultHandler *VAR_6, IStorage *VAR_7)
{
    IStream *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_1(VAR_7, VAR_1, ((void*)0), VAR_2 | VAR_3, 0, &VAR_8);

    if(FUNC_5(VAR_9))
    {
        DWORD VAR_10;
        ole_stream_header_t VAR_11;

        VAR_9 = FUNC_2(VAR_8, &VAR_11, sizeof(VAR_11), &VAR_10);
        if(VAR_9 == VAR_4 && VAR_10 == sizeof(VAR_11) && VAR_11.version == VAR_5)
        {
            if(VAR_11.flags & 1)
            {

                FUNC_0("Linked objects are not supported yet\n");
            }
        }
        else
        {
            FUNC_6("Incorrect OleStream header\n");
            VAR_9 = VAR_0;
        }
        FUNC_3(VAR_8);
    }
    else
        VAR_9 = FUNC_4(VAR_7, 0);

    return VAR_9;
}
