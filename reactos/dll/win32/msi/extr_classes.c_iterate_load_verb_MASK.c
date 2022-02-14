
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int verbs; } ;
struct TYPE_5__ {int entry; int Argument; int Command; int Sequence; int Verb; } ;
typedef TYPE_1__ MSIVERB ;
typedef int MSIRECORD ;
typedef int MSIPACKAGE ;
typedef TYPE_2__ MSIEXTENSION ;
typedef int * LPVOID ;
typedef int LPCWSTR ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 TYPE_2__* FUNC_7 (int *,int ) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static UINT FUNC_10(MSIRECORD *VAR_2, LPVOID VAR_3)
{
    MSIPACKAGE* VAR_4 = VAR_3;
    MSIVERB *VAR_5;
    LPCWSTR VAR_6;
    MSIEXTENSION *VAR_7;

    VAR_6 = FUNC_2(VAR_2,1);
    VAR_7 = FUNC_7( VAR_4, VAR_6 );
    if (!VAR_7)
    {
        FUNC_0("Verb unable to find loaded extension %s\n", FUNC_4(VAR_6));
        return VAR_1;
    }



    VAR_5 = FUNC_8( sizeof(MSIVERB) );
    if (!VAR_5)
        return VAR_0;

    VAR_5->Verb = FUNC_9(VAR_2,2);
    FUNC_3("loading verb %s\n",FUNC_4(VAR_5->Verb));
    VAR_5->Sequence = FUNC_1(VAR_2,3);

    VAR_6 = FUNC_2(VAR_2,4);
    FUNC_5(VAR_4,VAR_6,&VAR_5->Command);

    VAR_6 = FUNC_2(VAR_2,5);
    FUNC_5(VAR_4,VAR_6,&VAR_5->Argument);


    FUNC_6( &VAR_7->verbs, &VAR_5->entry );

    return VAR_1;
}
