
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int t ;
struct TYPE_6__ {int expected; int cmp_time; scalar_t__ data; int type; } ;
struct TYPE_5__ {unsigned char* data; scalar_t__ flags; int length; int type; } ;
typedef TYPE_1__ ASN1_TIME ;


 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_5(int VAR_1)
{
    ASN1_TIME VAR_2;
    int VAR_3;

    FUNC_3(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.type = VAR_0[VAR_1].type;
    VAR_2.data = (unsigned char*)(VAR_0[VAR_1].data);
    VAR_2.length = FUNC_4(VAR_0[VAR_1].data);
    VAR_2.flags = 0;

    VAR_3 = FUNC_2(&VAR_2, &VAR_0[VAR_1].cmp_time);
    if (!FUNC_1(VAR_3, VAR_0[VAR_1].expected)) {
        FUNC_0("test_x509_cmp_time(%d) failed: expected %d, got %d\n",
                VAR_1, VAR_0[VAR_1].expected, VAR_3);
        return 0;
    }
    return 1;
}
