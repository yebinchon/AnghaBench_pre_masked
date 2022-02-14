
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md ;
typedef int expected ;
typedef int buf ;
typedef int SHA_CTX ;
typedef int RC4_KEY ;


 int FUNC_0 (int *,int,unsigned char*,unsigned char*) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_5 (unsigned char*,int,unsigned char*,int) ;
 int ** VAR_1 ;
 int FUNC_6 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_7(void)
{
    RC4_KEY VAR_2;
    unsigned char VAR_3[513];
    SHA_CTX VAR_4;
    unsigned char VAR_5[VAR_0];
    int VAR_6;
    static unsigned char VAR_7[] = {
        0xa4, 0x7b, 0xcc, 0x00, 0x3d, 0xd0, 0xbd, 0xe1, 0xac, 0x5f,
        0x12, 0x1e, 0x45, 0xbc, 0xfb, 0x1a, 0xa1, 0xf2, 0x7f, 0xc5
    };

    FUNC_1(&VAR_2, VAR_1[0][0], &(VAR_1[3][1]));
    FUNC_6(VAR_3, 0, sizeof(VAR_3));
    FUNC_3(&VAR_4);
    for (VAR_6 = 0; VAR_6 < 2571; VAR_6++) {
        FUNC_0(&VAR_2, sizeof(VAR_3), VAR_3, VAR_3);
        FUNC_4(&VAR_4, VAR_3, sizeof(VAR_3));
    }
    FUNC_2(VAR_5, &VAR_4);

    return FUNC_5(VAR_5, sizeof(VAR_5), VAR_7, sizeof(VAR_7));
}
