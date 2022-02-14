
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* nii_domain; unsigned char* nii_name; int nii_date; int nii_name_len; int nii_domain_len; } ;
typedef TYPE_1__ nfs_impl_id4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char**,int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    nfs_impl_id4 *VAR_3)
{
    unsigned char *VAR_4 = VAR_3->nii_domain;
    unsigned char *VAR_5 = VAR_3->nii_name;

    if (!FUNC_0(VAR_2, (char **)&VAR_4, &VAR_3->nii_domain_len, VAR_1))
        return VAR_0;

    if (!FUNC_0(VAR_2, (char **)&VAR_5, &VAR_3->nii_name_len, VAR_1))
        return VAR_0;

    return FUNC_1(VAR_2, &VAR_3->nii_date);
}
