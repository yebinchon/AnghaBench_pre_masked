
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int aux_err ;
struct TYPE_6__ {scalar_t__ aead; int enc; int cipher; int tag; int iv; int key; } ;
struct TYPE_5__ {char* err; char* aux_err; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_TEST ;
typedef TYPE_2__ CIPHER_DATA ;


 int FUNC_0 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*,int,size_t,size_t,int) ;

__attribute__((used)) static int FUNC_4(EVP_TEST *VAR_4)
{
    CIPHER_DATA *VAR_5 = VAR_4->data;
    int VAR_6, VAR_7 = 0;
    size_t VAR_8, VAR_9;

    if (!VAR_5->key) {
        VAR_4->err = "NO_KEY";
        return 0;
    }
    if (!VAR_5->iv && FUNC_1(VAR_5->cipher)) {

        if (FUNC_2(VAR_5->cipher) != VAR_2) {
            VAR_4->err = "NO_IV";
            return 0;
        }
    }
    if (VAR_5->aead && !VAR_5->tag) {
        VAR_4->err = "NO_TAG";
        return 0;
    }
    for (VAR_8 = 0; VAR_8 <= 1;) {
        static char VAR_10[64];
        VAR_4->aux_err = VAR_10;
        for (VAR_9 = (size_t)-1; VAR_9 != 2; VAR_9++) {
            if (VAR_9 == (size_t)-1) {

                FUNC_0(VAR_10, sizeof(VAR_10),
                             "%s in-place, %sfragmented",
                             VAR_8 ? "misaligned" : "aligned",
                             VAR_7 ? "" : "not ");
            } else {
                FUNC_0(VAR_10, sizeof(VAR_10),
                             "%s output and %s input, %sfragmented",
                             VAR_8 ? "misaligned" : "aligned",
                             VAR_9 ? "misaligned" : "aligned",
                             VAR_7 ? "" : "not ");
            }
            if (VAR_5->enc) {
                VAR_6 = FUNC_3(VAR_4, 1, VAR_8, VAR_9, VAR_7);

                if (VAR_6 != 1) {
                    if (VAR_6 < 0)
                        return 0;
                    return 1;
                }
            }
            if (VAR_5->enc != 1) {
                VAR_6 = FUNC_3(VAR_4, 0, VAR_8, VAR_9, VAR_7);

                if (VAR_6 != 1) {
                    if (VAR_6 < 0)
                        return 0;
                    return 1;
                }
            }
        }

        if (VAR_8 == 1 && VAR_7 == 0) {




            if (VAR_5->aead == VAR_0
                    || FUNC_2(VAR_5->cipher) == VAR_1
                    || FUNC_2(VAR_5->cipher) == VAR_3
                    || FUNC_2(VAR_5->cipher) == VAR_2)
                break;
            VAR_8 = 0;
            VAR_7++;
        } else {
            VAR_8++;
        }
    }
    VAR_4->aux_err = ((void*)0);

    return 1;
}
