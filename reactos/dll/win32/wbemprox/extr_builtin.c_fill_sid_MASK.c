
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct table {int num_rows; scalar_t__ data; } ;
struct record_sid {int sidlength; int sid; int referenceddomainname; int binaryrepresentation; int accountname; } ;
struct expr {int dummy; } ;
typedef enum fill_status { ____Placeholder_fill_status } fill_status ;
typedef int attrs ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_4__ {int Length; } ;
typedef int PSID ;
typedef int LSA_TRANSLATED_NAME ;
typedef int LSA_REFERENCED_DOMAIN_LIST ;
typedef TYPE_1__ LSA_OBJECT_ATTRIBUTES ;
typedef int LSA_HANDLE ;


 int FUNC_0 (int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int,int *,int **,int **) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*,int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (struct expr const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (struct table*,int,int) ;

__attribute__((used)) static enum fill_status FUNC_15( struct table *VAR_3, const struct expr *VAR_4 )
{
    PSID VAR_5;
    LSA_REFERENCED_DOMAIN_LIST *VAR_6;
    LSA_TRANSLATED_NAME *VAR_7;
    LSA_HANDLE VAR_8;
    LSA_OBJECT_ATTRIBUTES VAR_9;
    const WCHAR *VAR_10;
    struct record_sid *VAR_11;
    UINT VAR_12;

    if (!(VAR_10 = FUNC_8( VAR_4 ))) return VAR_0;
    if (!FUNC_14( VAR_3, 1, sizeof(*VAR_11) )) return VAR_0;

    if (!FUNC_0( VAR_10, &VAR_5 )) return VAR_0;
    VAR_12 = FUNC_1( VAR_5 );

    FUNC_13( &VAR_9, 0, sizeof(VAR_9) );
    VAR_9.Length = sizeof(VAR_9);
    if (FUNC_6( ((void*)0), &VAR_9, VAR_2, &VAR_8 ))
    {
        FUNC_2( VAR_5 );
        return VAR_0;
    }
    if (FUNC_5( VAR_8, 1, &VAR_5, &VAR_6, &VAR_7 ))
    {
        FUNC_2( VAR_5 );
        FUNC_3( VAR_8 );
        return VAR_0;
    }

    VAR_11 = (struct record_sid *)VAR_3->data;
    VAR_11->accountname = FUNC_9( VAR_7 );
    VAR_11->binaryrepresentation = FUNC_10( VAR_5, VAR_12 );
    VAR_11->referenceddomainname = FUNC_11( VAR_6 );
    VAR_11->sid = FUNC_12( VAR_10 );
    VAR_11->sidlength = VAR_12;

    FUNC_7("created 1 row\n");
    VAR_3->num_rows = 1;

    FUNC_4( VAR_6 );
    FUNC_4( VAR_7 );
    FUNC_2( VAR_5 );
    FUNC_3( VAR_8 );
    return VAR_1;
}
