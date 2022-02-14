
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int len; char* buf; } ;
typedef TYPE_1__ WSABUF ;
typedef scalar_t__ UCHAR ;
typedef int SOCKET ;
typedef unsigned int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,unsigned int) ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__ const*,scalar_t__*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int ,TYPE_1__*,int,unsigned int*,unsigned int*,int *,int *) ;
 int FUNC_6 (int ,TYPE_1__*,int,unsigned int*,int ,int *,int *) ;

__attribute__((used)) static UCHAR FUNC_7(SOCKET VAR_11, const UCHAR *VAR_12,
 const UCHAR *VAR_13)
{
    UCHAR VAR_14[VAR_2 + VAR_0 * 2], VAR_15;
    int VAR_16;
    unsigned int VAR_17 = 0;
    DWORD VAR_18, VAR_19, VAR_20 = 0;
    WSABUF VAR_21;

    VAR_14[0] = VAR_4;
    VAR_14[1] = 0;

    VAR_17 += FUNC_3(VAR_12, &VAR_14[VAR_2]);
    VAR_17 += FUNC_3(VAR_13, &VAR_14[VAR_2 + VAR_17]);

    FUNC_2(&VAR_14[2], VAR_17);

    VAR_21.len = VAR_17 + VAR_2;
    VAR_21.buf = (char*)VAR_14;

    VAR_16 = FUNC_6(VAR_11, &VAR_21, 1, &VAR_18, 0, ((void*)0), ((void*)0));
    if(VAR_16 < 0 || VAR_18 < VAR_17 + VAR_2)
    {
        FUNC_0("send failed\n");
        return VAR_9;
    }





    VAR_21.len = VAR_2 + 1;
    VAR_16 = FUNC_5(VAR_11, &VAR_21, 1, &VAR_19, &VAR_20, ((void*)0), ((void*)0));
    if (VAR_16 < 0 || VAR_19 < VAR_2)
        VAR_15 = VAR_9;
    else if (VAR_14[0] == VAR_3)
    {
        if (VAR_16 == VAR_2 + 1)
        {
            switch (VAR_14[VAR_2])
            {
                case 128:
                    VAR_15 = VAR_8;
                    break;
                default:
                    VAR_15 = VAR_7;
            }
        }
        else
            VAR_15 = VAR_7;
    }
    else if (VAR_14[0] == VAR_5)
    {
        FUNC_1("Got a session retarget, can't deal\n");
        VAR_15 = VAR_7;
    }
    else if (VAR_14[0] == VAR_1)
        VAR_15 = VAR_6;
    else
        VAR_15 = VAR_10;

    FUNC_4("returning 0x%02x\n", VAR_15);
    return VAR_15;
}
