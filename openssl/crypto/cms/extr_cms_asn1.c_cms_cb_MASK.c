
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ndef_bio; int out; int boundary; } ;
typedef int CMS_ContentInfo ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_STREAM_ARG ;
typedef int ASN1_ITEM ;






 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_0, ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2,
                  void *VAR_3)
{
    ASN1_STREAM_ARG *VAR_4 = VAR_3;
    CMS_ContentInfo *VAR_5 = ((void*)0);
    if (VAR_1)
        VAR_5 = (CMS_ContentInfo *)*VAR_1;
    else
        return 1;
    switch (VAR_0) {

    case 128:
        if (FUNC_2(&VAR_4->boundary, VAR_5) <= 0)
            return 0;

    case 130:
        VAR_4->ndef_bio = FUNC_1(VAR_5, VAR_4->out);
        if (!VAR_4->ndef_bio)
            return 0;
        break;

    case 129:
    case 131:
        if (FUNC_0(VAR_5, VAR_4->ndef_bio) <= 0)
            return 0;
        break;

    }
    return 1;
}
