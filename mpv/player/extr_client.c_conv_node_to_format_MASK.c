
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct m_option {TYPE_1__* type; } ;
struct TYPE_7__ {double int64; scalar_t__ double_; } ;
struct TYPE_6__ {scalar_t__ format; TYPE_3__ u; } ;
typedef TYPE_2__ mpv_node ;
typedef scalar_t__ mpv_format ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct m_option* FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,TYPE_3__*,int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_4, mpv_format VAR_5, mpv_node *VAR_6)
{
    if (VAR_5 == VAR_6->format) {
        const struct m_option *VAR_7 = FUNC_0(VAR_5);
        FUNC_1(VAR_4, &VAR_6->u, VAR_7->type->size);
        return 1;
    }
    if (VAR_5 == VAR_2 && VAR_6->format == VAR_3) {
        *(double *)VAR_4 = VAR_6->u.int64;
        return 1;
    }
    if (VAR_5 == VAR_3 && VAR_6->format == VAR_2) {
        if (VAR_6->u.double_ >= VAR_1 && VAR_6->u.double_ <= VAR_0) {
            *(int64_t *)VAR_4 = VAR_6->u.double_;
            return 1;
        }
    }
    return 0;
}
