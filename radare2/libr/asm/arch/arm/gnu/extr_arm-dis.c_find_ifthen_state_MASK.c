
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int (* read_memory_func ) (scalar_t__,int *,int,struct disassemble_info*) ;scalar_t__ (* symbol_at_address_func ) (scalar_t__,struct disassemble_info*) ;} ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_byte ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,struct disassemble_info*,int*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct disassemble_info*) ;
 int FUNC_2 (scalar_t__,int *,int,struct disassemble_info*) ;

__attribute__((used)) static void
FUNC_3 (bfd_vma VAR_4,
     struct disassemble_info *VAR_5,
     bfd_boolean VAR_6)
{
  unsigned char VAR_7[2];
  unsigned int VAR_8;
  int VAR_9;


  int VAR_10;
  int VAR_11;
  unsigned int VAR_12;
  bfd_vma VAR_13;

  VAR_2 = VAR_4;
  VAR_3 = 0;

  VAR_13 = VAR_4;
  VAR_10 = 1;
  VAR_11 = 0;
  VAR_12 = 0;



  for (;;)
    {
      if (VAR_13 == 0 || VAR_5->symbol_at_address_func (VAR_13, VAR_5))
 {


   if (VAR_12 && (VAR_10 & 1)) {
    break;
   }

   return;
 }
      VAR_13 -= 2;
      VAR_9 = VAR_5->read_memory_func (VAR_13, (bfd_byte *) VAR_7, 2, VAR_5);
      if (VAR_9) {
       return;
      }

      if (VAR_6) {
       VAR_8 = (VAR_7[0]) | (VAR_7[1] << 8);
      } else {
       VAR_8 = (VAR_7[1]) | (VAR_7[0] << 8);
      }
      if (VAR_12)
 {
   if ((VAR_8 & 0xf800) < 0xe800)
     {



       if (VAR_10 & 1) {
        break;
       }
       VAR_12 = 0;
     }
 }
      if ((VAR_8 & 0xff00) == 0xbf00 && (VAR_8 & 0xf) != 0)
 {
   enum map_type VAR_14 = VAR_0;
   bfd_boolean VAR_15 = FUNC_0 (VAR_13, VAR_5, &VAR_14);

   if (!VAR_15 || (VAR_15 && VAR_14 == VAR_1))
     {

       VAR_12 = VAR_8;
       VAR_11 = VAR_10 >> 1;
     }
 }
 if ((VAR_8 & 0xf800) >= 0xe800) {
  VAR_10++;
 } else {
  VAR_10 = (VAR_10 + 2) | 1;
 }

 if (VAR_10 >= 8 && !VAR_12) {
  return;
 }
    }

  VAR_3 = (VAR_12 & 0xe0) | ((VAR_12 << VAR_11) & 0x1f);
  if ((VAR_3 & 0xf) == 0) {
   VAR_3 = 0;
  }
}
