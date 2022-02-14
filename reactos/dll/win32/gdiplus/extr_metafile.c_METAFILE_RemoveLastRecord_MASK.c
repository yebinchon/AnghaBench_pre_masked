
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Size; } ;
struct TYPE_5__ {int comment_data_length; int * comment_data; } ;
typedef TYPE_1__ GpMetafile ;
typedef TYPE_2__ EmfPlusRecordHeader ;
typedef int BYTE ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(GpMetafile *VAR_0, EmfPlusRecordHeader *VAR_1)
{
    FUNC_0(VAR_0->comment_data + VAR_0->comment_data_length == (BYTE*)VAR_1 + VAR_1->Size);
    VAR_0->comment_data_length -= VAR_1->Size;
}
