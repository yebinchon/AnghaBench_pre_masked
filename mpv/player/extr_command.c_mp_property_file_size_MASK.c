
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {TYPE_1__* demuxer; } ;
struct TYPE_3__ {scalar_t__ filesize; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,void*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct m_property *VAR_4,
                                 int VAR_5, void *VAR_6)
{
    MPContext *VAR_7 = VAR_3;
    if (!VAR_7->demuxer)
        return VAR_2;

    int64_t VAR_8 = VAR_7->demuxer->filesize;
    if (VAR_8 < 0)
        return VAR_2;

    if (VAR_5 == VAR_1) {
        *(char **)VAR_6 = FUNC_0(VAR_8);
        return VAR_0;
    }
    return FUNC_1(VAR_5, VAR_6, VAR_8);
}
