
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
typedef int USHORT ;
typedef int ULONGLONG ;
typedef int const ULONG ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_2__ {int flags_type; } ;
typedef int SHORT ;
typedef int* PFORMAT_STRING ;
typedef TYPE_1__ NDR_RANGE ;
typedef int MIDL_STUB_MESSAGE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int* FUNC_3 (int *,int*) ;

__attribute__((used)) static ULONG FUNC_4(MIDL_STUB_MESSAGE *VAR_1,
                                 PFORMAT_STRING VAR_2)
{
  switch (*VAR_2) {
  case 134:
  case 140:
  case 151:
  case 155:
  case 136:
  case 135:
  case 152:
    return *(const WORD*)&VAR_2[2];
  case 144:
  case 143:
    return *(const ULONG*)&VAR_2[2];
  case 132:
    return *(const WORD*)&VAR_2[4];
  case 139: {
    switch (((const NDR_RANGE *)VAR_2)->flags_type & 0xf) {
    case 154:
    case 153:
    case 137:
    case 130:
        return sizeof(UCHAR);
    case 129:
    case 138:
    case 131:
        return sizeof(USHORT);
    case 142:
    case 133:
    case 148:
        return sizeof(ULONG);
    case 147:
        return sizeof(float);
    case 150:
        return sizeof(double);
    case 146:
        return sizeof(ULONGLONG);
    case 149:
        return sizeof(UINT);
    default:
        FUNC_0("unknown type 0x%x\n", ((const NDR_RANGE *)VAR_2)->flags_type & 0xf);
        FUNC_2(VAR_0);
    }
  }
  case 141:
    VAR_2 += 2;
    VAR_2 = FUNC_3(VAR_1, VAR_2);
    VAR_2 += *(const SHORT*)VAR_2;
    return *(const SHORT*)VAR_2;
  case 145:
    return sizeof(void *);
  case 128:
    return *(const WORD*)&VAR_2[2] * 2;
  default:
    FUNC_1("unhandled embedded type %02x\n", *VAR_2);
  }
  return 0;
}
