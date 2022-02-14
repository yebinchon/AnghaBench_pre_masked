
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpLineJoin ;
typedef int DWORD ;


 int FUNC_0 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static DWORD FUNC_1(GpLineJoin VAR_3)
{
    switch(VAR_3){
        case 128:
            return VAR_2;
        case 131:
            return VAR_0;
        case 130:
        case 129:
            return VAR_1;
        default:
            FUNC_0("Not a member of GpLineJoin enumeration\n");
            return 0;
    }
}
