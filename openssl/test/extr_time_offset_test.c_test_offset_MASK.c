
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* data; scalar_t__ flags; int type; int length; } ;
struct TYPE_6__ {int time_result; int type; scalar_t__ data; } ;
typedef TYPE_1__ TESTDATA ;
typedef TYPE_2__ ASN1_TIME ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int*,int*,int *,TYPE_2__*) ;
 int FUNC_2 (char*,unsigned char*,...) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(int VAR_3)
{
    ASN1_TIME VAR_4;
    const TESTDATA *VAR_5 = &VAR_0[VAR_3];
    int VAR_6 = -2;
    int VAR_7, VAR_8;

    VAR_4.data = (unsigned char*)VAR_5->data;
    VAR_4.length = FUNC_5(VAR_5->data);
    VAR_4.type = VAR_5->type;
    VAR_4.flags = 0;

    if (!FUNC_4(FUNC_1(&VAR_7, &VAR_8, &VAR_1, &VAR_4))) {
        FUNC_2("ASN1_TIME_diff() failed for %s\n", VAR_4.data);
        return 0;
    }
    if (VAR_7 > 0)
        VAR_6 = 1;
    else if (VAR_7 < 0)
        VAR_6 = -1;
    else if (VAR_8 > 0)
        VAR_6 = 1;
    else if (VAR_8 < 0)
        VAR_6 = -1;
    else
        VAR_6 = 0;

    if (!FUNC_3(VAR_5->time_result, VAR_6)) {
        FUNC_2("ASN1_TIME_diff() test failed for %s day=%d sec=%d\n", VAR_4.data, VAR_7, VAR_8);
        return 0;
    }

    VAR_6 = FUNC_0(&VAR_4, VAR_2);

    if (!FUNC_3(VAR_5->time_result, VAR_6)) {
        FUNC_2("ASN1_UTCTIME_cmp_time_t() test failed for %s\n", VAR_4.data);
        return 0;
    }

    return 1;
}
