
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int grbitProtocol; } ;
typedef TYPE_1__ SecPkgCred_SupportedProtocols ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int CredHandle ;


 scalar_t__ FUNC_0 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char*,unsigned int,...) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(CredHandle *VAR_8, unsigned VAR_9)
{
    SecPkgCred_SupportedProtocols VAR_10;
    SECURITY_STATUS VAR_11;

    VAR_11 = FUNC_0(VAR_8, VAR_0, &VAR_10);
    FUNC_2(VAR_11 == VAR_1, "QueryCredentialsAttributes failed: %08x\n", VAR_11);

    if(VAR_9)
        FUNC_2(VAR_10.grbitProtocol == VAR_9, "protocols.grbitProtocol = %x, expected %x\n", VAR_10.grbitProtocol, VAR_9);

    FUNC_3("Supported protocols:\n");


    do { if(VAR_10.grbitProtocol & VAR_2) { FUNC_3("SSL 2 client" "\n"); VAR_10.grbitProtocol &= ~VAR_2; } }while(0);
    do { if(VAR_10.grbitProtocol & VAR_3) { FUNC_3("SSL 3 client" "\n"); VAR_10.grbitProtocol &= ~VAR_3; } }while(0);
    do { if(VAR_10.grbitProtocol & VAR_4) { FUNC_3("TLS 1.0 client" "\n"); VAR_10.grbitProtocol &= ~VAR_4; } }while(0);
    do { if(VAR_10.grbitProtocol & VAR_5) { FUNC_3("TLS 1.1 client" "\n"); VAR_10.grbitProtocol &= ~VAR_5; } }while(0);
    do { if(VAR_10.grbitProtocol & VAR_6) { FUNC_3("TLS 1.2 client" "\n"); VAR_10.grbitProtocol &= ~VAR_6; } }while(0);
    do { if(VAR_10.grbitProtocol & VAR_7) { FUNC_3("TLS 1.3 client" "\n"); VAR_10.grbitProtocol &= ~VAR_7; } }while(0);


    if(VAR_10.grbitProtocol)
        FUNC_3("Unknown flags: %x\n", VAR_10.grbitProtocol);
}
