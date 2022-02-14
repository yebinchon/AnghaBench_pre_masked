
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* apidl; } ;
struct TYPE_4__ {int pidl; } ;
typedef TYPE_2__ NOTIFICATIONLIST ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,...) ;

__attribute__((used)) static const char * FUNC_3(const NOTIFICATIONLIST *VAR_1)
{
    const char *VAR_2;
    WCHAR VAR_3[VAR_0];

    if(FUNC_0(VAR_1->apidl[0].pidl, VAR_3 ))
        VAR_2 = FUNC_2("%s", FUNC_1(VAR_3));
    else
        VAR_2 = FUNC_2("<not a disk file>" );
    return VAR_2;
}
