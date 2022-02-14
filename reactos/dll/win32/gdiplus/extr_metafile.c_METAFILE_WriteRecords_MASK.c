
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int comment_data_length; int comment_data; int record_dc; } ;
typedef TYPE_1__ GpMetafile ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void FUNC_1(GpMetafile *VAR_0)
{
    if (VAR_0->comment_data_length > 4)
    {
        FUNC_0(VAR_0->record_dc, VAR_0->comment_data_length, VAR_0->comment_data);
        VAR_0->comment_data_length = 4;
    }
}
