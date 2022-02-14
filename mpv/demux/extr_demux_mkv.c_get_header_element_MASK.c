
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mkv_demuxer {int num_headers; struct header_elem* headers; } ;
struct header_elem {scalar_t__ id; scalar_t__ pos; } ;
struct demuxer {struct mkv_demuxer* priv; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mkv_demuxer*,struct header_elem*,int,struct header_elem) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static struct header_elem *FUNC_2(struct demuxer *VAR_2,
                                              uint32_t VAR_3,
                                              int64_t VAR_4)
{
    struct mkv_demuxer *VAR_5 = VAR_2->priv;



    if (!FUNC_1(VAR_3) || VAR_3 == VAR_0)
        return ((void*)0);

    for (int VAR_6 = 0; VAR_6 < VAR_5->num_headers; VAR_6++) {
        struct header_elem *VAR_7 = &VAR_5->headers[VAR_6];



        if (VAR_7->id == VAR_3 && (VAR_3 != VAR_1 ||
                               VAR_7->pos == VAR_4))
            return VAR_7;
    }
    struct header_elem VAR_8 = { .id = VAR_3, .pos = VAR_4 };
    FUNC_0(VAR_5, VAR_5->headers, VAR_5->num_headers, VAR_8);
    return &VAR_5->headers[VAR_5->num_headers - 1];
}
