
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef char TCHAR ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
TCHAR*
FUNC_1(HANDLE VAR_0)
{
 TCHAR* VAR_1;
 UINT VAR_2 = FUNC_0(VAR_0);

 switch (VAR_2)
 {
  case 143:
   VAR_1 = L"DC";
   break;
  case 129:
   VAR_1 = L"Region";
   break;
  case 146:
   VAR_1 = L"Bitmap";
   break;
  case 132:
   VAR_1 = L"Palette";
   break;
  case 136:
   VAR_1 = L"Font";
   break;
  case 145:
   VAR_1 = L"Brush";
   break;
  case 140:
   VAR_1 = L"EMF";
   break;
  case 131:
   VAR_1 = L"Pen";
   break;
  case 137:
   VAR_1 = L"ExtPen";
   break;
  case 144:
   VAR_1 = L"ColSpace";
   break;
  case 134:
   VAR_1 = L"MetaDC";
   break;
  case 133:
   VAR_1 = L"Metafile";
   break;
  case 138:
   VAR_1 = L"EMF";
   break;
  case 139:
   VAR_1 = L"EMDC";
   break;
  case 135:
   VAR_1 = L"MemDC";
   break;
  case 142:
   VAR_1 = L"DCE";
   break;
  case 130:
   VAR_1 = L"PFE";
   break;
  case 141:
   VAR_1 = L"anything";
   break;
  case 128:
  default:
   VAR_1 = L"unknown";
   break;
 }
 return VAR_1;
}
