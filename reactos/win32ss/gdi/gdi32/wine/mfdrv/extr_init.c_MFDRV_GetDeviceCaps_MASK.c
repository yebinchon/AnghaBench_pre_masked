
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PHYSDEV ;
typedef int INT ;


 int VAR_0 ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static INT FUNC_1(PHYSDEV VAR_1, INT VAR_2)
{
    switch(VAR_2)
    {
    case 129:
        return VAR_0;
    case 128:
        return 0;
    default:
        FUNC_0(" unsupported capability %d, will return 0\n", VAR_2 );
    }
    return 0;
}
