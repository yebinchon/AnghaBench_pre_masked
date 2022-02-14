
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static bool
FUNC_8(SSL_CTX *VAR_5, bool VAR_6)
{

 EC_KEY *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3);
 if (!VAR_8)
 {
  FUNC_5(VAR_6 ? VAR_1 : VAR_2,
    (FUNC_6(VAR_0),
     FUNC_7("ECDH: unrecognized curve name: %s", VAR_3)));
  return 0;
 }

 VAR_7 = FUNC_1(VAR_8);
 if (!VAR_7)
 {
  FUNC_5(VAR_6 ? VAR_1 : VAR_2,
    (FUNC_6(VAR_0),
     FUNC_7("ECDH: could not create key")));
  return 0;
 }

 FUNC_3(VAR_5, VAR_4);
 FUNC_4(VAR_5, VAR_7);
 FUNC_0(VAR_7);


 return 1;
}
