
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ao {int dummy; } ;
struct TYPE_3__ {scalar_t__ member_0; int member_2; int member_1; } ;
typedef scalar_t__ OSStatus ;
typedef TYPE_1__ AudioObjectPropertyAddress ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int ,void*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct ao*,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct ao*) ;

__attribute__((used)) static int FUNC_5(struct ao *VAR_6)
{
    if (!FUNC_4(VAR_6))
        goto coreaudio_error;

    OSStatus VAR_7 = VAR_5;
    for (int VAR_8 = 0; VAR_8 < FUNC_1(VAR_1); VAR_8++) {
        AudioObjectPropertyAddress VAR_9 = {
            VAR_1[VAR_8],
            VAR_3,
            VAR_2
        };
        VAR_7 = FUNC_0(
            VAR_4, &VAR_9, VAR_0, (void *)VAR_6);
        if (VAR_7 != VAR_5) {
            char *VAR_10 = FUNC_3(VAR_1[VAR_8]);
            char *VAR_11 = FUNC_3(VAR_7);
            FUNC_2(VAR_6, "failed to set device listener %s (%s)", VAR_10, VAR_11);
            goto coreaudio_error;
        }
    }

    return 0;

coreaudio_error:
    return -1;
}
