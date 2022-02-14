
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int FormatDescription; } ;
typedef TYPE_1__ ImageCodecInfo ;
typedef int GpStatus ;
typedef char CHAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int,char const*,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int,TYPE_1__*) ;
 int FUNC_4 (int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int ,int,char*,int,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpStatus VAR_7;
    UINT VAR_8;
    UINT VAR_9;
    ImageCodecInfo *VAR_10;
    int VAR_11;
    int VAR_12;

    static const CHAR VAR_13[] = "BMP";

    VAR_7 = FUNC_4(&VAR_8, &VAR_9);
    FUNC_6(VAR_7, VAR_5);

    VAR_10 = FUNC_1(VAR_9);
    if (!VAR_10)
        return;

    VAR_7 = FUNC_3(VAR_8, VAR_9, ((void*)0));
    FUNC_6(VAR_3, VAR_7);

    VAR_7 = FUNC_3(0, VAR_9, VAR_10);
    FUNC_6(VAR_3, VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_9-1, VAR_10);
    FUNC_6(VAR_3, VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_9+1, VAR_10);
    FUNC_6(VAR_3, VAR_7);

    VAR_7 = FUNC_3(VAR_8, VAR_9, VAR_10);
    FUNC_6(VAR_7, VAR_5);

    VAR_12 = VAR_2;
    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
        {
            CHAR VAR_14[32];

            FUNC_5(VAR_0, 0, VAR_10[VAR_11].FormatDescription, -1,
                                VAR_14, 32, 0, 0);

            if (FUNC_0(VAR_4, 0,
                               VAR_14, -1,
                               VAR_13, -1) == VAR_1) {
                VAR_12 = VAR_6;
                break;
            }
        }
    if (!VAR_12)
        FUNC_7(VAR_2, "No BMP codec found.\n");

    FUNC_2(VAR_10);
}
