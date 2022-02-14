
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {int start; int end; } ;
struct TYPE_8__ {int length; TYPE_1__* item; } ;
struct TYPE_7__ {int ch; } ;
typedef int SIZE_T ;
typedef TYPE_2__ IsolatedRun ;
typedef TYPE_3__ BracketPair ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_1 (int ,int) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_3__*,unsigned int,int,int ) ;
 int FUNC_5 (void**,int *,unsigned int,int) ;

__attribute__((used)) static BracketPair *FUNC_6(IsolatedRun *VAR_2)
{
    WCHAR *VAR_3;
    int *VAR_4;
    int VAR_5 = VAR_2->length;
    unsigned int VAR_6 = 0;
    BracketPair *VAR_7 = ((void*)0);
    SIZE_T VAR_8 = 0;
    int VAR_9;

    VAR_3 = FUNC_2(VAR_2->length * sizeof(*VAR_3));
    VAR_4 = FUNC_2(VAR_2->length * sizeof(*VAR_4));

    for (VAR_9 = 0; VAR_9 < VAR_2->length; VAR_9++)
    {
        unsigned short VAR_10 = FUNC_1(VAR_0, VAR_2->item[VAR_9].ch);

        if (!VAR_10)
            continue;

        if ((VAR_10 >> 8) == 0)
        {
            --VAR_5;
            VAR_3[VAR_5] = VAR_2->item[VAR_9].ch + (signed char)(VAR_10 & 0xff);

            if (VAR_3[VAR_5] == 0x232a)
                VAR_3[VAR_5] = 0x3009;
            VAR_4[VAR_5] = VAR_9;
        }
        else if ((VAR_10 >> 8) == 1)
        {
            unsigned int VAR_11;

            for (VAR_11 = VAR_5; VAR_11 < VAR_2->length; ++VAR_11)
            {
                WCHAR VAR_12 = VAR_2->item[VAR_9].ch;

                if (VAR_12 == 0x232a)
                    VAR_12 = 0x3009;

                if (VAR_12 != VAR_3[VAR_11])
                    continue;

                if (!(FUNC_5((void **)&VAR_7, &VAR_8, VAR_6 + 2, sizeof(*VAR_7))))
                    FUNC_0("Failed to grow output array.\n");

                VAR_7[VAR_6].start = VAR_4[VAR_11];
                VAR_7[VAR_6].end = VAR_9;
                ++VAR_6;

                VAR_7[VAR_6].start = -1;
                VAR_5 = VAR_11 + 1;
                break;
            }
        }
    }

    FUNC_3(VAR_3);
    FUNC_3(VAR_4);

    if (!VAR_6)
        return ((void*)0);

    FUNC_4(VAR_7, VAR_6, sizeof(*VAR_7), VAR_1);

    return VAR_7;
}
