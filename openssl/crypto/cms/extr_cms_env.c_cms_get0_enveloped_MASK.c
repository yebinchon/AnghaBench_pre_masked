
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * envelopedData; } ;
struct TYPE_5__ {TYPE_1__ d; int contentType; } ;
typedef int CMS_EnvelopedData ;
typedef TYPE_2__ CMS_ContentInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

CMS_EnvelopedData *FUNC_2(CMS_ContentInfo *VAR_3)
{
    if (FUNC_1(VAR_3->contentType) != VAR_2) {
        FUNC_0(VAR_0,
               VAR_1);
        return ((void*)0);
    }
    return VAR_3->d.envelopedData;
}
