
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_6__ {size_t num_streams; TYPE_1__* streams; int storage; int strings; } ;
struct TYPE_5__ {TYPE_3__* db; } ;
struct TYPE_4__ {int stream; int str_index; } ;
typedef TYPE_2__ MSISTREAMSVIEW ;
typedef TYPE_3__ MSIDATABASE ;
typedef int HRESULT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct tagMSIVIEW*,size_t) ;
 int * FUNC_4 (int ,int const*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static UINT FUNC_7(struct tagMSIVIEW *VAR_4, UINT VAR_5)
{
    MSIDATABASE *VAR_6 = ((MSISTREAMSVIEW *)VAR_4)->db;
    UINT VAR_7, VAR_8 = VAR_6->num_streams - 1;
    const WCHAR *VAR_9;
    WCHAR *VAR_10;
    HRESULT VAR_11;

    FUNC_3("(%p %d)!\n", VAR_4, VAR_5);

    VAR_9 = FUNC_6( VAR_6->strings, VAR_6->streams[VAR_5].str_index, ((void*)0) );
    if (!(VAR_10 = FUNC_4( VAR_3, VAR_9 ))) return VAR_1;
    VAR_11 = FUNC_1( VAR_6->storage, VAR_10 );
    FUNC_5( VAR_10 );
    if (FUNC_0( VAR_11 ))
        return VAR_0;
    VAR_11 = FUNC_2( VAR_6->streams[VAR_5].stream );
    if (FUNC_0( VAR_11 ))
        return VAR_0;

    for (VAR_7 = VAR_5; VAR_7 < VAR_8; VAR_7++)
        VAR_6->streams[VAR_7] = VAR_6->streams[VAR_7 + 1];
    VAR_6->num_streams = VAR_8;

    return VAR_2;
}
