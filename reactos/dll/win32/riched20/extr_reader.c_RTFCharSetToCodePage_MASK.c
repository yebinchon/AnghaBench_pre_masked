
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ciACP; } ;
typedef int RTF_Info ;
typedef int DWORD ;
typedef TYPE_1__ CHARSETINFO ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (char*,int) ;
 int VAR_4 ;


 int FUNC_1 (int*,TYPE_1__*,int ) ;


int
FUNC_2(RTF_Info *VAR_5, int VAR_6)
{
 switch (VAR_6)
        {
                case 146:
                        return 1252;
                case 142:
                        return VAR_0;
                case 131:
                        return VAR_3;
                case 135:
                        return VAR_1;
                case 132:
                        return 932;
                case 138:
                        return 949;
                case 136:
                        return 1361;
                case 140:
                        return 936;
                case 143:
                        return 950;
                case 139:
                        return 1253;
                case 129:
                        return 1254;
                case 128:
                        return 1258;
                case 137:
                        return 1255;
                case 145:
                        return 1256;
                case 144:
                        return 1257;
                case 133:
                        return 1251;
                case 130:
                        return 874;
                case 141:
                        return 1250;
                case 134:
                        return VAR_2;
                default:
  {
                        CHARSETINFO VAR_7;
                        DWORD VAR_8 = VAR_6;



                        if (!FUNC_1(&VAR_8, &VAR_7, VAR_4))
                                FUNC_0("unknown charset %d\n", VAR_6);
   else
                                return VAR_7.ciACP;
  }
 }
        return 0;
}
