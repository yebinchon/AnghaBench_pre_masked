
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nios2_opcode {int pinfo; unsigned int match; char* name; } ;
struct TYPE_4__ {struct TYPE_4__* next; struct nios2_opcode const* opcode; } ;
typedef TYPE_1__ nios2_opcode_hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__** VAR_6 ;
 int VAR_7 ;
 struct nios2_opcode const* VAR_8 ;
 TYPE_1__** VAR_9 ;
 int FUNC_3 (char*,...) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  unsigned int VAR_11;
  register const struct nios2_opcode *VAR_12;

  for (VAR_11 = 0; VAR_11 <= VAR_4; ++VAR_11) {
   VAR_6[0] = ((void*)0);
  }
  for (VAR_11 = 0; VAR_11 <= VAR_4; VAR_11++) {
   for (VAR_12 = VAR_8; VAR_12 < &VAR_8[VAR_3]; VAR_12++) {
    nios2_opcode_hash *VAR_13;
    nios2_opcode_hash **VAR_14 = ((void*)0);

    if ((VAR_12->pinfo & VAR_0) == VAR_0) {
     if (VAR_11 == ((VAR_12->match >> VAR_5) & VAR_4) && (VAR_12->pinfo & (VAR_1 | VAR_2) & 0x7fffffff)) {
      VAR_14 = &(VAR_9[VAR_11]);
     }
    } else if (VAR_11 == ((VAR_12->match >> VAR_5) & VAR_4)) {
     VAR_14 = &(VAR_6[VAR_11]);
    }

    if (VAR_14) {
     VAR_13 =
      (nios2_opcode_hash *)FUNC_2 (sizeof (nios2_opcode_hash));
     if (!VAR_13) {
      FUNC_1 (VAR_10,
       "error allocating memory...broken disassembler\n");
      FUNC_0 ();
     }
     VAR_13->opcode = VAR_12;
     VAR_13->next = ((void*)0);
     while (*VAR_14) {
      VAR_14 = &((*VAR_14)->next);
     }
     *VAR_14 = VAR_13;
    }
   }
  }
  VAR_7 = 1;
}
