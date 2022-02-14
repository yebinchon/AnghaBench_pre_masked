
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* pvBuffer; unsigned int cbBuffer; } ;
typedef TYPE_1__ SecBuffer ;
typedef int SOCKET ;


 int FUNC_0 (int ,char*,unsigned int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(SOCKET VAR_0, SecBuffer *VAR_1)
{
    unsigned VAR_2 = 0;

    while (1)
    {
        unsigned char *VAR_3 = VAR_1->pvBuffer;
        unsigned VAR_4 = 0;
        int VAR_5;

        VAR_5 = FUNC_0(VAR_0, (char *)VAR_3+VAR_2, VAR_1->cbBuffer-VAR_2, 0);
        if (VAR_5 == -1)
        {
            FUNC_1("recv failed\n");
            return -1;
        }
        else if(VAR_5 == 0)
        {
            FUNC_1("connection closed\n");
            return -1;
        }
        VAR_2 += VAR_5;

        while (VAR_4 < VAR_2)
        {
            unsigned VAR_6 = 5 + ((VAR_3[3]<<8) | VAR_3[4]);
            VAR_4 += VAR_6;
            VAR_3 += VAR_6;
        }

        if (VAR_4 == VAR_2)
            break;
    }

    VAR_1->cbBuffer = VAR_2;

    return VAR_2;
}
