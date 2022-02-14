
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PcapFile {scalar_t__ fp; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct PcapFile*) ;

void FUNC_2(struct PcapFile *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if (VAR_0->fp)
        FUNC_0(VAR_0->fp);
    FUNC_1(VAR_0);
}
