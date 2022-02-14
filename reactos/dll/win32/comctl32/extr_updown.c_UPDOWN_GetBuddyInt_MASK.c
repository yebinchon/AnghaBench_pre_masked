
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_5__ {int Flags; int CurVal; int Base; int Buddy; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (char*,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (scalar_t__*,scalar_t__**,int ) ;

__attribute__((used)) static BOOL FUNC_9 (UPDOWN_INFO *VAR_4)
{
    WCHAR VAR_5[20], VAR_6, *VAR_7, *VAR_8;
    int VAR_9;

    if (!((VAR_4->Flags & VAR_1) && FUNC_2(VAR_4->Buddy)))
        return VAR_0;


    if (FUNC_7(VAR_4)) {
        VAR_9 = FUNC_3(VAR_4->Buddy, VAR_2, 0, 0);
        if(VAR_9 < 0) return VAR_0;
    } else {



        if (FUNC_1(VAR_4->Buddy, VAR_5, FUNC_0(VAR_5)) < 0)
            return VAR_0;

        VAR_6 = FUNC_5();


        for(VAR_7 = VAR_8 = VAR_5; *VAR_7; VAR_7++)
            if(*VAR_7 != VAR_6) *VAR_8++ = *VAR_7;
        *VAR_8 = 0;


        VAR_9 = FUNC_8(VAR_5, &VAR_7, VAR_4->Base);
        if(*VAR_7 || !FUNC_6 (VAR_4, VAR_9)) return VAR_0;
    }

    FUNC_4("new value(%d) from buddy (old=%d)\n", VAR_9, VAR_4->CurVal);
    VAR_4->CurVal = VAR_9;
    return VAR_3;
}
