
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_2)
{
    if (VAR_1 % 12)
 FUNC_0(VAR_0, ", 0x%02hhx", VAR_2);
    else if (VAR_1)
 FUNC_0(VAR_0, ",\n\t0x%02hhx", VAR_2);
    else
 FUNC_0(VAR_0, "\t0x%02hhx", VAR_2);
    VAR_1++;
}
