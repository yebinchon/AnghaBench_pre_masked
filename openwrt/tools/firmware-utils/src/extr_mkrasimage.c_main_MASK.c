
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* name; } ;
struct TYPE_7__ {void* name; } ;
struct TYPE_6__ {scalar_t__ size; void* name; } ;
struct TYPE_5__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 void* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 void* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (void*,char*,scalar_t__*) ;
 int FUNC_5 (int ) ;
 void* VAR_11 ;

int FUNC_6(int VAR_12, char *VAR_13[])
{
    int VAR_14;
    VAR_7 = FUNC_0(VAR_13[0]);
    while (1) {
        int VAR_15;

        VAR_15 = FUNC_3(VAR_12, VAR_13, "b:k:o:r:s:v:l:h");
        if (VAR_15 == -1)
            break;

        switch (VAR_15) {
            case 'b':
                VAR_2 = VAR_5;
                break;
            case 'h':
                FUNC_5(VAR_1);
                break;
            case 'k':
                VAR_4.name = VAR_5;
                break;
            case 'o':
                VAR_6.name = VAR_5;
                break;
            case 'r':
                VAR_8.name = VAR_5;
                break;
            case 's':
                FUNC_4(VAR_5, "%u", &VAR_10);
                break;
            case 'v':
                VAR_11 = VAR_5;
                break;
            case 'l':
                FUNC_4(VAR_5, "%u", &VAR_3);
                break;
            default:
                FUNC_5(VAR_0);
                break;
        }
    }

    VAR_14 = FUNC_2();
    if (VAR_14)
        FUNC_5(VAR_0);
    VAR_9.size = VAR_10 < VAR_8.size ? VAR_8.size : VAR_10;
    return FUNC_1();
}
