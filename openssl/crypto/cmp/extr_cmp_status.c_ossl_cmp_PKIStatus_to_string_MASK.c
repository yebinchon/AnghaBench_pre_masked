
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;







 int FUNC_2 (char*) ;

const char *FUNC_3(int VAR_1)
{
    switch (VAR_1) {
    case 134:
        return "PKIStatus: accepted";
    case 133:
        return "PKIStatus: granted with modifications";
    case 131:
        return "PKIStatus: rejection";
    case 128:
        return "PKIStatus: waiting";
    case 129:
        return "PKIStatus: revocation warning - a revocation of the cert is imminent";
    case 130:
        return "PKIStatus: revocation notification - a revocation of the cert has occurred";
    case 132:
        return "PKIStatus: key update warning - update already done for the cert";
    default:
        {
            char VAR_2[40];
            FUNC_0(VAR_2, sizeof(VAR_2), "PKIStatus: invalid=%d", VAR_1);
            FUNC_1(0, VAR_0);
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    }
}
