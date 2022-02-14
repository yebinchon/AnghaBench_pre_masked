
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct TYPE_5__ {int messageTime; } ;
struct TYPE_4__ {TYPE_2__* hdr; } ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;


 int FUNC_0 (int ,struct tm*) ;
 int FUNC_1 (int) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (struct tm*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CMP_HDR_TEST_FIXTURE *VAR_0)
{
    struct tm VAR_1;
    time_t VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_5 = FUNC_5(((void*)0));
    VAR_3 = FUNC_3(FUNC_2(&VAR_5));
    if (!FUNC_1(FUNC_4(VAR_0->hdr)))
        return 0;
    if (!FUNC_1(FUNC_0(VAR_0->hdr->messageTime, &VAR_1)))
        return 0;

    VAR_2 = FUNC_3(&VAR_1);
    if (!FUNC_1(VAR_3 <= VAR_2))
        return 0;
    VAR_5 = FUNC_5(((void*)0));
    VAR_4 = FUNC_3(FUNC_2(&VAR_5));
    return FUNC_1(VAR_2 <= VAR_4);
}
