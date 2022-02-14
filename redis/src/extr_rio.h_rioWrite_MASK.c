
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; size_t max_processing_chunk; scalar_t__ (* write ) (TYPE_1__*,void const*,size_t) ;size_t processed_bytes; int (* update_cksum ) (TYPE_1__*,void const*,size_t) ;} ;
typedef TYPE_1__ rio ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,void const*,size_t) ;

__attribute__((used)) static inline size_t FUNC_2(rio *VAR_1, const void *VAR_2, size_t VAR_3) {
    if (VAR_1->flags & VAR_0) return 0;
    while (VAR_3) {
        size_t VAR_4 = (VAR_1->max_processing_chunk && VAR_1->max_processing_chunk < VAR_3) ? VAR_1->max_processing_chunk : VAR_3;
        if (VAR_1->update_cksum) VAR_1->update_cksum(VAR_1,VAR_2,VAR_4);
        if (VAR_1->write(VAR_1,VAR_2,VAR_4) == 0) {
            VAR_1->flags |= VAR_0;
            return 0;
        }
        VAR_2 = (char*)VAR_2 + VAR_4;
        VAR_3 -= VAR_4;
        VAR_1->processed_bytes += VAR_4;
    }
    return 1;
}
