
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* str; char* text; int pkifailure; int pkistatus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(void)
{
    FUNC_1(VAR_0, VAR_7);
    VAR_5->pkistatus = VAR_3;
    VAR_5->str = "PKIStatus: revocation notification - a revocation of the cert has occurred";
    VAR_5->text = "this is an additional text describing the failure";
    VAR_5->pkifailure = VAR_2 |
        VAR_1;
    FUNC_0(VAR_4, VAR_8);
    return VAR_6;
}
