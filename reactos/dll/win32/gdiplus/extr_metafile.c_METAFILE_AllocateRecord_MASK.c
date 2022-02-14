
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Size; int DataSize; } ;
struct TYPE_4__ {int comment_data_size; char* comment_data; int comment_data_length; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpMetafile ;
typedef TYPE_2__ EmfPlusRecordHeader ;
typedef int DWORD ;
typedef char BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static GpStatus FUNC_4(GpMetafile *VAR_2, DWORD VAR_3, void **VAR_4)
{
    DWORD VAR_5;
    EmfPlusRecordHeader *VAR_6;

    if (!VAR_2->comment_data_size)
    {
        DWORD VAR_7 = FUNC_2(256, VAR_3 * 2 + 4);
        VAR_2->comment_data = FUNC_0(VAR_7);

        if (!VAR_2->comment_data)
            return VAR_1;

        FUNC_3(VAR_2->comment_data, "EMF+", 4);

        VAR_2->comment_data_size = VAR_7;
        VAR_2->comment_data_length = 4;
    }

    VAR_5 = VAR_3 + VAR_2->comment_data_length;

    if (VAR_5 > VAR_2->comment_data_size)
    {
        DWORD VAR_8 = VAR_5 * 2;
        BYTE *VAR_9 = FUNC_0(VAR_8);

        if (!VAR_9)
            return VAR_1;

        FUNC_3(VAR_9, VAR_2->comment_data, VAR_2->comment_data_length);

        VAR_2->comment_data_size = VAR_8;
        FUNC_1(VAR_2->comment_data);
        VAR_2->comment_data = VAR_9;
    }

    *VAR_4 = VAR_2->comment_data + VAR_2->comment_data_length;
    VAR_2->comment_data_length += VAR_3;

    VAR_6 = (EmfPlusRecordHeader*)*VAR_4;
    VAR_6->Size = VAR_3;
    VAR_6->DataSize = VAR_3 - sizeof(EmfPlusRecordHeader);

    return VAR_0;
}
