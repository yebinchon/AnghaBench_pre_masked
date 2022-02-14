
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rgExtension; int cExtension; } ;
typedef scalar_t__ PCERT_EXTENSION ;
typedef TYPE_1__ CERT_INFO ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline PCERT_EXTENSION FUNC_1(const CERT_INFO *VAR_2)
{
    PCERT_EXTENSION VAR_3;

    VAR_3 = FUNC_0(VAR_1,
     VAR_2->cExtension, VAR_2->rgExtension);
    if (!VAR_3)
        VAR_3 = FUNC_0(VAR_0,
         VAR_2->cExtension, VAR_2->rgExtension);
    return VAR_3;
}
