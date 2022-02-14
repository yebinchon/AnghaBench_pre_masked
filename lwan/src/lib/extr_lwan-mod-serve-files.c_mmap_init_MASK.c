
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct serve_files_priv {int root_path_len; int root_fd; } ;
struct TYPE_4__ {scalar_t__ value; size_t len; } ;
struct mmap_cache_data {int deflated; int zstd; TYPE_1__ uncompressed; int brotli; } ;
struct file_cache_entry {int mime_type; struct mmap_cache_data mmap_cache_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (scalar_t__,size_t) ;
 scalar_t__ FUNC_6 (int *,size_t,int ,int ,int,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,char const*,int ) ;
 int FUNC_8 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static bool FUNC_9(struct file_cache_entry *VAR_4,
                      struct serve_files_priv *VAR_5,
                      const char *VAR_6,
                      struct stat *VAR_7)
{
    struct mmap_cache_data *VAR_8 = &VAR_4->mmap_cache_data;
    const char *VAR_9 = VAR_6 + VAR_5->root_path_len;
    int VAR_10;
    bool VAR_11;

    VAR_9 += *VAR_9 == '/';

    VAR_10 = FUNC_7(VAR_5->root_fd, VAR_9, VAR_3);
    if (FUNC_0(VAR_10 < 0))
        return 0;

    VAR_8->uncompressed.value =
        FUNC_6(((void*)0), (size_t)VAR_7->st_size, VAR_2, VAR_1, VAR_10, 0);
    if (FUNC_0(VAR_8->uncompressed.value == VAR_0)) {
        VAR_11 = 0;
        goto close_file;
    }

    FUNC_5(VAR_8->uncompressed.value, (size_t)VAR_7->st_size);

    VAR_8->uncompressed.len = (size_t)VAR_7->st_size;
    FUNC_3(&VAR_8->uncompressed, &VAR_8->deflated);







    VAR_4->mime_type =
        FUNC_4(VAR_6 + VAR_5->root_path_len);

    VAR_11 = 1;

close_file:
    FUNC_2(VAR_10);

    return VAR_11;
}
