
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ value; scalar_t__ len; } ;
struct TYPE_7__ {size_t len; void* value; } ;
struct TYPE_6__ {size_t len; void* value; } ;
struct TYPE_5__ {size_t len; void* value; } ;
struct mmap_cache_data {TYPE_4__ uncompressed; TYPE_3__ deflated; TYPE_2__ brotli; TYPE_1__ zstd; } ;
struct lwan_request {int flags; } ;
struct lwan_key_value {int dummy; } ;
struct file_cache_entry {struct mmap_cache_data mmap_cache_data; } ;
typedef scalar_t__ off_t ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lwan_key_value VAR_3 ;
 int FUNC_0 (struct lwan_request*,scalar_t__*,scalar_t__*,scalar_t__) ;
 struct lwan_key_value VAR_4 ;
 int FUNC_1 (struct lwan_request*,struct file_cache_entry*,struct lwan_key_value const*,void*,size_t,int) ;
 struct lwan_key_value VAR_5 ;

__attribute__((used)) static enum lwan_http_status FUNC_2(struct lwan_request *VAR_6,
                                        void *VAR_7)
{
    const struct lwan_key_value *VAR_8;
    struct file_cache_entry *VAR_9 = VAR_7;
    struct mmap_cache_data *VAR_10 = &VAR_9->mmap_cache_data;
    void *VAR_11;
    size_t VAR_12;
    enum lwan_http_status VAR_13;
    if (VAR_10->deflated.len && (VAR_6->flags & VAR_1)) {
        VAR_11 = VAR_10->deflated.value;
        VAR_12 = VAR_10->deflated.len;
        VAR_8 = &VAR_4;

        VAR_13 = 129;
    } else {
        off_t VAR_14, VAR_15;

        VAR_13 =
            FUNC_0(VAR_6, &VAR_14, &VAR_15, (off_t)VAR_10->uncompressed.len);
        switch (VAR_13) {
        case 128:
        case 129:
            VAR_11 = (char *)VAR_10->uncompressed.value + VAR_14;
            VAR_12 = (size_t)(VAR_15 - VAR_14);
            VAR_8 = ((void*)0);
            break;

        default:
            return VAR_13;
        }
    }

    return FUNC_1(VAR_6, VAR_9, VAR_8, VAR_11, VAR_12, VAR_13);
}
