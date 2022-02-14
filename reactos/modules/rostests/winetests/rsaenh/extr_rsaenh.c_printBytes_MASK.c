
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, const BYTE *VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    FUNC_0("%s: ",VAR_0);
    for(VAR_3=0;VAR_3<VAR_2;VAR_3++)
        FUNC_0("0x%02x,",VAR_1[VAR_3]);
    FUNC_1('\n');
}
