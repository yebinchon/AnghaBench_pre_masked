
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int uri; } ;
typedef TYPE_1__ parse_data ;
struct TYPE_16__ {int canon_len; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;


 int FUNC_0 (char*,TYPE_1__ const*,int ) ;
 int FUNC_1 (char*,TYPE_1__ const*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_8(const parse_data *VAR_1, DWORD VAR_2) {
    Uri VAR_3;

    FUNC_7(&VAR_3, 0, sizeof(Uri));

    FUNC_1("(%p %x): Beginning to compute canonicalized length for URI %s\n", VAR_1, VAR_2,
            FUNC_6(VAR_1->uri));

    if(!FUNC_5(VAR_1, &VAR_3, VAR_2, VAR_0)) {
        FUNC_0("(%p %x): Failed to compute URI scheme length.\n", VAR_1, VAR_2);
        return -1;
    }

    if(!FUNC_3(VAR_1, &VAR_3, VAR_2, VAR_0)) {
        FUNC_0("(%p %x): Failed to compute URI hierpart length.\n", VAR_1, VAR_2);
        return -1;
    }

    if(!FUNC_4(VAR_1, &VAR_3, VAR_2, VAR_0)) {
        FUNC_0("(%p %x): Failed to compute query string length.\n", VAR_1, VAR_2);
        return -1;
    }

    if(!FUNC_2(VAR_1, &VAR_3, VAR_2, VAR_0)) {
        FUNC_0("(%p %x): Failed to compute fragment length.\n", VAR_1, VAR_2);
        return -1;
    }

    FUNC_1("(%p %x): Finished computing canonicalized URI length. length=%d\n", VAR_1, VAR_2, VAR_3.canon_len);

    return VAR_3.canon_len;
}
