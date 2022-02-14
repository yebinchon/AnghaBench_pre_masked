
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int (* decode ) (int *,TYPE_3__*) ;} ;
typedef TYPE_1__ op_table_entry ;
struct TYPE_6__ {unsigned char* tag; scalar_t__ status; scalar_t__ resarray_count; TYPE_3__* resarray; int tag_len; } ;
typedef TYPE_2__ nfs41_compound_res ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_7__ {scalar_t__ op; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,char**,int *,int ) ;
 int FUNC_5 (int *,scalar_t__*) ;

bool_t FUNC_6(
    XDR *VAR_4,
    caddr_t *VAR_5)
{
    nfs41_compound_res *VAR_6 = (nfs41_compound_res*)VAR_5;
    uint32_t VAR_7, VAR_8, VAR_9;
    const op_table_entry *VAR_10;
    unsigned char *VAR_11 = VAR_6->tag;

    if (!FUNC_5(VAR_4, &VAR_6->status))
        return VAR_0;

    if (!FUNC_4(VAR_4, (char **)&VAR_11, &VAR_6->tag_len, VAR_2))
        return VAR_0;

    VAR_8 = VAR_6->resarray_count;
    if (!FUNC_5(VAR_4, &VAR_6->resarray_count))
        return VAR_0;


    if (VAR_6->resarray_count > VAR_8) {
        FUNC_0("reply with %u operations, only sent %u!\n",
            VAR_6->resarray_count, VAR_8);
        return VAR_0;
    } else if (VAR_6->resarray_count < VAR_8 &&
        VAR_6->status == VAR_1) {


        FUNC_0("successful reply with only %u operations, sent %u!\n",
            VAR_6->resarray_count, VAR_8);
        return VAR_0;
    }

    for (VAR_7 = 0; VAR_7 < VAR_6->resarray_count; VAR_7++)
    {
        VAR_9 = VAR_6->resarray[VAR_7].op;
        if (!FUNC_5(VAR_4, &VAR_6->resarray[VAR_7].op))
            return VAR_0;


        if (VAR_6->resarray[VAR_7].op != VAR_9) {
            FUNC_0("reply with %s in operation %u, expected %s!\n",
                FUNC_1(VAR_6->resarray[VAR_7].op), VAR_7+1,
                FUNC_1(VAR_9));
            return VAR_0;
        }

        VAR_10 = FUNC_2(VAR_6->resarray[VAR_7].op);
        if (VAR_10 == ((void*)0) || VAR_10->decode == ((void*)0))
            return VAR_0;
        if (!VAR_10->decode(VAR_4, &VAR_6->resarray[VAR_7]))
            return VAR_0;
    }
    return VAR_3;
}
