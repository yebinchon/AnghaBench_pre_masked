
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media {int dummy; } ;
struct file_browser {char* home; char* directory; char* desktop; int dir_count; void* directories; int file_count; void* files; struct media* media; } ;
struct TYPE_2__ {char* pw_dir; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,int,int *) ;
 char* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct file_browser*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,int ) ;

__attribute__((used)) static void
FUNC_8(struct file_browser *VAR_1, struct media *VAR_2)
{
    FUNC_4(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->media = VAR_2;
    {

        const char *VAR_3 = FUNC_1("HOME");



        if (!VAR_3) VAR_3 = FUNC_2(FUNC_3())->pw_dir;
        {
            size_t VAR_4;
            FUNC_7(VAR_1->home, VAR_3, VAR_0);
            VAR_4 = FUNC_6(VAR_1->home);
            FUNC_5(VAR_1->home + VAR_4, "/");
            FUNC_5(VAR_1->directory, VAR_1->home);
        }

        {
            size_t VAR_5;
            FUNC_5(VAR_1->desktop, VAR_1->home);
            VAR_5 = FUNC_6(VAR_1->desktop);
            FUNC_5(VAR_1->desktop + VAR_5, "desktop/");
        }
        VAR_1->files = FUNC_0(VAR_1->directory, 0, &VAR_1->file_count);
        VAR_1->directories = FUNC_0(VAR_1->directory, 1, &VAR_1->dir_count);
    }
}
