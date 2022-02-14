
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vr ;
struct TYPE_6__ {int type; int father_type; int size; int type_name; int file; int pSymbols; scalar_t__ address; scalar_t__ value; int name; void* bPtrType; void* bArrayType; } ;
typedef TYPE_1__ VRET ;
typedef int ULONG ;
typedef TYPE_1__* PVRET ;
typedef scalar_t__* PUSHORT ;
typedef scalar_t__* PULONG ;
typedef scalar_t__* PUCHAR ;
typedef char* LPSTR ;
typedef int LONG ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*) ;
 void* VAR_0 ;

PVRET FUNC_12(PVRET VAR_1,LPSTR VAR_2)
{
    ULONG VAR_3;
    static char VAR_4[128];
    LONG VAR_5,VAR_6,VAR_7,VAR_8;
    static VRET VAR_9;
    LPSTR VAR_10,VAR_11;

    FUNC_0((1,"ExtractStructMembers(): %s\n",VAR_2));

    FUNC_7(&VAR_9,0,sizeof(VAR_9));


 VAR_3=FUNC_11(VAR_2,":");
    if(VAR_3)
    {

     FUNC_10(VAR_4,VAR_2,VAR_3);
        VAR_4[VAR_3]=0;
        FUNC_0((1,"ExtractStructMembers(): member_name = %s\n",VAR_4));


        VAR_2 += (VAR_3+1);
        if(FUNC_5((ULONG)VAR_2) )
        {
            VAR_7 = FUNC_3(VAR_2);
            FUNC_0((1,"ExtractStructMembers(): type_number = %x\n",VAR_7));

            VAR_9.type = VAR_7;

            VAR_11 = FUNC_8(VAR_2,')');

            if(VAR_11)
            {
                VAR_2 = VAR_11+1;
                if(*VAR_2 == '=')
                {
                    VAR_2++;
                    if(*VAR_2 == 'a')
                    {
                        FUNC_0((1,"ExtractStructMembers(): member is array\n"));
                        VAR_9.bArrayType = VAR_0;
                        VAR_2 = FUNC_8(VAR_2,';');
                        VAR_2 = FUNC_8(VAR_2,';');
                        VAR_2 = FUNC_8(VAR_2,';');
                        if(VAR_2)
                            VAR_2++;

                        VAR_7 = FUNC_3(VAR_2);
                        VAR_9.father_type = VAR_7;
                    }
                    else if(*VAR_2 == '*')
                    {
                        FUNC_0((1,"ExtractStructMembers(): member is ptr\n"));
                        VAR_9.bPtrType = VAR_0;
                        VAR_7 = FUNC_3(VAR_2);
                        FUNC_0((1,"ExtractStructMembers(): type_number = %x\n",VAR_7));
                        VAR_9.father_type = VAR_7;
                    }
                    else if(*VAR_2 == 'u')
                    {
                        FUNC_0((1,"ExtractStructMembers(): member is union\n"));
                        while(*VAR_2!=';' && *(VAR_2+1)!=';' && *VAR_2!=0)VAR_2++;
                    }
                }
            }

            VAR_2 = FUNC_8(VAR_2,',');
            if(VAR_2)
            {
                VAR_2++;
                VAR_5 = FUNC_1(VAR_2);
                FUNC_0((1,"ExtractStructMembers(): bit_offset = %x\n",VAR_5));
                VAR_2 = FUNC_8(VAR_2,',');
                if(VAR_2)
                {
                    VAR_2++;

                    VAR_6 = FUNC_1(VAR_2);
                    FUNC_0((1,"ExtractStructMembers(): bit_size = %x\n",VAR_6));

                    VAR_9.address = VAR_1->value + VAR_5/8;
                    VAR_9.file = VAR_1->file;
                    VAR_9.size = VAR_6;
                    FUNC_9(VAR_9.name,VAR_4);
                    VAR_8 = (VAR_6+1)/8;
                    if(!VAR_8)
                        VAR_8 = 4;
                    VAR_1->address = VAR_1->value;
                    if(FUNC_6(VAR_9.address,VAR_8))
                    {
                        switch(VAR_8)
                        {
                            case 1:
                                VAR_9.value = *(PUCHAR)VAR_9.address;
                                break;
                            case 2:
                                VAR_9.value = *(PUSHORT)VAR_9.address;
                                break;
                            case 4:
                                VAR_9.value = *(PULONG)VAR_9.address;
                                break;
                        }
                    }

                    FUNC_0((1,"ExtractStructMembers(): member %s type %x bit_offset %x bit_size%x\n",VAR_4,VAR_7,VAR_5,VAR_6));

                    VAR_10 = FUNC_4(VAR_1->pSymbols,VAR_7,VAR_1->file);
                    if(VAR_10)
                    {
                        FUNC_0((1,"ExtractStructMembers(): pTypedef= %s\n",VAR_10));
                        FUNC_9(VAR_9.type_name,FUNC_2(VAR_10));
                        VAR_10 = FUNC_8(VAR_10,':');
                        if(VAR_10)
                        {
                            VAR_10++;
                            VAR_7 = FUNC_3(VAR_10);
                            FUNC_0((1,"ExtractStructMembers(): type_number = %x\n",VAR_7));
                            VAR_9.father_type = VAR_7;
                        }
                    }
                }
            }
        }
    }

    return &VAR_9;
}
