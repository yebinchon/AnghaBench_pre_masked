
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int upload_tasks; int download_tasks; } ;
typedef TYPE_2__ HttpTxManager ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (HttpTxManager *VAR_1, const char *VAR_2)
{
    FUNC_0 (VAR_1->priv->download_tasks,
                                 VAR_0, (gpointer)VAR_2);

    FUNC_0 (VAR_1->priv->upload_tasks,
                                 VAR_0, (gpointer)VAR_2);
}
