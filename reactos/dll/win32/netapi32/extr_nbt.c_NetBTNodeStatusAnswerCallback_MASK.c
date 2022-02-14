
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int UCHAR ;
struct TYPE_6__ {int* astatLen; TYPE_1__* astat; scalar_t__ gotResponse; } ;
struct TYPE_5__ {int name_flags; int name; } ;
struct TYPE_4__ {int name_count; int adapter_type; int adapter_address; } ;
typedef int* PUCHAR ;
typedef TYPE_2__* PNAME_BUFFER ;
typedef TYPE_3__ NetBTNodeQueryData ;
typedef int BOOL ;
typedef int ADAPTER_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static BOOL FUNC_2(void *VAR_8, WORD VAR_9,
 WORD VAR_10, PUCHAR VAR_11, WORD VAR_12)
{
    NetBTNodeQueryData *VAR_13 = VAR_8;

    if (VAR_13 && !VAR_13->gotResponse && VAR_11 && VAR_12 >= 1)
    {

        if (VAR_12 >= VAR_11[0] * (VAR_4 + 2))
        {
            WORD VAR_14;
            PUCHAR VAR_15;
            PNAME_BUFFER VAR_16;

            VAR_13->gotResponse = VAR_7;
            VAR_13->astat->name_count = VAR_11[0];
            for (VAR_14 = 0, VAR_15 = VAR_11 + 1,
             VAR_16 = (PNAME_BUFFER)((PUCHAR)VAR_13->astat +
              sizeof(ADAPTER_STATUS));
             VAR_14 < VAR_13->astat->name_count && VAR_15 - VAR_11 < VAR_12 &&
             (PUCHAR)VAR_16 - (PUCHAR)VAR_13->astat < VAR_13->astatLen;
             VAR_14++, VAR_16++, VAR_15 += VAR_4 + 2)
            {
                UCHAR VAR_17 = *(VAR_15 + VAR_4);

                FUNC_0(VAR_16->name, VAR_15, VAR_4);



                VAR_16->name_flags = VAR_6;
                if (VAR_17 & 0x80)
                    VAR_16->name_flags |= VAR_3;
                if (VAR_17 & 0x10)
                    VAR_16->name_flags |= VAR_0;
                if (VAR_17 & 0x08)
                    VAR_16->name_flags |= VAR_1;
                if (VAR_16->name_flags == VAR_6)
                    VAR_16->name_flags = VAR_5;
            }

            VAR_13->astat->adapter_type = 0xfe;
            if (VAR_15 - VAR_11 < VAR_12)
                FUNC_0(VAR_13->astat->adapter_address, VAR_15,
                 FUNC_1(VAR_12 - (VAR_15 - VAR_11), 6));
        }
    }
    return VAR_2;
}
