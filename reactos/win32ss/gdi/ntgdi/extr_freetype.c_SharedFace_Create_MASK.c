
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* family_name; } ;
struct TYPE_6__ {int RefCount; int UserLanguage; int EnglishUS; int Memory; TYPE_2__* Face; } ;
typedef int SHARED_FACE ;
typedef int PSHARED_MEM ;
typedef TYPE_1__* PSHARED_FACE ;
typedef TYPE_2__* FT_Face ;


 int FUNC_0 (char*,char*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static PSHARED_FACE
FUNC_4(FT_Face VAR_2, PSHARED_MEM VAR_3)
{
    PSHARED_FACE VAR_4;
    VAR_4 = FUNC_1(VAR_0, sizeof(SHARED_FACE), VAR_1);
    if (VAR_4)
    {
        VAR_4->Face = VAR_2;
        VAR_4->RefCount = 1;
        VAR_4->Memory = VAR_3;
        FUNC_2(&VAR_4->EnglishUS);
        FUNC_2(&VAR_4->UserLanguage);

        FUNC_3(VAR_3);
        FUNC_0("Creating SharedFace for %s\n", VAR_2->family_name ? VAR_2->family_name : "<NULL>");
    }
    return VAR_4;
}
