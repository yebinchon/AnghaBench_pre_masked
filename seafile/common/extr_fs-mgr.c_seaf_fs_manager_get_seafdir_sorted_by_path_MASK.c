
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int entries; } ;
typedef int SeafFSManager ;
typedef TYPE_1__ SeafDir ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *,char const*,int,char const*,char const*,int *) ;

SeafDir *
FUNC_3 (SeafFSManager *VAR_1,
                                            const char *VAR_2,
                                            int VAR_3,
                                            const char *VAR_4,
                                            const char *VAR_5)
{
    SeafDir *VAR_6 = FUNC_2 (VAR_1, VAR_2,
                                                        VAR_3, VAR_4,
                                                        VAR_5, ((void*)0));

    if (!VAR_6)
        return ((void*)0);


    if (VAR_3 > 0)
        return VAR_6;

    if (!FUNC_1 (VAR_6->entries))
        VAR_6->entries = FUNC_0 (VAR_6->entries, VAR_0);

    return VAR_6;
}
