
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Mode; int Offset; int Segment; } ;
typedef int DWORD ;
typedef TYPE_1__ ADDRESS64 ;






 char const* FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;

const char* FUNC_2(const ADDRESS64* VAR_0)
{
    if (!VAR_0) return "(null)";
    switch (VAR_0->Mode)
    {
    case 129:
        return FUNC_0("flat<%s>", FUNC_1(VAR_0->Offset));
    case 131:
        return FUNC_0("1616<%04x:%04x>", VAR_0->Segment, (DWORD)VAR_0->Offset);
    case 130:
        return FUNC_0("1632<%04x:%08x>", VAR_0->Segment, (DWORD)VAR_0->Offset);
    case 128:
        return FUNC_0("real<%04x:%04x>", VAR_0->Segment, (DWORD)VAR_0->Offset);
    default:
        return "unknown";
    }
}
