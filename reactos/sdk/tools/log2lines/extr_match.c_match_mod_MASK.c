
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_3__ {void* RelBase; scalar_t__ ImageBase; void* Size; } ;
typedef TYPE_1__* PLIST_MEMBER ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_2, char *VAR_3, int VAR_4)
{
    static int VAR_5 = 0;
    char VAR_6[VAR_0];
    UINT VAR_7;
    UINT VAR_8;
    PLIST_MEMBER VAR_9;

    int VAR_10;

    if ( VAR_4 ) return VAR_4;
    if ( (VAR_10 = FUNC_2(VAR_3," Base Size %5s", VAR_6)) == 1 )
    {
        FUNC_1(1, "Module relocate list:\n");
        VAR_5 = 1;
        return 0;
    }
    switch (VAR_5)
    {
    case 1:
        if ( (VAR_10 = FUNC_2(VAR_3,"%x %x %20s", &VAR_7, &VAR_8, VAR_6)) == 3 )
        {
            if (( VAR_9 = FUNC_0(&VAR_1, VAR_6) ))
            {
                VAR_9->RelBase = VAR_7;
                VAR_9->Size = VAR_8;
                FUNC_1(1, "Relocated: %s %p -> %p\n", VAR_6, (void*)VAR_9->ImageBase, (void*)VAR_9->RelBase);
            }
            return 0;
        }
        else
        {
            VAR_5 = 0;
        }
        break;
    default:
        VAR_5 = 0;
    }
    return 1;
}
