
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const WCHAR ;
struct TYPE_2__ {int attr; int name; } ;


 int FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int const*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int const*,int const*) ;
 int FUNC_6 (int,char*,int ,scalar_t__) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_7 (int const*) ;

__attribute__((used)) static void FUNC_8(const WCHAR *VAR_8)
{
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
        int VAR_10;
        WCHAR VAR_11[VAR_2];
        if (FUNC_4(VAR_7[VAR_9].name, VAR_4) == 0 || FUNC_4(VAR_7[VAR_9].name, VAR_5) == 0)
            continue;
        FUNC_5( VAR_11, VAR_8 );
        FUNC_3( VAR_11, VAR_3 );
        FUNC_3( VAR_11, VAR_7[VAR_9].name );
        if (VAR_7[VAR_9].attr & VAR_1) {
            VAR_10 = FUNC_2(VAR_11);
            FUNC_6(VAR_10 || (FUNC_1() == VAR_0),
               "Failed to rmdir %s, error %d\n", FUNC_7(VAR_11), FUNC_1());
        } else {
            VAR_10 = FUNC_0(VAR_11);
            FUNC_6(VAR_10 || (FUNC_1() == VAR_0),
               "Failed to rm %s, error %d\n", FUNC_7(VAR_11), FUNC_1());
        }
    }
    FUNC_2(VAR_8);
}
