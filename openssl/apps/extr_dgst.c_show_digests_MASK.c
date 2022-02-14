
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct doall_dgst_digests {int n; int bio; } ;
struct TYPE_3__ {scalar_t__* name; } ;
typedef TYPE_1__ OBJ_NAME ;
typedef int EVP_MD ;


 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (scalar_t__*) ;
 int FUNC_2 (unsigned char) ;
 int * FUNC_3 (scalar_t__*,char*) ;

__attribute__((used)) static void FUNC_4(const OBJ_NAME *VAR_0, void *VAR_1)
{
    struct doall_dgst_digests *VAR_2 = (struct doall_dgst_digests *)VAR_1;
    const EVP_MD *VAR_3 = ((void*)0);


    if (FUNC_3(VAR_0->name, "rsa") != ((void*)0) || FUNC_3(VAR_0->name, "RSA") != ((void*)0))
        return;

    if (!FUNC_2((unsigned char)*VAR_0->name))
        return;


    VAR_3 = FUNC_1(VAR_0->name);
    if (VAR_3 == ((void*)0))
        return;

    FUNC_0(VAR_2->bio, "-%-25s", VAR_0->name);
    if (++VAR_2->n == 3) {
        FUNC_0(VAR_2->bio, "\n");
        VAR_2->n = 0;
    } else {
        FUNC_0(VAR_2->bio, " ");
    }
}
