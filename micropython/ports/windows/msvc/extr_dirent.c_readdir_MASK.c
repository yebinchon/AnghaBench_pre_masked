
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int d_type; scalar_t__ d_name; } ;
struct TYPE_5__ {int dwFileAttributes; scalar_t__ cFileName; } ;
struct TYPE_4__ {struct dirent result; TYPE_3__ findData; int findHandle; } ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*) ;
 int VAR_1 ;

struct dirent *FUNC_1(DIR *VAR_2) {
    if (!VAR_2) {
        VAR_1 = VAR_0;
        return ((void*)0);
    }


    if (!VAR_2->result.d_name || FUNC_0(VAR_2->findHandle, &VAR_2->findData)) {
        VAR_2->result.d_name = VAR_2->findData.cFileName;
        VAR_2->result.d_type = VAR_2->findData.dwFileAttributes;
        return &VAR_2->result;
    }

    return ((void*)0);
}
