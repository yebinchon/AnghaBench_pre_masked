
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARTYPE ;
typedef int CIMTYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
__attribute__((used)) static CIMTYPE FUNC_1( VARTYPE VAR_10 )
{
    switch (VAR_10)
    {
    case 137: return VAR_0;
    case 136: return VAR_5;
    case 135: return VAR_4;
    case 131: return VAR_9;
    case 134: return VAR_1;
    case 130: return VAR_6;
    case 133: return VAR_2;
    case 129: return VAR_7;
    case 132: return VAR_3;
    case 128: return VAR_8;
    default:
        FUNC_0("unhandled type %u\n", VAR_10);
        break;
    }
    return 0;
}
