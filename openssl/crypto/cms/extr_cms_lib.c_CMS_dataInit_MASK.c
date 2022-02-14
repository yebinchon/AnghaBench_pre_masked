
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int contentType; } ;
typedef TYPE_1__ CMS_ContentInfo ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;






 int FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (TYPE_1__*) ;

BIO *FUNC_10(CMS_ContentInfo *VAR_3, BIO *VAR_4)
{
    BIO *VAR_5, *VAR_6;
    if (VAR_4)
        VAR_6 = VAR_4;
    else
        VAR_6 = FUNC_9(VAR_3);
    if (!VAR_6) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }
    switch (FUNC_3(VAR_3->contentType)) {

    case 132:
        return VAR_6;

    case 128:
        VAR_5 = FUNC_8(VAR_3);
        break;

    case 131:
        VAR_5 = FUNC_5(VAR_3);
        break;






    case 130:
        VAR_5 = FUNC_6(VAR_3);
        break;

    case 129:
        VAR_5 = FUNC_7(VAR_3);
        break;

    default:
        FUNC_2(VAR_0, VAR_2);
        return ((void*)0);
    }

    if (VAR_5)
        return FUNC_1(VAR_5, VAR_6);

    if (!VAR_4)
        FUNC_0(VAR_6);
    return ((void*)0);

}
