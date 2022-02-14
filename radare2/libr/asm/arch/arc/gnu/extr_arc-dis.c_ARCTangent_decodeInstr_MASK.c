
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct arcDisState {size_t* instrBuffer; size_t* operandBuffer; int instructionLen; scalar_t__* addresses; int instName; int condCodeName; int auxRegName; int coreRegName; struct arcDisState* _this; void** words; } ;
typedef int (* fprintf_ftype ) (void*,char*,size_t*) ;
struct TYPE_7__ {int (* read_memory_func ) (scalar_t__,int *,int,TYPE_1__*) ;scalar_t__ endian; int (* print_address_func ) (scalar_t__,TYPE_1__*) ;int (* memory_error_func ) (int,scalar_t__,TYPE_1__*) ;int (* fprintf_func ) (void*,char*,size_t*) ;void* stream; } ;
typedef TYPE_1__ disassemble_info ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct arcDisState) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,void*) ;
 int FUNC_4 (struct arcDisState*,int ,int) ;
 int FUNC_5 (scalar_t__,int *,int,TYPE_1__*) ;
 int FUNC_6 (int,scalar_t__,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,int *,int,TYPE_1__*) ;
 int FUNC_8 (void*,char*,size_t*) ;
 int FUNC_9 (scalar_t__,TYPE_1__*) ;
 int FUNC_10 (void*,char*,size_t*) ;

int
FUNC_11 (bfd_vma VAR_5, disassemble_info *VAR_6)
{
  int VAR_7;
  bfd_byte VAR_8[4];
  struct arcDisState VAR_9;
  void *VAR_10 = VAR_6->stream;
  fprintf_ftype VAR_11 = VAR_6->fprintf_func;

  FUNC_4 (&VAR_9, 0, sizeof(struct arcDisState));


  VAR_7 = (*VAR_6->read_memory_func) (VAR_5, VAR_8, 4, VAR_6);
  if (VAR_7 != 0)
    {
      (*VAR_6->memory_error_func) (VAR_7, VAR_5, VAR_6);
      return -1;
    }
    if (VAR_6->endian == VAR_0) {
     VAR_9.words[0] = FUNC_2 (VAR_8);
    } else {
     VAR_9.words[0] = FUNC_1 (VAR_8);
    }


    VAR_7 = (*VAR_6->read_memory_func) (VAR_5 + 4, VAR_8, 4, VAR_6);
    if (VAR_6->endian == VAR_0) {
     VAR_9.words[1] = FUNC_2 (VAR_8);
    } else {
     VAR_9.words[1] = FUNC_1 (VAR_8);
    }

    VAR_9._this = &VAR_9;
    VAR_9.coreRegName = VAR_3;
    VAR_9.auxRegName = VAR_1;
    VAR_9.condCodeName = VAR_2;
    VAR_9.instName = VAR_4;


    FUNC_3 (VAR_5, (void *)&VAR_9);






    (*VAR_11) (VAR_10, "%s ", VAR_9.instrBuffer);

    if (FUNC_0 (VAR_9)) {
     bfd_vma VAR_12 = VAR_9.addresses[VAR_9.operandBuffer[1] - '0'];

     (*VAR_6->print_address_func) ((bfd_vma)VAR_12, VAR_6);

    } else {
     (*VAR_11) (VAR_10, "%s", VAR_9.operandBuffer);
    }

    return VAR_9.instructionLen;

}
