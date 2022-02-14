
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int GLenum ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
__attribute__((used)) static GLenum FUNC_1(DWORD VAR_8, DWORD VAR_9, INT VAR_10) {
    switch (VAR_8) {
        case 132:
            return VAR_2;

        case 133:
            if (VAR_9) return VAR_4;
            else return VAR_2;

        case 129:
            if (VAR_10 > -1) return VAR_7 + VAR_10;
            else return VAR_2;

        case 128:
            return VAR_0;

        case 131:
            return VAR_3;

        case 130:
            return VAR_5;

        case 134:

            FUNC_0("WINED3DTA_CONSTANT, not properly supported.\n");
            return VAR_1;

        default:
            FUNC_0("Unrecognized texture arg %#x\n", VAR_8);
            return VAR_6;
    }
}
