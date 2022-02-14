
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpDashStyle ;
typedef int DWORD ;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static DWORD FUNC_1(GpDashStyle VAR_6)
{
    switch(VAR_6){
        case 128:
            return VAR_4;
        case 132:
            return VAR_0;
        case 129:
            return VAR_3;
        case 131:
            return VAR_1;
        case 130:
            return VAR_2;
        case 133:
            return VAR_5;
        default:
            FUNC_0("Not a member of GpDashStyle enumeration\n");
            return 0;
    }
}
