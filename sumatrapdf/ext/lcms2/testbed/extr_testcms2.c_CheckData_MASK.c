
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
struct TYPE_4__ {char member_0; } ;
struct TYPE_5__ {int member_0; char* data; int len; int flag; TYPE_1__ member_2; int member_1; } ;
typedef TYPE_2__ cmsICCData ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsInt32Number VAR_0, cmsHPROFILE VAR_1, cmsTagSignature VAR_2)
{
    cmsICCData *VAR_3;
    cmsICCData VAR_4 = { 1, 0, '?' };
    cmsInt32Number VAR_5;


    switch (VAR_0) {

        case 1:
            VAR_5 = FUNC_2(FUNC_0(), VAR_1, VAR_2, &VAR_4);
            return VAR_5;

        case 2:
            VAR_3 = (cmsICCData *) FUNC_1(FUNC_0(), VAR_1, VAR_2);
            if (VAR_3 == ((void*)0)) return 0;
            return (VAR_3 ->data[0] == '?') && (VAR_3 ->flag == 0) && (VAR_3 ->len == 1);

        default:
            return 0;
    }
}
