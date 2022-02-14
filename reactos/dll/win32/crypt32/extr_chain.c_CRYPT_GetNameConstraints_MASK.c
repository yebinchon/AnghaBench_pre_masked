
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cbData; int pbData; } ;
struct TYPE_8__ {TYPE_1__ Value; } ;
struct TYPE_7__ {int rgExtension; int cExtension; } ;
typedef int DWORD ;
typedef int CERT_NAME_CONSTRAINTS_INFO ;
typedef TYPE_2__ CERT_INFO ;
typedef TYPE_3__ CERT_EXTENSION ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int *,int **,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static CERT_NAME_CONSTRAINTS_INFO *FUNC_2(CERT_INFO *VAR_5)
{
    CERT_NAME_CONSTRAINTS_INFO *VAR_6 = ((void*)0);

    CERT_EXTENSION *VAR_7;

    if ((VAR_7 = FUNC_0(VAR_4, VAR_5->cExtension,
     VAR_5->rgExtension)))
    {
        DWORD VAR_8;

        FUNC_1(VAR_2, VAR_3,
         VAR_7->Value.pbData, VAR_7->Value.cbData,
         VAR_0 | VAR_1, ((void*)0), &VAR_6,
         &VAR_8);
    }
    return VAR_6;
}
