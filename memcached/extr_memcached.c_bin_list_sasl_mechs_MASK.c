
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ keylen; scalar_t__ bodylen; } ;
struct TYPE_10__ {TYPE_1__ request; } ;
struct TYPE_11__ {int sasl_conn; TYPE_2__ binary_header; } ;
typedef TYPE_3__ conn ;
struct TYPE_12__ {scalar_t__ verbose; int sasl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int *,char*,char*,char*,char const**,unsigned int*,int *) ;
 TYPE_6__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int *,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,char*,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(conn *VAR_5) {

    if (!VAR_3.sasl) {
        FUNC_3(VAR_5, VAR_1, ((void*)0),
                        VAR_5->binary_header.request.bodylen
                        - VAR_5->binary_header.request.keylen);
        return;
    }

    FUNC_1(VAR_5);
    const char *VAR_6 = ((void*)0);
    unsigned int VAR_7 = 0;
    int VAR_8=FUNC_2(VAR_5->sasl_conn, ((void*)0),
                             "",
                             " ",
                             "",
                             &VAR_6, &VAR_7,
                             ((void*)0));
    if (VAR_8 != VAR_2) {

        if (VAR_3.verbose) {
            FUNC_0(VAR_4, "Failed to list SASL mechanisms.\n");
        }
        FUNC_3(VAR_5, VAR_0, ((void*)0), 0);
        return;
    }
    FUNC_4(VAR_5, (char*)VAR_6, 0, 0, VAR_7);
}
