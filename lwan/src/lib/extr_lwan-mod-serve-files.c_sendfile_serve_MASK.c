
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fd; scalar_t__ size; } ;
struct TYPE_3__ {size_t size; int fd; } ;
struct sendfile_cache_data {TYPE_2__ uncompressed; TYPE_1__ compressed; } ;
struct lwan_request {int flags; } ;
struct lwan_key_value {int dummy; } ;
struct file_cache_entry {struct sendfile_cache_data sendfile_cache_data; } ;
typedef scalar_t__ off_t ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lwan_request*,scalar_t__*,scalar_t__*,scalar_t__) ;
 struct lwan_key_value VAR_8 ;
 scalar_t__ FUNC_2 (struct lwan_request*) ;
 int FUNC_3 (struct lwan_request*,char*,size_t,int ) ;
 int FUNC_4 (struct lwan_request*,int,scalar_t__,size_t,char*,size_t) ;
 size_t FUNC_5 (struct lwan_request*,int,struct file_cache_entry*,size_t,struct lwan_key_value const*,char*) ;

__attribute__((used)) static enum lwan_http_status FUNC_6(struct lwan_request *VAR_9,
                                            void *VAR_10)
{
    const struct lwan_key_value *VAR_11;
    struct file_cache_entry *VAR_12 = VAR_10;
    struct sendfile_cache_data *VAR_13 = &VAR_12->sendfile_cache_data;
    char VAR_14[VAR_0];
    size_t VAR_15;
    enum lwan_http_status VAR_16;
    off_t VAR_17, VAR_18;
    size_t VAR_19;
    int VAR_20;

    if (VAR_13->compressed.size && (VAR_9->flags & VAR_6)) {
        VAR_17 = 0;
        VAR_18 = (off_t)VAR_13->compressed.size;

        VAR_11 = &VAR_8;
        VAR_20 = VAR_13->compressed.fd;
        VAR_19 = VAR_13->compressed.size;

        VAR_16 = VAR_3;
    } else {
        VAR_16 =
            FUNC_1(VAR_9, &VAR_17, &VAR_18, (off_t)VAR_13->uncompressed.size);
        if (FUNC_0(VAR_16 == VAR_4))
            return VAR_4;

        VAR_11 = ((void*)0);
        VAR_20 = VAR_13->uncompressed.fd;
        VAR_19 = (size_t)(VAR_18 - VAR_17);
    }
    if (FUNC_0(VAR_20 < 0)) {
        switch (-VAR_20) {
        case 130:
            return VAR_1;
        case 129:
        case 128:
            return VAR_5;
        default:
            return VAR_2;
        }
    }

    VAR_15 = FUNC_5(VAR_9, VAR_16, VAR_12, VAR_19,
                                 VAR_11, VAR_14);
    if (FUNC_0(!VAR_15))
        return VAR_2;

    if (FUNC_2(VAR_9) == VAR_7) {
        FUNC_3(VAR_9, VAR_14, VAR_15, 0);
    } else {
        FUNC_4(VAR_9, VAR_20, VAR_17, (size_t)VAR_18, VAR_14, VAR_15);
    }

    return VAR_16;
}
