
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_26__ {TYPE_16__** tcp; } ;
struct Banner1 {TYPE_1__ payloads; int smack; } ;
struct TYPE_34__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_33__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_32__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_31__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_30__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_29__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_28__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_27__ {int is_anchored; int pattern_length; scalar_t__ pattern; } ;
struct TYPE_25__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_24__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_23__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_22__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_21__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_20__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_19__ {int (* init ) (struct Banner1*) ;} ;
struct TYPE_18__ {int (* init ) (struct Banner1*) ;} ;


 struct Banner1* FUNC_0 (int,int) ;
 int VAR_0 ;
 TYPE_17__ VAR_1 ;
 TYPE_16__ VAR_2 ;
 TYPE_15__ VAR_3 ;
 TYPE_14__ VAR_4 ;
 TYPE_13__ VAR_5 ;
 TYPE_12__ VAR_6 ;
 TYPE_11__ VAR_7 ;
 TYPE_10__ VAR_8 ;
 TYPE_9__ VAR_9 ;
 TYPE_8__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 TYPE_4__ VAR_14 ;
 TYPE_3__ VAR_15 ;
 TYPE_2__* VAR_16 ;
 int FUNC_1 (int ,scalar_t__,int ,unsigned int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct Banner1*) ;
 int FUNC_5 (struct Banner1*) ;
 int FUNC_6 (struct Banner1*) ;
 int FUNC_7 (struct Banner1*) ;
 int FUNC_8 (struct Banner1*) ;
 int FUNC_9 (struct Banner1*) ;
 int FUNC_10 (struct Banner1*) ;
 int FUNC_11 (struct Banner1*) ;
 int FUNC_12 (struct Banner1*) ;
 int FUNC_13 (struct Banner1*) ;
 int FUNC_14 (struct Banner1*) ;
 int FUNC_15 (struct Banner1*) ;
 int FUNC_16 (struct Banner1*) ;
 int FUNC_17 (struct Banner1*) ;
 int FUNC_18 (struct Banner1*) ;

struct Banner1 *
FUNC_19(void)
{
    struct Banner1 *VAR_17;
    unsigned VAR_18;

    VAR_17 = FUNC_0(1, sizeof(*VAR_17));







    VAR_17->smack = FUNC_3("banner1", VAR_0);
    for (VAR_18=0; VAR_16[VAR_18].pattern; VAR_18++)
        FUNC_1(
                    VAR_17->smack,
                    VAR_16[VAR_18].pattern,
                    VAR_16[VAR_18].pattern_length,
                    VAR_18,
                    VAR_16[VAR_18].is_anchored);
    FUNC_2(VAR_17->smack);




    VAR_17->payloads.tcp[80] = &VAR_2;
    VAR_17->payloads.tcp[8080] = &VAR_2;
    VAR_17->payloads.tcp[139] = (void*)&VAR_8;
    VAR_17->payloads.tcp[445] = (void*)&VAR_9;
    VAR_17->payloads.tcp[443] = (void*)&VAR_12;
    VAR_17->payloads.tcp[465] = (void*)&VAR_12;
    VAR_17->payloads.tcp[990] = (void*)&VAR_12;
    VAR_17->payloads.tcp[991] = (void*)&VAR_12;
    VAR_17->payloads.tcp[992] = (void*)&VAR_12;
    VAR_17->payloads.tcp[993] = (void*)&VAR_12;
    VAR_17->payloads.tcp[994] = (void*)&VAR_12;
    VAR_17->payloads.tcp[995] = (void*)&VAR_12;
    VAR_17->payloads.tcp[2083] = (void*)&VAR_12;
    VAR_17->payloads.tcp[2087] = (void*)&VAR_12;
    VAR_17->payloads.tcp[2096] = (void*)&VAR_12;
    VAR_17->payloads.tcp[8443] = (void*)&VAR_12;
    VAR_17->payloads.tcp[9050] = (void*)&VAR_12;
    VAR_17->payloads.tcp[8140] = (void*)&VAR_12;
    VAR_17->payloads.tcp[11211] = (void*)&VAR_4;
    VAR_17->payloads.tcp[23] = (void*)&VAR_13;
    VAR_17->payloads.tcp[3389] = (void*)&VAR_6;





    VAR_1.init(VAR_17);
    VAR_2.init(VAR_17);
    VAR_3(VAR_17);
    VAR_4.init(VAR_17);
    VAR_5(VAR_17);
    VAR_10.init(VAR_17);
    VAR_11.init(VAR_17);
    VAR_12.init(VAR_17);
    VAR_8(VAR_17);
    VAR_9(VAR_17);
    VAR_13.init(VAR_17);
    VAR_6.init(VAR_17);
    VAR_15.init(VAR_17);


    VAR_7.init(VAR_17);
    VAR_14.init(VAR_17);


    return VAR_17;
}
