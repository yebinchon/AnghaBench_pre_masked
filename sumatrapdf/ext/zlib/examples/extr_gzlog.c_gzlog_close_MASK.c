
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log {int id; struct log* path; } ;
typedef struct log gzlog ;


 int VAR_0 ;
 int FUNC_0 (struct log*) ;
 int FUNC_1 (struct log*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(gzlog *VAR_1)
{
    struct log *VAR_2 = VAR_1;


    if (VAR_2 == ((void*)0) || FUNC_2(VAR_2->id, VAR_0))
        return -3;


    FUNC_1(VAR_2);


    if (VAR_2->path != ((void*)0))
        FUNC_0(VAR_2->path);
    FUNC_3(VAR_2->id, "bad");
    FUNC_0(VAR_2);
    return 0;
}
