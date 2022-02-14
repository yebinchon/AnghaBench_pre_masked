
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int ModuleName; int LoadedImageName; } ;
struct module {TYPE_1__ module; } ;
struct image_section_map {int dummy; } ;
struct image_file_map {int dummy; } ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int const* VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct image_file_map*,char*,int ,struct image_section_map*) ;
 scalar_t__ FUNC_3 (struct image_file_map*,int const*,int const) ;
 scalar_t__ FUNC_4 (struct image_file_map*,char const*,int ,int ) ;
 scalar_t__ FUNC_5 (struct image_section_map*) ;
 int FUNC_6 (struct image_section_map*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static BOOL FUNC_8(struct image_file_map* VAR_5, const struct module* VAR_6)
{
    BOOL VAR_7 = VAR_0;
    BOOL VAR_8 = VAR_0;
    struct image_section_map VAR_9, VAR_10;


    if (FUNC_2(VAR_5, ".note.gnu.build-id", VAR_3, &VAR_9))
    {
        const uint32_t* VAR_11;

        VAR_8 = VAR_4;
        VAR_11 = (const uint32_t*)FUNC_5(&VAR_9);
        if (VAR_11 != VAR_1)
        {

            if (VAR_11[2] == VAR_2)
            {
                VAR_7 = FUNC_3(VAR_5, (const BYTE*)(VAR_11 + 3 + ((VAR_11[0] + 3) >> 2)), VAR_11[1]);
            }
        }
        FUNC_6(&VAR_9);
    }

    if (!VAR_7 && FUNC_2(VAR_5, ".gnu_debuglink", VAR_3, &VAR_10))
    {
        const char* VAR_12;

        VAR_8 = VAR_4;
        VAR_12 = (const char*)FUNC_5(&VAR_10);
        if (VAR_12 != VAR_1)
        {






            DWORD VAR_13 = *(const DWORD*)(VAR_12 + ((DWORD_PTR)(FUNC_7(VAR_12) + 4) & ~3));
            VAR_7 = FUNC_4(VAR_5, VAR_12, VAR_6->module.LoadedImageName, VAR_13);
            if (!VAR_7)
                FUNC_0("Couldn't load linked debug file for %s\n",
                     FUNC_1(VAR_6->module.ModuleName));
        }
        FUNC_6(&VAR_10);
    }
    return VAR_8 ? VAR_7 : VAR_4;
}
