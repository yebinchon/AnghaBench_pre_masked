
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int digest; } ;
typedef int PBYTE ;
typedef TYPE_1__ MD5_CTX ;
typedef unsigned char BYTE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(const BYTE *VAR_0, const char *VAR_1, PBYTE VAR_2)
{
    MD5_CTX VAR_3;

    FUNC_1(&VAR_3);
    FUNC_2(&VAR_3, VAR_0, 16);
    FUNC_2(&VAR_3, (const unsigned char*)VAR_1, FUNC_3(VAR_1)+1);
    FUNC_0(&VAR_3);
    FUNC_4(VAR_2, VAR_3.digest, 16);
}
