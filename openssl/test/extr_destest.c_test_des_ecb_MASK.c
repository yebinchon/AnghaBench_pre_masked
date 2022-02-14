
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef int DES_cblock ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (int ,int,int ,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int * VAR_5 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(int VAR_6)
{
    DES_key_schedule VAR_7;
    DES_cblock VAR_8, VAR_9, VAR_10;
    char VAR_11[VAR_0], VAR_12[VAR_0];

    FUNC_1(&VAR_4[VAR_6], &VAR_7);
    FUNC_4(VAR_8, VAR_5[VAR_6], 8);
    FUNC_5(VAR_9, 0, 8);
    FUNC_5(VAR_10, 0, 8);
    FUNC_0(&VAR_8, &VAR_9, &VAR_7, VAR_2);
    FUNC_0(&VAR_9, &VAR_10, &VAR_7, VAR_1);

    if (!FUNC_3(VAR_9, 8, VAR_3[VAR_6], 8)) {
        FUNC_2("Encryption error %2d k=%s p=%s", VAR_6 + 1,
                  FUNC_6(VAR_4[VAR_6], VAR_11), FUNC_6(VAR_8, VAR_12));
        return 0;
    }
    if (!FUNC_3(VAR_8, 8, VAR_10, 8)) {
        FUNC_2("Decryption error %2d k=%s p=%s", VAR_6 + 1,
                  FUNC_6(VAR_4[VAR_6], VAR_11), FUNC_6(VAR_9, VAR_12));
        return 0;
    }
    return 1;
}
