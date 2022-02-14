
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_obj_symbol {scalar_t__ segment; int name; int offset; } ;
struct grub_obj_reloc_extern {scalar_t__ segment; int type; int addend; scalar_t__ symbol_segment; int symbol_name; int offset; } ;
struct grub_obj_reloc {int dummy; } ;
struct grub_obj_header {int string_table; int symbol_table; int reloc_table; } ;
typedef int grub_uint64_t ;
typedef int grub_uint32_t ;
typedef int grub_uint16_t ;
typedef int grub_int32_t ;
typedef int grub_err_t ;
typedef int grub_dl_t ;
typedef int grub_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 char* FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static grub_err_t
FUNC_4 (grub_dl_t VAR_6, struct grub_obj_header *VAR_7)
{
  char *VAR_8;
  struct grub_obj_symbol *VAR_9;
  struct grub_obj_reloc_extern *VAR_10;

  VAR_8 = (char *) VAR_7 + VAR_7->string_table;

  for (VAR_9 = (struct grub_obj_symbol *) ((char *) VAR_7 + VAR_7->symbol_table);
       VAR_9->segment != VAR_4; VAR_9++)
    {
      char *VAR_11;

      VAR_11 = FUNC_0 (VAR_6, VAR_9->segment);
      VAR_11 += VAR_9->offset;

      if (FUNC_1 (VAR_8 + VAR_9->name, VAR_11, VAR_6))
 return VAR_5;
    }

  for (VAR_10 = (struct grub_obj_reloc_extern *) ((char *) VAR_7 + VAR_7->reloc_table);
       VAR_10->segment != VAR_4;)
    {
      char *VAR_12, *VAR_13;
      grub_addr_t VAR_14;
      int VAR_15;

      VAR_12 = FUNC_0 (VAR_6, VAR_10->segment);
      VAR_12 += VAR_10->offset;
      VAR_15 = VAR_10->type;




      VAR_14 = *((grub_addr_t *) VAR_12);


      if (VAR_10->symbol_segment == VAR_4)
 {
   char *VAR_16;

   VAR_16 = VAR_8 + VAR_10->symbol_name;
   VAR_13 = FUNC_2 (VAR_16);
   if (! VAR_13)
     return FUNC_3 (VAR_0,
          "symbol not found: `%s'", VAR_16);
   VAR_10++;
 }
      else
 {
   VAR_13 = FUNC_0 (VAR_6, VAR_10->symbol_segment);
   VAR_10 = (struct grub_obj_reloc_extern *)
     ((char *) VAR_10 + sizeof (struct grub_obj_reloc));
 }

      VAR_14 += (grub_addr_t) VAR_13;
      if (VAR_15 & VAR_2)
 VAR_14 -= (grub_addr_t) VAR_12;

      VAR_15 &= VAR_3;
      switch (VAR_15)
 {
 case 133:
   *((grub_uint32_t *) VAR_12) = VAR_14;
   break;
 default:
   return FUNC_3 (VAR_0,
        "unknown reloc type %d", VAR_15);
 }
    }

  return VAR_1;
}
