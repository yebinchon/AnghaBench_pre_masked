
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int content; TYPE_3__* data; } ;
struct TYPE_12__ {TYPE_4__ enveloped_data; } ;
struct TYPE_8__ {int open_flags; } ;
struct TYPE_13__ {TYPE_5__ u; int detached_data; TYPE_1__ base; } ;
struct TYPE_9__ {int encryptedContent; } ;
struct TYPE_10__ {TYPE_2__ encryptedContentInfo; } ;
typedef int CRYPT_DER_BLOB ;
typedef int CRYPT_DATA_BLOB ;
typedef TYPE_6__ CDecodeMsg ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_1(CDecodeMsg *VAR_1,
 CRYPT_DER_BLOB *VAR_2)
{
    CRYPT_DATA_BLOB *VAR_3;

    if (VAR_1->base.open_flags & VAR_0)
        VAR_3 = &VAR_1->detached_data;
    else
        VAR_3 =
         &VAR_1->u.enveloped_data.data->encryptedContentInfo.encryptedContent;

    return FUNC_0(&VAR_1->u.enveloped_data.content, VAR_3);
}
