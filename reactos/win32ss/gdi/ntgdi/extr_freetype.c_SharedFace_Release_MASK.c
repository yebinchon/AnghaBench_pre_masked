
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* family_name; } ;
struct TYPE_6__ {scalar_t__ RefCount; int UserLanguage; int EnglishUS; int Memory; TYPE_3__* Face; } ;
typedef TYPE_1__* PSHARED_FACE ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_9(PSHARED_FACE VAR_1)
{
    FUNC_4();
    FUNC_0(VAR_1->RefCount > 0);

    if (VAR_1->RefCount <= 0)
        return;

    --VAR_1->RefCount;
    if (VAR_1->RefCount == 0)
    {
        FUNC_1("Releasing SharedFace for %s\n", VAR_1->Face->family_name ? VAR_1->Face->family_name : "<NULL>");
        FUNC_6(VAR_1->Face);
        FUNC_3(VAR_1->Face);
        FUNC_8(VAR_1->Memory);
        FUNC_7(&VAR_1->EnglishUS);
        FUNC_7(&VAR_1->UserLanguage);
        FUNC_2(VAR_1, VAR_0);
    }
    FUNC_5();
}
