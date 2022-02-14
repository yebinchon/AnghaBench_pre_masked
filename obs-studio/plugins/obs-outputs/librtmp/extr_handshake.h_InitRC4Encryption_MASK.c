
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int RC4_handle ;
typedef int HMAC_CTX ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ,int *,...) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int *) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7
(uint8_t * VAR_2,
 uint8_t * VAR_3,
 uint8_t * VAR_4, RC4_handle *VAR_5, RC4_handle *VAR_6)
{
    uint8_t VAR_7[VAR_1];

    unsigned int VAR_8 = 0;

    HMAC_CTX VAR_9;

    FUNC_3(VAR_5);
    FUNC_3(VAR_6);

    FUNC_2(VAR_9, VAR_2, 128);
    FUNC_0(VAR_9, VAR_3, 128);



    FUNC_1(VAR_9, VAR_7, VAR_8);


    FUNC_5(VAR_0, "RC4 Out Key: ");
    FUNC_6(VAR_0, VAR_7, 16);

    FUNC_4(*VAR_6, 16, VAR_7);

    FUNC_2(VAR_9, VAR_2, 128);
    FUNC_0(VAR_9, VAR_4, 128);



    FUNC_1(VAR_9, VAR_7, VAR_8);


    FUNC_5(VAR_0, "RC4 In Key: ");
    FUNC_6(VAR_0, VAR_7, 16);

    FUNC_4(*VAR_5, 16, VAR_7);
}
