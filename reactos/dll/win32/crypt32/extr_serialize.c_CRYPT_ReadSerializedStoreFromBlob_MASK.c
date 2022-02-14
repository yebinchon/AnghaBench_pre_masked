
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BlobReader {int member_1; int const* member_0; } ;
typedef int HCERTSTORE ;
typedef int CRYPT_DATA_BLOB ;
typedef int BOOL ;


 int FUNC_0 (struct BlobReader*,int ,int ) ;
 int VAR_0 ;

BOOL FUNC_1(const CRYPT_DATA_BLOB *VAR_1,
 HCERTSTORE VAR_2)
{
    struct BlobReader VAR_3 = { VAR_1, 0 };

    return FUNC_0(&VAR_3, VAR_0, VAR_2);
}
