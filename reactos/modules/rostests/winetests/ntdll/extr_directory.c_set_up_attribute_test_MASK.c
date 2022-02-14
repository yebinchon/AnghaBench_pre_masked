
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const WCHAR ;
struct TYPE_2__ {int attr; int name; } ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int const*,int *) ;
 scalar_t__ FUNC_2 (int const*,int,int ,int *,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int const*,int const*) ;
 int FUNC_7 (int,char*,int ,...) ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_8 (int const*) ;

__attribute__((used)) static void FUNC_9(const WCHAR *VAR_11)
{
    int VAR_12;
    BOOL VAR_13;

    VAR_13 = FUNC_1(VAR_11, ((void*)0));
    FUNC_7(VAR_13, "couldn't create dir %s, error %d\n", FUNC_8(VAR_11), FUNC_3());

    for (VAR_12=0; VAR_12 < VAR_9; VAR_12++) {
        WCHAR VAR_14[VAR_5];

        if (FUNC_5(VAR_10[VAR_12].name, VAR_7) == 0 || FUNC_5(VAR_10[VAR_12].name, VAR_8) == 0)
            continue;
        FUNC_6( VAR_14, VAR_11 );
        FUNC_4( VAR_14, VAR_6 );
        FUNC_4( VAR_14, VAR_10[VAR_12].name );
        if (VAR_10[VAR_12].attr & VAR_1) {
            VAR_13 = FUNC_1(VAR_14, ((void*)0));
            FUNC_7(VAR_13, "couldn't create dir %s, error %d\n", FUNC_8(VAR_14), FUNC_3());
        } else {
            HANDLE VAR_15 = FUNC_2(VAR_14,
                                   VAR_2|VAR_3,
                                   0, ((void*)0), VAR_0,
                                   VAR_10[VAR_12].attr, 0);
            FUNC_7( VAR_15 != VAR_4, "failed to create temp file %s\n", FUNC_8(VAR_14) );
            FUNC_0(VAR_15);
        }
    }
}
