
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOLEAN
FUNC_2(
    ULONG VAR_8,
    PCHAR VAR_9[])
{
    ULONG VAR_10, VAR_11;

    VAR_2 = VAR_7;
    if (!VAR_3)
    {
        FUNC_1("Dmesg: error, buffer is not allocated! /DEBUGPORT=SCREEN kernel param required for dmesg.\n");
        return VAR_7;
    }

    FUNC_1("*** Dmesg *** TotalWritten=%lu, BufferSize=%lu, CurrentPosition=%lu\n",
              VAR_1, VAR_4, VAR_5);


    VAR_11 = VAR_5;
    VAR_10 = (VAR_11 + VAR_6) % VAR_4;


    if (VAR_1 <= VAR_4)
    {

        FUNC_0(VAR_3, VAR_5);
    }
    else
    {


        FUNC_0(VAR_3 + VAR_10, VAR_4 - VAR_10);
        FUNC_1("*** Dmesg: buffer rollup ***\n");
        FUNC_0(VAR_3, VAR_11);
    }
    FUNC_1("*** Dmesg: end of output ***\n");

    VAR_2 = VAR_0;

    return VAR_7;
}
