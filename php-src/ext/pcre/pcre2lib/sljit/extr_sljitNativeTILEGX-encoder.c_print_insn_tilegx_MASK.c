
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tilegx_mnemonic ;
struct tilegx_operand {int type; } ;
struct tilegx_opcode {scalar_t__ mnemonic; char* name; int num_operands; int can_bundle; } ;
struct tilegx_decoded_instruction {unsigned long long* operand_values; struct tilegx_operand** operands; struct tilegx_opcode* opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_0 () ;
 char* FUNC_1 (unsigned long long) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (unsigned long long,unsigned long long,struct tilegx_decoded_instruction*) ;
 int FUNC_4 (char*,...) ;
 char** VAR_4 ;

int
FUNC_5 (unsigned char * VAR_5)
{
  struct tilegx_decoded_instruction
    VAR_6[VAR_1];
  unsigned char VAR_7[VAR_0];
  int VAR_8, VAR_9, VAR_10;
  tilegx_mnemonic VAR_11;

  FUNC_2((void *)VAR_7, (void *)VAR_5, VAR_0);


  VAR_9 =
    FUNC_3 (*(unsigned long long *)VAR_7, (unsigned long long)VAR_5, VAR_6);


  FUNC_4("{ ");
  VAR_10 = 0;


  VAR_11 = VAR_2;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  {
    if (!VAR_6[VAR_8].opcode->can_bundle)
    {


      VAR_11 = VAR_3;
      break;
    }
  }

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  {
    const struct tilegx_opcode *VAR_12 = VAR_6[VAR_8].opcode;
    const char *VAR_13;
    int VAR_14;



    if (VAR_12->mnemonic == VAR_11
        && (VAR_10 > 0 || VAR_8 + 1 < VAR_9))
      continue;

    if (VAR_10 > 0)
      FUNC_4(" ; ");
    ++VAR_10;

    VAR_13 = VAR_12->name;
    if (VAR_13 == ((void*)0))
      VAR_13 = "<invalid>";
    FUNC_4("%s", VAR_13);

    for (VAR_14 = 0; VAR_14 < VAR_12->num_operands; VAR_14++)
    {
      unsigned long long VAR_15;
      const struct tilegx_operand *VAR_16;
      const char *VAR_17;

      if (VAR_14 > 0)
        FUNC_4 (",");
      FUNC_4 (" ");

      VAR_15 = VAR_6[VAR_8].operand_values[VAR_14];

      VAR_16 = VAR_6[VAR_8].operands[VAR_14];
      switch (VAR_16->type)
      {
      case 129:
        FUNC_4 ("%s", VAR_4[(int)VAR_15]);
        break;
      case 128:
        VAR_17 = FUNC_1(VAR_15);
        if (VAR_17 != ((void*)0))
          FUNC_4 ("%s", VAR_17);
        else
          FUNC_4 ("%d", (int)VAR_15);
        break;
      case 130:
        FUNC_4 ("%d", (int)VAR_15);
        break;
      case 131:
        FUNC_4 ("0x%016llx", VAR_15);
        break;
      default:
        FUNC_0 ();
      }
    }
  }
  FUNC_4 (" }\n");

  return VAR_0;
}
