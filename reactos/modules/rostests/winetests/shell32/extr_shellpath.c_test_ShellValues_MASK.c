
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shellExpectedValues {int numTypes; int* types; int folder; } ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int ,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(const struct shellExpectedValues VAR_3[],
 int VAR_4, BOOL VAR_5)
{
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    {
        BYTE VAR_7;
        int VAR_8;
        BOOL VAR_9 = VAR_0;

        if (VAR_2)
        {
            VAR_7 = FUNC_3(VAR_3[VAR_6].folder);
            for (VAR_8 = 0; !VAR_9 && VAR_8 < VAR_3[VAR_6].numTypes; VAR_8++)
                if (VAR_3[VAR_6].types[VAR_8] == VAR_7)
                    VAR_9 = VAR_1;
            FUNC_2(VAR_9 || VAR_5 || FUNC_0(VAR_7 == 0xff) ,
             "%s has unexpected type %d (0x%02x)\n",
             FUNC_1(VAR_3[VAR_6].folder), VAR_7, VAR_7);
        }
        VAR_7 = FUNC_4(VAR_3[VAR_6].folder);
        for (VAR_8 = 0, VAR_9 = VAR_0; !VAR_9 &&
         VAR_8 < VAR_3[VAR_6].numTypes; VAR_8++)
            if (VAR_3[VAR_6].types[VAR_8] == VAR_7)
                VAR_9 = VAR_1;
        FUNC_2(VAR_9 || VAR_5 || FUNC_0(VAR_7 == 0xff) ,
         "%s has unexpected type %d (0x%02x)\n",
         FUNC_1(VAR_3[VAR_6].folder), VAR_7, VAR_7);
        switch (VAR_7)
        {
            case 129:
            case 131:
            case 130:
            case 128:
                FUNC_5(VAR_5, VAR_3[VAR_6].folder);
                FUNC_6(VAR_5, VAR_3[VAR_6].folder);
                break;
        }
    }
}
