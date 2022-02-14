
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {scalar_t__ unique_subject; } ;
struct TYPE_5__ {TYPE_1__ attributes; int db; } ;
typedef TYPE_2__ CA_DB ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,int,char*,char const*,...) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int * VAR_1 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

int FUNC_7(const char *VAR_2, const char *VAR_3, CA_DB *VAR_4)
{
    char VAR_5[3][VAR_0];
    BIO *VAR_6;
    int VAR_7;

    VAR_7 = FUNC_6(VAR_2) + FUNC_6(VAR_3);
    if (VAR_7 + 6 >= VAR_0) {
        FUNC_2(VAR_1, "file name too long\n");
        goto err;
    }

    VAR_7 = FUNC_3(VAR_5[2], sizeof(VAR_5[2]), "%s.attr", VAR_2);
    VAR_7 = FUNC_3(VAR_5[1], sizeof(VAR_5[1]), "%s.attr.%s", VAR_2, VAR_3);
    VAR_7 = FUNC_3(VAR_5[0], sizeof(VAR_5[0]), "%s.%s", VAR_2, VAR_3);





    VAR_6 = FUNC_1(VAR_5[0], "w");
    if (VAR_6 == ((void*)0)) {
        FUNC_5(VAR_2);
        FUNC_2(VAR_1, "unable to open '%s'\n", VAR_2);
        goto err;
    }
    VAR_7 = FUNC_4(VAR_6, VAR_4->db);
    FUNC_0(VAR_6);
    if (VAR_7 <= 0)
        goto err;

    VAR_6 = FUNC_1(VAR_5[1], "w");
    if (VAR_6 == ((void*)0)) {
        FUNC_5(VAR_5[2]);
        FUNC_2(VAR_1, "unable to open '%s'\n", VAR_5[2]);
        goto err;
    }
    FUNC_2(VAR_6, "unique_subject = %s\n",
               VAR_4->attributes.unique_subject ? "yes" : "no");
    FUNC_0(VAR_6);

    return 1;
 err:
    return 0;
}
