
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ioctl; int * write; int * read; } ;
typedef TYPE_1__ mp_stream_p_t ;
struct TYPE_6__ {TYPE_1__* protocol; } ;
typedef TYPE_2__ mp_obj_type_t ;
typedef int mp_obj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_3 ;

const mp_stream_p_t *FUNC_2(mp_obj_t VAR_4, int VAR_5) {
    mp_obj_type_t *VAR_6 = FUNC_0(VAR_4);
    const mp_stream_p_t *VAR_7 = VAR_6->protocol;
    if (VAR_7 == ((void*)0)
        || ((VAR_5 & VAR_1) && VAR_7->read == ((void*)0))
        || ((VAR_5 & VAR_2) && VAR_7->write == ((void*)0))
        || ((VAR_5 & VAR_0) && VAR_7->ioctl == ((void*)0))) {

        FUNC_1(&VAR_3, "stream operation not supported");
    }
    return VAR_7;
}
