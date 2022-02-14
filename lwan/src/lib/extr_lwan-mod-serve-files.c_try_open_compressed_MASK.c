
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; scalar_t__ st_size; int st_mode; } ;
struct serve_files_priv {int root_fd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*,int,char*,char const*) ;
 int FUNC_8 (struct serve_files_priv const*,int,size_t) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3,
                               const struct serve_files_priv *VAR_4,
                               const struct stat *VAR_5,
                               size_t *VAR_6)
{
    char VAR_7[VAR_1];
    struct stat VAR_8;
    int VAR_9, VAR_10;


    VAR_9 = FUNC_7(VAR_7, VAR_1, "%s.gz", VAR_3 + 1);
    if (FUNC_1(VAR_9 < 0 || VAR_9 >= VAR_1))
        goto out;

    VAR_10 = FUNC_6(VAR_4->root_fd, VAR_7, VAR_2);
    if (FUNC_1(VAR_10 < 0))
        goto out;

    VAR_9 = FUNC_3(VAR_10, &VAR_8);
    if (FUNC_1(VAR_9 < 0))
        goto close_and_out;

    if (FUNC_1(VAR_8.st_mtime < VAR_5->st_mtime))
        goto close_and_out;

    if (FUNC_1(!FUNC_5(VAR_8.st_mode)))
        goto close_and_out;

    if (FUNC_0(FUNC_4((size_t)VAR_8.st_size,
                                     (size_t)VAR_5->st_size))) {
        *VAR_6 = (size_t)VAR_8.st_size;

        FUNC_8(VAR_4, VAR_10, *VAR_6);

        return VAR_10;
    }

close_and_out:
    FUNC_2(VAR_10);
out:
    *VAR_6 = 0;
    return -VAR_0;
}
