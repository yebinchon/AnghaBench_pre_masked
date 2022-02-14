
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WORD ;
typedef scalar_t__ ULONG ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {unsigned long FramePtr; int Scope; int IsUwop; unsigned char Code; unsigned char Location; unsigned char Reg; int Offset; unsigned long Reg2; int TryLevel; unsigned long FramePtrDiff; TYPE_1__* SehBlock; int cScopes; } ;
struct TYPE_5__ {unsigned char BeginTry; unsigned char EndTry; unsigned char Target; unsigned char End; unsigned long Handler; } ;
typedef TYPE_2__* PDW2CFSTATE ;
typedef unsigned char DWORD ;


 int FUNC_0 (char*,void*,unsigned char,unsigned char,unsigned long,unsigned long,int ) ;

 unsigned char VAR_0 ;
 unsigned char VAR_1 ;




 unsigned char VAR_2 ;





 unsigned long FUNC_1 (unsigned long*,char*) ;
 scalar_t__ FUNC_2 (unsigned long*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,unsigned char,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,...) ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;

unsigned long
FUNC_6(PDW2CFSTATE VAR_6, char *VAR_7)
{
    unsigned char VAR_8;
    unsigned long VAR_9;
    unsigned long VAR_10 = VAR_6->FramePtr;

    VAR_6->Scope = 0;
    VAR_6->IsUwop = 0;
    VAR_6->Code = VAR_8 = *VAR_7;
    VAR_9 = 1;
    if ((VAR_8 & 0xc0) == VAR_0)
    {
        VAR_6->Code = VAR_0;
        VAR_6->Location += VAR_8 & 0x3f;
    }
    else if ((VAR_8 & 0xc0) == VAR_1)
    {
        VAR_6->Code = VAR_1;
        VAR_6->Reg = VAR_8 & 0x3f;
        VAR_9 += FUNC_2((unsigned long*)&VAR_6->Offset, VAR_7 + 1);
        VAR_6->Offset *= 8;
        VAR_6->IsUwop = 1;
    }
    else if ((VAR_8 & 0xc0) == VAR_2)
    {
        VAR_6->Code = VAR_2;
        VAR_6->Reg = VAR_8 & 0x3f;
    }
    else switch (VAR_8)
    {
        case 137:
            break;
        case 129:
            VAR_9 = 9;
            VAR_6->Location = *(DWORD*)(VAR_7 + 1);
            break;
        case 144:
            VAR_9 = 2;
            VAR_6->Location += VAR_7[1];
            break;
        case 143:
            VAR_9 = 3;

            VAR_6->Location += *(WORD*)(VAR_7 + 1);

            break;
        case 142:
            VAR_9 = 5;

            VAR_6->Location += *(DWORD*)(VAR_7 + 1);

            break;
        case 136:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            VAR_9 += FUNC_2((unsigned long*)&VAR_6->Offset, VAR_7 + VAR_9);
            VAR_6->IsUwop = 1;
            break;
        case 135:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            VAR_9 += FUNC_1(&VAR_6->Offset, VAR_7 + VAR_9);
            VAR_6->IsUwop = 1;
            break;
        case 132:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            break;
        case 128:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            break;
        case 130:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            break;
        case 134:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            VAR_9 += FUNC_2(&VAR_6->Reg2, VAR_7 + VAR_9);
            break;
        case 133:
            break;
        case 131:
            break;
        case 141:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            VAR_9 += FUNC_2((unsigned long*)&VAR_6->FramePtr, VAR_7 + VAR_9);
            VAR_6->IsUwop = 1;
            break;
        case 139:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            break;
        case 140:
            VAR_9 += FUNC_2((unsigned long*)&VAR_6->FramePtr, VAR_7 + VAR_9);
            VAR_6->IsUwop = 1;
            break;
        case 138:
            VAR_9 += FUNC_2(&VAR_6->Reg, VAR_7 + VAR_9);
            VAR_9 += FUNC_1(&VAR_6->FramePtr, VAR_7 + VAR_9);
            VAR_6->FramePtr *= 8;
            VAR_6->IsUwop = 1;
            break;
        case 145:
        {
            unsigned long VAR_11;
            FUNC_5("Warning, DW_CFA_GNU_args_size is unimplemented\n");
            VAR_9 += FUNC_2(&VAR_11, VAR_7 + VAR_9);
            break;
        }

        case 0x21:
        {
            unsigned long VAR_12;


            VAR_9 += FUNC_2(&VAR_12, VAR_7 + VAR_9);
            switch (VAR_12)
            {
                case 1:
                    VAR_6->TryLevel++;
                    if (VAR_6->TryLevel >= 20)
                    {
                        FUNC_5("WTF? Trylevel of 20 exceeded...\n");
                        FUNC_3(1);
                    }
                    VAR_6->SehBlock[VAR_6->TryLevel-1].BeginTry = VAR_6->Location;

                    VAR_6->Scope = 1;
                    break;

                case 2:
                    VAR_6->SehBlock[VAR_6->TryLevel-1].EndTry = VAR_6->Location;
                    VAR_6->Scope = 2;
                    break;

                case 3:
                    VAR_6->SehBlock[VAR_6->TryLevel-1].Target = VAR_6->Location;
                    VAR_6->Scope = 3;
                    break;

                case 4:
                    if (VAR_6->TryLevel == 20)
                    {
                        FUNC_5("Ooops, end of SEH with trylevel at 0!\n");
                        FUNC_3(1);
                    }
                    VAR_6->SehBlock[VAR_6->TryLevel-1].End = VAR_6->Location;
                    VAR_6->TryLevel--;
                    VAR_6->cScopes++;
                    VAR_6->Scope = 0;
                    break;

                case 5:
                {
                    unsigned long VAR_13;
                    VAR_9 += FUNC_2(&VAR_13, VAR_7 + VAR_9);
                    VAR_6->SehBlock[VAR_6->TryLevel-1].Handler = VAR_13;

                    break;
                }





                case 6:

                    break;

                case 7:
                {

                    break;
                }

                default:
                    FUNC_5("Found unknow PSEH code 0x%lx\n", VAR_12);
                    FUNC_3(1);
            }
            break;
        }
        default:
            FUNC_4(VAR_5, "unknown instruction 0x%hhx at 0x%p\n", VAR_8, VAR_7);
            FUNC_3(1);
    }

    VAR_6->FramePtrDiff = VAR_6->FramePtr - VAR_10;
    FUNC_0("@%p: code=%x, Loc=%lx, offset=%lx, reg=0x%lx:%s\n",
        (void*)((ULONG)VAR_7 - VAR_3), VAR_8, VAR_6->Location, VAR_6->Offset, VAR_6->Reg, VAR_4[VAR_6->Reg].name);
    return VAR_9;
}
