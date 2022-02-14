
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Length; scalar_t__ Checksum; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;

void
FUNC_2 (
    void)
{



    if (VAR_2.Length != VAR_1->Length ||
        VAR_2.Checksum != VAR_1->Checksum)
    {
        FUNC_0 ((VAR_0,
            "The DSDT has been corrupted or replaced - "
            "old, new headers below"));

        FUNC_1 (0, &VAR_2);
        FUNC_1 (0, VAR_1);



        VAR_2.Length = VAR_1->Length;
        VAR_2.Checksum = VAR_1->Checksum;
    }
}
