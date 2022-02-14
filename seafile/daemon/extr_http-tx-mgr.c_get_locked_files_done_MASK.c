
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cb_data ;
struct TYPE_7__ {struct TYPE_7__* host; int results; int user_data; int (* callback ) (TYPE_1__*,int ) ;int success; } ;
struct TYPE_6__ {int results; int success; } ;
typedef TYPE_1__ HttpLockedFiles ;
typedef TYPE_2__ GetLockedFilesData ;
typedef int GDestroyNotify ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4 (void *VAR_1)
{
    GetLockedFilesData *VAR_2 = VAR_1;
    HttpLockedFiles VAR_3;

    FUNC_2 (&VAR_3, 0, sizeof(VAR_3));
    VAR_3.success = VAR_2->success;
    VAR_3.results = VAR_2->results;

    VAR_2->callback (&VAR_3, VAR_2->user_data);

    FUNC_1 (VAR_2->results, (GDestroyNotify)VAR_0);

    FUNC_0 (VAR_2->host);
    FUNC_0 (VAR_2);
}
