
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_8__ {size_t type; char* type_name; int error; void* value; void* address; int size; int name; int bStructType; int bPtrType; int bArrayType; int file; int pSymbols; } ;
typedef TYPE_1__* PVRET ;
typedef void** PUSHORT ;
typedef void** PULONG ;
typedef void** PUCHAR ;
typedef int* LPSTR ;
typedef int LONG ;
typedef int BOOLEAN ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int FUNC_3 (int*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int*) ;
 int* FUNC_5 (int*) ;
 size_t FUNC_6 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int*,void**,size_t*,int *) ;
 int* FUNC_8 (int ,size_t,int ) ;
 int FUNC_9 (void*,size_t) ;
 int FUNC_10 (int) ;
 int* FUNC_11 (int*,char) ;
 int FUNC_12 (char*,int*) ;
 int FUNC_13 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

BOOLEAN FUNC_14(PVRET VAR_4,LPSTR VAR_5)
{
    LPSTR VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
    BOOLEAN VAR_11 = VAR_0;
    ULONG VAR_12,VAR_13,VAR_14;
    LONG VAR_15,VAR_16,VAR_17;
    static char VAR_18[2048];

    FUNC_1(*(1,"EvaluateSymbol(%s)\n",VAR_5));

 if(FUNC_7(VAR_5,&VAR_4->value,&VAR_4->type,&VAR_4->file))
    {
        FUNC_1((1,"EvaluateSymbol(%s) pvr->value = %x pvr->type = %x\n",VAR_5,VAR_4->value,VAR_4->type));
        while(!VAR_11)
        {
            if(!(VAR_6 = FUNC_8(VAR_4->pSymbols,VAR_4->type,VAR_4->file)))
                break;
            FUNC_12(VAR_18,VAR_6);

            VAR_6 = VAR_18;

            VAR_7 = FUNC_5(VAR_6);

            FUNC_1(*(1,"%s %s\n",VAR_7,VAR_5));

            FUNC_12(VAR_4->type_name,VAR_7);

            VAR_8 = FUNC_11(VAR_6,'=');

            if(!VAR_8)
                return VAR_0;

            VAR_8++;

            switch(*VAR_8)
            {
                case '(':
                    VAR_12 = FUNC_6(VAR_8);
                    FUNC_1((1,"%x is a type reference to %x\n",VAR_4->type,VAR_12));
                    VAR_4->type = VAR_12;
                    break;
                case 'r':
                    VAR_8++;
                    VAR_12 = FUNC_6(VAR_8);
                    FUNC_1((1,"%x is sub range of %x\n",VAR_4->type,VAR_12));
                    if(VAR_4->type == VAR_12)
                    {
                        FUNC_1((1,"%x is a self reference\n",VAR_4->type));
                        VAR_9 = FUNC_11(VAR_8,';');
                        VAR_9++;
                        VAR_15 = FUNC_3(VAR_9);
                        VAR_9 = FUNC_11(VAR_9,';');
                        VAR_9++;
                        VAR_16 = FUNC_3(VAR_9);
                        VAR_17 = VAR_16-VAR_15;
                        FUNC_1((1,"bounds %x-%x range %x\n",VAR_15,VAR_16,VAR_17));
                        VAR_13=0;
                        do
                        {
                            VAR_13++;
                            VAR_17 /= 2;
                        }while(VAR_17);
                        VAR_14 = (VAR_13+1)/8;
                        if(!VAR_14)
                            VAR_14 = 4;
                        FUNC_1((1,"# of bytes = %x\n",VAR_14));
                        VAR_4->address = VAR_4->value;
                        if(FUNC_9(VAR_4->value,VAR_14))
                        {
                            switch(VAR_14)
                            {
                                case 1:
                                    VAR_4->value = *(PUCHAR)VAR_4->value;
                                    break;
                                case 2:
                                    VAR_4->value = *(PUSHORT)VAR_4->value;
                                    break;
                                case 4:
                                    VAR_4->value = *(PULONG)VAR_4->value;
                                    break;
                            }
                        }
                        VAR_11=VAR_1;
                    }
                    else
                        VAR_4->type = VAR_12;
                    break;
                case 'a':
                    FUNC_1((1,"%x array\n",VAR_4->type));
                    VAR_8++;
                    if(!FUNC_2(VAR_4,VAR_8))
                    {
                        VAR_11 = VAR_1;
                        VAR_4->error = 1;
                    }
                    break;
                case '*':
                    FUNC_1((1,"%x is ptr to\n",VAR_4->type));
                    VAR_11 = VAR_1;
                    break;
                case 's':

                    VAR_8++;


                    VAR_15 = FUNC_3(VAR_8);
                    FUNC_1((1,"%x struct size = %x\n",VAR_4->type,VAR_15));


                    while(FUNC_10(*VAR_8))
                        VAR_8++;


                    VAR_4->address = VAR_4->value;
                    VAR_4->bStructType = VAR_1;


                    VAR_10 = VAR_8;

                    while(VAR_10 && *VAR_10 && *VAR_10!=';' && VAR_2<FUNC_0(VAR_3))
                    {
                        FUNC_1((1,"EvaluateSymbol(): member #%u\n",VAR_2));

                        VAR_3[VAR_2] = *FUNC_4(VAR_4,VAR_10);

                        if(!FUNC_13(VAR_3[VAR_2].type_name))
                        {
                            ULONG VAR_19;
                            PVRET VAR_20 = &VAR_3[VAR_2];

                            FUNC_1((1,"EvaluateSymbol(): no type name\n"));
                            for(VAR_19=0;VAR_19<VAR_2;VAR_19++)
                            {
                                FUNC_1((1,"EvaluateSymbol(): vr[i].type_name = %s\n",VAR_3[VAR_19].type_name));
                                FUNC_1((1,"EvaluateSymbol(): vr[i].name = %s\n",VAR_3[VAR_19].name));
                                FUNC_1((1,"EvaluateSymbol(): vr[i].address = %.8X\n",VAR_3[VAR_19].address));
                                FUNC_1((1,"EvaluateSymbol(): vr[i].value = %.8X\n",VAR_3[VAR_19].value));
                                FUNC_1((1,"EvaluateSymbol(): vr[i].size = %.8X\n",VAR_3[VAR_19].size));
                                FUNC_1((1,"EvaluateSymbol(): vr[i].type = %.8X\n",VAR_3[VAR_19].type));
                                if(VAR_20->type == VAR_3[VAR_19].type)
                                {
                                    FUNC_12(VAR_20->type_name,VAR_3[VAR_19].type_name);
                                    VAR_20->bArrayType = VAR_3[VAR_19].bArrayType;
                                    VAR_20->bPtrType = VAR_3[VAR_19].bPtrType;
                                    VAR_20->bStructType = VAR_3[VAR_19].bStructType;
                                    break;
                                }
                            }
                        }

                        FUNC_1((1,"EvaluateSymbol(): vr.type_name = %s\n",VAR_3[VAR_2].type_name));
                        FUNC_1((1,"EvaluateSymbol(): vr.name = %s\n",VAR_3[VAR_2].name));
                        FUNC_1((1,"EvaluateSymbol(): vr.address = %.8X\n",VAR_3[VAR_2].address));
                        FUNC_1((1,"EvaluateSymbol(): vr.value = %.8X\n",VAR_3[VAR_2].value));
                        FUNC_1((1,"EvaluateSymbol(): vr.size = %.8X\n",VAR_3[VAR_2].size));
                        FUNC_1((1,"EvaluateSymbol(): vr.type = %.8X\n",VAR_3[VAR_2].type));

                        VAR_2++;


                        VAR_10 = FUNC_11(VAR_10,';');
                        VAR_10 = FUNC_11(VAR_10,':');
                        if(VAR_10)
                        {
                            FUNC_1(*(1,"EvaluateSymbol(): ptr is now %s\n",VAR_10));

                            while(*VAR_10!=';')
                                VAR_10--;

                            if(VAR_10)
                                VAR_10++;
                        }
                    }

                    VAR_11 = VAR_1;
                    break;
                case 'u':
                    FUNC_1((1,"%x union\n",VAR_4->type));
                    VAR_11 = VAR_1;
                    break;
                case 'e':
                    FUNC_1((1,"%x enum\n",VAR_4->type));
                    VAR_11 = VAR_1;
                    break;
                default:
                    FUNC_1((1,"DEFAULT %x, base: %c\n",VAR_4->type, *VAR_8));
      VAR_4->address = VAR_4->value;
      if(FUNC_9(VAR_4->value,VAR_14))
        {
   switch(VAR_14)
     {
     case 1:
       VAR_4->value = *(PUCHAR)VAR_4->value;
       break;
     case 2:
       VAR_4->value = *(PUSHORT)VAR_4->value;
       break;
     case 4:
       VAR_4->value = *(PULONG)VAR_4->value;
       break;
     }
        }
                    VAR_11 = VAR_1;
                    break;
            }

        }
        return VAR_1;
 }
    return VAR_0;
}
