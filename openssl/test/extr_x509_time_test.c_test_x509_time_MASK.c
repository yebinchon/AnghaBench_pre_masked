
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int expected; int expected_type; int expected_string; int data; scalar_t__ set_string; } ;
struct TYPE_6__ {int type; int data; } ;
typedef TYPE_1__ ASN1_TIME ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char const*,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_6(int VAR_1)
{
    ASN1_TIME *VAR_2 = ((void*)0);
    int VAR_3, VAR_4 = 0;

    if (VAR_0[VAR_1].set_string) {

        VAR_2 = FUNC_1();
        if (VAR_2 == ((void*)0)) {
            FUNC_3("test_x509_time(%d) failed: internal error\n", VAR_1);
            return 0;
        }
    }

    VAR_3 = FUNC_2(VAR_2, VAR_0[VAR_1].data);

    if (!FUNC_4(VAR_3, VAR_0[VAR_1].expected)) {
        FUNC_3("test_x509_time(%d) failed: expected %d, got %d\n",
                VAR_1, VAR_0[VAR_1].expected, VAR_3);
        goto out;
    }


    if (VAR_2 != ((void*)0) && VAR_0[VAR_1].expected_type != -1) {
        if (!FUNC_4(VAR_2->type, VAR_0[VAR_1].expected_type)) {
            FUNC_3("test_x509_time(%d) failed: expected_type %d, got %d\n",
                    VAR_1, VAR_0[VAR_1].expected_type, VAR_2->type);
            goto out;
        }
    }


    if (VAR_2 != ((void*)0) && VAR_0[VAR_1].expected_string) {
        if (!FUNC_5((const char *)VAR_2->data,
                    VAR_0[VAR_1].expected_string)) {
            FUNC_3("test_x509_time(%d) failed: expected_string %s, got %s\n",
                    VAR_1, VAR_0[VAR_1].expected_string, VAR_2->data);
            goto out;
        }
    }

    VAR_4 = 1;
out:
    if (VAR_2 != ((void*)0))
        FUNC_0(VAR_2);
    return VAR_4;
}
