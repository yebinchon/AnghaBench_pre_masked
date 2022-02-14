
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ,char*,int,int ) ;

__attribute__((used)) static size_t
FUNC_3(SOCKET VAR_0, void *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = 0;

    while (VAR_3 < VAR_2) {
        size_t VAR_4;

        VAR_4 = FUNC_2(VAR_0, (char*)VAR_1+VAR_3, 1, 0);
        if (VAR_4 == 0) {
            FUNC_0(0, "redis: recv_line() failed\n");
            FUNC_1(1);
        }
        VAR_3++;
        if (((unsigned char*)VAR_1)[VAR_3-1] == '\n')
            break;
    }

    return VAR_3;
}
