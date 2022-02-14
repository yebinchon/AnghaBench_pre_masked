
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int suffix ;
struct nk_image {int dummy; } ;
struct TYPE_4__ {struct nk_image default_file; } ;
struct media {TYPE_2__ icons; TYPE_1__* group; struct file* files; } ;
struct file {char* suffix; size_t group; } ;
struct TYPE_3__ {struct nk_image* icon; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static struct nk_image*
FUNC_1(struct media *VAR_1, const char *VAR_2)
{
    int VAR_3 = 0;
    const char *VAR_4 = VAR_2;
    char VAR_5[4];
    int VAR_6 = 0;
    FUNC_0(VAR_5, 0, sizeof(VAR_5));


    while (*VAR_4++ != '\0') {
        if (VAR_6 && VAR_3 < 3)
            VAR_5[VAR_3++] = *VAR_4;

        if (*VAR_4 == '.') {
            if (VAR_6){
                VAR_6 = 0;
                break;
            }
            VAR_6 = 1;
        }
    }


    for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_6; ++VAR_3) {
        struct file *VAR_7 = &VAR_1->files[VAR_3];
        {
            const char *VAR_8 = VAR_7->suffix;
            VAR_4 = VAR_5;
            while (VAR_8 && *VAR_8 && *VAR_4 && *VAR_4 == *VAR_8) {
                VAR_4++; VAR_8++;
            }


            if (VAR_8 && *VAR_4 == '\0' && *VAR_8 == '\0')
                return VAR_1->group[VAR_7->group].icon;
        }
    }
    return &VAR_1->icons.default_file;
}
