
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_archive_volume {int seek_to; int src; } ;
struct archive {int dummy; } ;
typedef int int64_t ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int64_t FUNC_2(struct archive *VAR_0, void *VAR_1,
                       int64_t VAR_2, int VAR_3)
{
    struct mp_archive_volume *VAR_4 = VAR_1;
    switch (VAR_3) {
    case 128:
        VAR_4->seek_to = VAR_2;
        break;
    case 130:
        if (VAR_4->seek_to < 0)
            VAR_4->seek_to = FUNC_1(VAR_4->src);
        VAR_4->seek_to += VAR_2;
        break;
    case 129: ;
        int64_t VAR_5 = FUNC_0(VAR_4->src);
        if (VAR_5 < 0)
            return -1;
        VAR_4->seek_to = VAR_5 + VAR_2;
        break;
    default:
        return -1;
    }
    return VAR_4->seek_to;
}
