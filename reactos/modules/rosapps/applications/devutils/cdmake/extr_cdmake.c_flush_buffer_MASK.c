
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sector; scalar_t__ count; int file; int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__,int,int ) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(void)
{
    if (FUNC_2(VAR_2.buffer, VAR_2.count, 1, VAR_2.file) < 1)
        FUNC_1("File write error");
    VAR_2.count = 0;
    if (VAR_3)
    {
        FUNC_3("\r%s ",
            FUNC_0((VAR_4 - VAR_2.sector) * VAR_0, VAR_1));
    }
}
