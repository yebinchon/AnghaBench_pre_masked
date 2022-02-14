
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct arcDisState {int instructionLen; int* words; int instName; int condCodeName; int auxRegName; int coreRegName; struct arcDisState* _this; } ;
struct TYPE_10__ {scalar_t__ endian; int (* read_memory_func ) (scalar_t__,int*,int,TYPE_1__*) ;int bytes_per_line; int (* memory_error_func ) (int,scalar_t__,TYPE_1__*) ;} ;
typedef TYPE_1__ disassemble_info ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int*) ;
 void* FUNC_1 (int*) ;
 int FUNC_2 (scalar_t__,void*,TYPE_1__*) ;
 int FUNC_3 (struct arcDisState*,int ,int) ;
 int FUNC_4 (scalar_t__,int*,int,TYPE_1__*) ;
 int FUNC_5 (int,scalar_t__,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int*,int,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,int*,int,TYPE_1__*) ;
 int FUNC_8 (int,scalar_t__,TYPE_1__*) ;
 int FUNC_9 (scalar_t__,int*,int,TYPE_1__*) ;

struct arcDisState
FUNC_10
(
 bfd_vma VAR_5,
 disassemble_info* VAR_6
 )
{
  int VAR_7;
  bfd_byte VAR_8[4];
  struct arcDisState VAR_9;
  int VAR_10;
  int VAR_11, VAR_12;

  VAR_11 = ((VAR_6->endian == VAR_0) ? 1 : 0);
  VAR_12 = ((VAR_6->endian == VAR_0) ? 0 : 1);

  FUNC_3(&VAR_9, 0, sizeof(struct arcDisState));


  VAR_7 = (*VAR_6->read_memory_func) (VAR_5, VAR_8, 2, VAR_6);

  if (VAR_7 != 0)
    {
      (*VAR_6->memory_error_func) (VAR_7, VAR_5, VAR_6);
      VAR_9.instructionLen = -1;
      return VAR_9;
    }

  if (((VAR_8[VAR_11] & 0xf8) > 0x38) && ((VAR_8[VAR_11] & 0xf8) != 0x48))
  {
    VAR_9.instructionLen = 2;
    VAR_9.words[0] = (VAR_8[VAR_11] << 8) | VAR_8[VAR_12];
    VAR_7 = (*VAR_6->read_memory_func) (VAR_5 + 2, VAR_8, 4, VAR_6);
    if (VAR_6->endian == VAR_0) {
     VAR_9.words[1] = FUNC_1 (VAR_8);
    } else {
     VAR_9.words[1] = FUNC_0 (VAR_8);
    }
  }
  else
  {
    VAR_9.instructionLen = 4;
    VAR_7 = (*VAR_6->read_memory_func) (VAR_5 + 2, &VAR_8[2], 2, VAR_6);
    if (VAR_7 != 0)
    {
      (*VAR_6->memory_error_func) (VAR_7, VAR_5 + 2, VAR_6);
      VAR_9.instructionLen = -1;
      return VAR_9;
    }
    if (VAR_6->endian == VAR_0) {
     VAR_9.words[0] = FUNC_1 (VAR_8);
    } else {
     VAR_9.words[0] = FUNC_0 (VAR_8);
    }



    VAR_7 = (*VAR_6->read_memory_func) (VAR_5 + 4, VAR_8, 4, VAR_6);
    if (VAR_6->endian == VAR_0) {
     VAR_9.words[1] = FUNC_1 (VAR_8);
    } else {
     VAR_9.words[1] = FUNC_0 (VAR_8);
    }
  }

  VAR_9._this = &VAR_9;
  VAR_9.coreRegName = VAR_3;
  VAR_9.auxRegName = VAR_1;
  VAR_9.condCodeName = VAR_2;
  VAR_9.instName = VAR_4;


  VAR_10 = FUNC_2(VAR_5, (void *)&VAR_9, VAR_6);

  VAR_6->bytes_per_line = VAR_10;
  return VAR_9;
}
