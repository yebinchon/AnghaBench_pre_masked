
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file_buffer_size; char* file_buffer; } ;
typedef TYPE_1__ HLPFILE ;
typedef int HFILE ;
typedef char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static BOOL FUNC_6(HLPFILE* VAR_2, HFILE VAR_3)
{
    BYTE VAR_4[16], VAR_5[1];

    if (FUNC_4(VAR_3, VAR_4, 16) != 16) {FUNC_3("header\n"); return VAR_0;};


    if (FUNC_0(VAR_4, 0) != 0x00035F3F)
    {FUNC_3("wrong header\n"); return VAR_0;};

    VAR_2->file_buffer_size = FUNC_0(VAR_4, 12);
    VAR_2->file_buffer = FUNC_2(FUNC_1(), 0, VAR_2->file_buffer_size + 1);
    if (!VAR_2->file_buffer) return VAR_0;

    FUNC_5(VAR_2->file_buffer, VAR_4, 16);
    if (FUNC_4(VAR_3, VAR_2->file_buffer + 16, VAR_2->file_buffer_size - 16) !=VAR_2->file_buffer_size - 16)
    {FUNC_3("filesize1\n"); return VAR_0;};

    if (FUNC_4(VAR_3, VAR_5, 1) != 0) FUNC_3("filesize2\n");

    VAR_2->file_buffer[VAR_2->file_buffer_size] = '\0';

    return VAR_1;
}
