
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hreftype; TYPE_1__* lpadesc; TYPE_3__* lptdesc; } ;
struct TYPE_7__ {int vt; TYPE_2__ u; } ;
struct TYPE_5__ {int cDims; TYPE_3__ tdescElem; } ;
typedef TYPE_3__ TYPEDESC ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;







 int VAR_4 ;

 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(const TYPEDESC *VAR_5,char *VAR_6) {
    if (VAR_5->vt & VAR_2)
 VAR_6 += FUNC_2(FUNC_1(VAR_6, "reserved | "));
    if (VAR_5->vt & VAR_1)
 VAR_6 += FUNC_2(FUNC_1(VAR_6, "ref to "));
    if (VAR_5->vt & VAR_0)
 VAR_6 += FUNC_2(FUNC_1(VAR_6, "array of "));
    if (VAR_5->vt & VAR_4)
 VAR_6 += FUNC_2(FUNC_1(VAR_6, "vector of "));
    switch(VAR_5->vt & VAR_3) {
    case 135: FUNC_0(VAR_6, "VT_UI1"); break;
    case 144: FUNC_0(VAR_6, "VT_I2"); break;
    case 143: FUNC_0(VAR_6, "VT_I4"); break;
    case 138: FUNC_0(VAR_6, "VT_R4"); break;
    case 137: FUNC_0(VAR_6, "VT_R8"); break;
    case 153: FUNC_0(VAR_6, "VT_BOOL"); break;
    case 147: FUNC_0(VAR_6, "VT_ERROR"); break;
    case 150: FUNC_0(VAR_6, "VT_CY"); break;
    case 149: FUNC_0(VAR_6, "VT_DATE"); break;
    case 152: FUNC_0(VAR_6, "VT_BSTR"); break;
    case 131: FUNC_0(VAR_6, "VT_UNKNOWN"); break;
    case 148: FUNC_0(VAR_6, "VT_DISPATCH"); break;
    case 145: FUNC_0(VAR_6, "VT_I1"); break;
    case 134: FUNC_0(VAR_6, "VT_UI2"); break;
    case 133: FUNC_0(VAR_6, "VT_UI4"); break;
    case 142: FUNC_0(VAR_6, "VT_INT"); break;
    case 132: FUNC_0(VAR_6, "VT_UINT"); break;
    case 129: FUNC_0(VAR_6, "VT_VARIANT"); break;
    case 128: FUNC_0(VAR_6, "VT_VOID"); break;
    case 146: FUNC_0(VAR_6, "VT_HRESULT"); break;
    case 130: FUNC_0(VAR_6, "VT_USERDEFINED ref = %x",
     VAR_5->u.hreftype); break;
    case 141: FUNC_0(VAR_6, "VT_LPSTR"); break;
    case 140: FUNC_0(VAR_6, "VT_LPWSTR"); break;
    case 139: FUNC_0(VAR_6, "ptr to ");
      FUNC_3(VAR_5->u.lptdesc, VAR_6 + 7);
      break;
    case 136: FUNC_0(VAR_6, "safearray of ");
      FUNC_3(VAR_5->u.lptdesc, VAR_6 + 13);
      break;
    case 151: FUNC_0(VAR_6, "%d dim array of ",
       VAR_5->u.lpadesc->cDims);
      FUNC_3(&VAR_5->u.lpadesc->tdescElem, VAR_6 + FUNC_2(VAR_6));
      break;

    default: FUNC_0(VAR_6, "unknown(%d)", VAR_5->vt & VAR_3); break;
    }
}
