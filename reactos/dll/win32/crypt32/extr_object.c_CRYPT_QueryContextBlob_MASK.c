
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ (* addEncodedToStore ) (int ,int ,int ,int ,int ,void const**) ;} ;
struct TYPE_8__ {scalar_t__ (* addEncodedToStore ) (int ,int ,int ,int ,int ,void const**) ;} ;
struct TYPE_7__ {scalar_t__ (* addEncodedToStore ) (int ,int ,int ,int ,int ,void const**) ;} ;
struct TYPE_6__ {int cbData; int pbData; } ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_1__ CERT_BLOB ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_3__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,void const**) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,void const**) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,void const**) ;

__attribute__((used)) static BOOL FUNC_3(const CERT_BLOB *VAR_12,
 DWORD VAR_13, HCERTSTORE VAR_14,
 DWORD *VAR_15, const void **VAR_16)
{
    BOOL VAR_17 = VAR_7;

    if (VAR_13 & VAR_3)
    {
        VAR_17 = VAR_11->addEncodedToStore(VAR_14, VAR_8,
         VAR_12->pbData, VAR_12->cbData, VAR_6, VAR_16);
        if (VAR_17 && VAR_15)
            *VAR_15 = VAR_0;
    }
    if (!VAR_17 && (VAR_13 & VAR_4))
    {
        VAR_17 = VAR_9->addEncodedToStore(VAR_14, VAR_8,
         VAR_12->pbData, VAR_12->cbData, VAR_6, VAR_16);
        if (VAR_17 && VAR_15)
            *VAR_15 = VAR_1;
    }
    if (!VAR_17 && (VAR_13 & VAR_5))
    {
        VAR_17 = VAR_10->addEncodedToStore(VAR_14, VAR_8,
         VAR_12->pbData, VAR_12->cbData, VAR_6, VAR_16);
        if (VAR_17 && VAR_15)
            *VAR_15 = VAR_2;
    }
    return VAR_17;
}
