
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {scalar_t__ symtab_size; int * symtab; struct arm_private_data* private_data; } ;
struct arm_private_data {int last_mapping_sym; int has_mapping_symbols; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct disassemble_info*,int,int*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (bfd_vma VAR_5, struct disassemble_info *VAR_6,
    enum map_type *VAR_7)
{
  bfd_vma VAR_8;
  int VAR_9, VAR_10 = 0;
  bfd_boolean VAR_11 = VAR_0;
  enum map_type VAR_12 = VAR_1;
  struct arm_private_data *VAR_13;

  if (VAR_6->private_data == ((void*)0) || VAR_6->symtab_size == 0 || FUNC_0 (*VAR_6->symtab) != VAR_4) {
   return VAR_0;
  }

  VAR_13 = VAR_6->private_data;
  if (VAR_5 == 0) {
   VAR_10 = 0;
  } else {
   VAR_10 = VAR_13->last_mapping_sym;
  }

  VAR_10 = (VAR_10 == -1)? 0 : VAR_10;
  VAR_8 = FUNC_1 (VAR_6->symtab[VAR_10]);

  if (VAR_5 >= VAR_8)
    {
   if (FUNC_2 (VAR_6, VAR_10, &VAR_12)) {
    VAR_11 = VAR_3;
   }
    }
  else
    {
      for (VAR_9 = VAR_10 - 1; VAR_9 >= 0; VAR_9--)
 {
   if (FUNC_2 (VAR_6, VAR_9, &VAR_12))
     {
       VAR_11 = VAR_3;
       break;
     }
 }
    }






  if (!VAR_11 && VAR_13->has_mapping_symbols == 1)
    {
      VAR_12 = VAR_2;
      VAR_11 = VAR_3;
    }

  *VAR_7 = VAR_12;
  return VAR_11;
}
