
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct TYPE_6__ {int ca_headerpadsize; int ca_maxrequestsize; int ca_maxresponsesize; int ca_maxresponsesize_cached; int ca_maxoperations; int ca_maxrequests; int* ca_rdma_ird; } ;
typedef TYPE_1__ nfs41_channel_attrs ;
typedef int bool_t ;
struct TYPE_7__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_4,
    nfs41_channel_attrs *VAR_5)
{
    uint32_t VAR_6 = 0;
    uint32_t VAR_7 = 1;


    if (!FUNC_1(VAR_4, &VAR_5->ca_headerpadsize))
        return VAR_0;


    if (!FUNC_1(VAR_4, &VAR_5->ca_maxrequestsize))
        return VAR_0;


    if (!FUNC_1(VAR_4, &VAR_5->ca_maxresponsesize))
        return VAR_0;


    if (!FUNC_1(VAR_4, &VAR_5->ca_maxresponsesize_cached))
        return VAR_0;


    if (!FUNC_1(VAR_4, &VAR_5->ca_maxoperations))
        return VAR_0;


    if (!FUNC_1(VAR_4, &VAR_5->ca_maxrequests))
        return VAR_0;

    if (VAR_4->x_op == VAR_3) {

        if (VAR_5->ca_rdma_ird)
        {
            if (!FUNC_1(VAR_4, &VAR_7))
                return VAR_0;
            return FUNC_1(VAR_4, VAR_5->ca_rdma_ird);
        }
        else {
            return FUNC_1(VAR_4, &VAR_6);
        }
    }
    else if (VAR_4->x_op == VAR_2) {
            return VAR_1;
    }
    else {
        FUNC_0("%s: xdr->x_op %d not supported.\n",
            "xdr_channel_attrs4", VAR_4->x_op);
        return VAR_0;
    }
}
