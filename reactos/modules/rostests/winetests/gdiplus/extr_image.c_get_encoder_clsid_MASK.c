
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {int Clsid; int FormatID; int MimeType; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ ImageCodecInfo ;
typedef int GpStatus ;
typedef int GUID ;
typedef int CLSID ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (size_t,size_t,TYPE_1__*) ;
 int FUNC_3 (size_t*,size_t*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_6(LPCWSTR VAR_3, GUID *VAR_4, CLSID *VAR_5)
{
    GpStatus VAR_6;
    UINT VAR_7, VAR_8, VAR_9;
    ImageCodecInfo *VAR_10;
    BOOL VAR_11 = VAR_0;

    VAR_6 = FUNC_3(&VAR_7, &VAR_8);
    FUNC_4(VAR_1, VAR_6);

    VAR_10 = FUNC_0(VAR_8);

    VAR_6 = FUNC_2(VAR_7, VAR_8, VAR_10);
    FUNC_4(VAR_1, VAR_6);

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
    {
        if (!FUNC_5(VAR_10[VAR_9].MimeType, VAR_3))
        {
            *VAR_4 = VAR_10[VAR_9].FormatID;
            *VAR_5 = VAR_10[VAR_9].Clsid;
            VAR_11 = VAR_2;
            break;
        }
    }

    FUNC_1(VAR_10);
    return VAR_11;
}
