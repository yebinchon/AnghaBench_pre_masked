
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct serve_files_priv {int root_path_len; int serve_precompressed_files; int root_fd; } ;
struct TYPE_4__ {scalar_t__ fd; size_t size; } ;
struct TYPE_3__ {int fd; size_t size; } ;
struct sendfile_cache_data {TYPE_2__ uncompressed; TYPE_1__ compressed; } ;
struct file_cache_entry {int mime_type; struct sendfile_cache_data sendfile_cache_data; } ;





 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (char const*,struct serve_files_priv*,struct stat*,size_t*) ;
 int FUNC_5 (struct serve_files_priv*,int,size_t) ;

__attribute__((used)) static bool FUNC_6(struct file_cache_entry *VAR_2,
                          struct serve_files_priv *VAR_3,
                          const char *VAR_4,
                          struct stat *VAR_5)
{
    struct sendfile_cache_data *VAR_6 = &VAR_2->sendfile_cache_data;
    const char *VAR_7 = VAR_4 + VAR_3->root_path_len;

    VAR_2->mime_type = FUNC_2(VAR_7);

    VAR_6->uncompressed.fd = FUNC_3(VAR_3->root_fd, VAR_7 + 1, VAR_1);
    if (FUNC_1(VAR_6->uncompressed.fd < 0)) {
        switch (VAR_0) {
        case 128:
        case 129:
        case 130:


            VAR_6->uncompressed.fd = VAR_6->compressed.fd = -VAR_0;
            VAR_6->compressed.size = VAR_6->uncompressed.size = 0;

            return 1;
        }

        return 0;
    }


    if (FUNC_0(VAR_3->serve_precompressed_files)) {
        size_t VAR_8;
        int VAR_9 = FUNC_4(VAR_7, VAR_3, VAR_5, &VAR_8);

        VAR_6->compressed.fd = VAR_9;
        VAR_6->compressed.size = VAR_8;
    }

    VAR_6->uncompressed.size = (size_t)VAR_5->st_size;
    FUNC_5(VAR_3, VAR_6->uncompressed.fd, VAR_6->uncompressed.size);

    return 1;
}
