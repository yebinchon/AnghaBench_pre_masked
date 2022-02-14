
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; int st_mode; } ;
struct TYPE_2__ {char* icon; char* icon_alt; char* type; int size; char* unit; char* name; char const* zebra_class; } ;
struct file_list {TYPE_1__ file_list; int full_path; } ;
struct dirent {char* d_name; } ;
struct coro {int dummy; } ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct coro*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,char*,struct stat*,int ) ;
 char* FUNC_6 (char*) ;
 int * FUNC_7 (int ) ;
 struct dirent* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct coro *VAR_0, void *VAR_1)
{
    static const char *VAR_2[] = {"odd", "even"};
    struct file_list *VAR_3 = VAR_1;
    struct dirent *VAR_4;
    int VAR_5 = 0;
    DIR *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_7(VAR_3->full_path);
    if (!VAR_6)
        return 0;

    VAR_7 = FUNC_4(VAR_6);
    if (VAR_7 < 0)
        goto out;

    while ((VAR_4 = FUNC_8(VAR_6))) {
        struct stat VAR_8;

        if (VAR_4->d_name[0] == '.')
            continue;

        if (FUNC_5(VAR_7, VAR_4->d_name, &VAR_8, 0) < 0)
            continue;

        if (FUNC_0(VAR_8.st_mode)) {
            VAR_3->file_list.icon = "folder";
            VAR_3->file_list.icon_alt = "DIR";
            VAR_3->file_list.type = "directory";
        } else if (FUNC_1(VAR_8.st_mode)) {
            VAR_3->file_list.icon = "file";
            VAR_3->file_list.icon_alt = "FILE";
            VAR_3->file_list.type =
                FUNC_6(VAR_4->d_name);
        } else {
            continue;
        }

        if (VAR_8.st_size < 1024) {
            VAR_3->file_list.size = (int)VAR_8.st_size;
            VAR_3->file_list.unit = "B";
        } else if (VAR_8.st_size < 1024 * 1024) {
            VAR_3->file_list.size = (int)(VAR_8.st_size / 1024);
            VAR_3->file_list.unit = "KiB";
        } else if (VAR_8.st_size < 1024 * 1024 * 1024) {
            VAR_3->file_list.size = (int)(VAR_8.st_size / (1024 * 1024));
            VAR_3->file_list.unit = "MiB";
        } else {
            VAR_3->file_list.size = (int)(VAR_8.st_size / (1024 * 1024 * 1024));
            VAR_3->file_list.unit = "GiB";
        }

        VAR_3->file_list.name = VAR_4->d_name;
        VAR_3->file_list.zebra_class = VAR_2[VAR_5++ % 2];

        if (FUNC_3(VAR_0, 1))
            break;
    }

out:
    FUNC_2(VAR_6);
    return 0;
}
