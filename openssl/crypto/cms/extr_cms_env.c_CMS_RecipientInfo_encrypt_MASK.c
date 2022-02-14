
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ CMS_RecipientInfo ;
typedef int CMS_ContentInfo ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*,TYPE_1__*) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (int const*,TYPE_1__*) ;
 int FUNC_4 (int const*,TYPE_1__*,int) ;

int FUNC_5(const CMS_ContentInfo *VAR_2, CMS_RecipientInfo *VAR_3)
{
    switch (VAR_3->type) {
    case 128:
        return FUNC_3(VAR_2, VAR_3);

    case 131:
        return FUNC_1(VAR_2, VAR_3);

    case 130:
        return FUNC_2(VAR_2, VAR_3);

    case 129:
        return FUNC_4(VAR_2, VAR_3, 1);

    default:
        FUNC_0(VAR_0,
               VAR_1);
        return 0;
    }
}
