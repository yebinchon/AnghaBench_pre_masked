
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Face; } ;
struct TYPE_7__ {struct TYPE_7__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PFONT_CACHE_ENTRY ;
typedef scalar_t__ FT_Face ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(FT_Face VAR_3)
{
    PLIST_ENTRY VAR_4, VAR_5;
    PFONT_CACHE_ENTRY VAR_6;

    FUNC_0();

    for (VAR_4 = VAR_2.Flink;
         VAR_4 != &VAR_2;
         VAR_4 = VAR_5)
    {
        VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_1);
        VAR_5 = VAR_4->Flink;

        if (VAR_6->Face == VAR_3)
        {
            FUNC_2(VAR_6);
        }
    }
}
