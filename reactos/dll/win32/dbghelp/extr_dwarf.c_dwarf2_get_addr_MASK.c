
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;
 unsigned long FUNC_1 (unsigned char const*) ;
 unsigned long FUNC_2 (unsigned char const*) ;

__attribute__((used)) static unsigned long FUNC_3(const unsigned char* VAR_0, unsigned VAR_1)
{
    unsigned long VAR_2;

    switch (VAR_1)
    {
    case 4:
        VAR_2 = FUNC_1(VAR_0);
        break;
    case 8:
        VAR_2 = FUNC_2(VAR_0);
 break;
    default:
        FUNC_0("Unsupported Word Size %u\n", VAR_1);
        VAR_2 = 0;
    }
    return VAR_2;
}
