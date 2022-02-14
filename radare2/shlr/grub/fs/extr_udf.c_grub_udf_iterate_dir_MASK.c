
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int tag_ident; } ;
struct grub_udf_file_ident {int characteristics; int file_ident_length; int imp_use_length; int icb; TYPE_2__ tag; } ;
struct grub_fshelp_node {int dummy; } ;
typedef int grub_uint8_t ;
typedef int grub_uint32_t ;
typedef int grub_uint16_t ;
typedef unsigned int grub_size_t ;
typedef TYPE_3__* grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;
typedef int dirent ;
struct TYPE_10__ {int file_size; } ;
struct TYPE_12__ {int data; TYPE_1__ fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int,int,char*) ;
 scalar_t__ FUNC_7 (int ,int *,TYPE_3__*) ;
 char* FUNC_8 (int*,int*,unsigned int) ;

__attribute__((used)) static int
FUNC_9 (grub_fshelp_node_t VAR_6,
        int (*VAR_7) (const char *VAR_8,
       enum grub_fshelp_filetype VAR_9,
       grub_fshelp_node_t VAR_10,
       void *VAR_11),
        void *VAR_12)
{
  grub_fshelp_node_t VAR_13;
  struct grub_udf_file_ident VAR_14;
  grub_uint32_t VAR_15 = 0;

  VAR_13 = FUNC_4 (sizeof (struct grub_fshelp_node));
  if (!VAR_13)
    return 0;


  FUNC_5 ((char *) VAR_13, (char *) VAR_6,
        sizeof (struct grub_fshelp_node));

  if (VAR_7 (".", VAR_1, VAR_13, VAR_12))
    return 1;

  while (VAR_15 < FUNC_1 (VAR_6->fe.file_size))
    {
      if (FUNC_6 (VAR_6, 0, 0, 0, VAR_15, sizeof (VAR_14),
         (char *) &VAR_14) != sizeof (VAR_14))
 return 0;

      if (FUNC_0 (VAR_14.tag.tag_ident) != VAR_5)
 {
   FUNC_2 (VAR_0, "invalid fid tag");
   return 0;
 }

      VAR_13 = FUNC_4 (sizeof (struct grub_fshelp_node));
      if (!VAR_13)
 return 0;

      if (FUNC_7 (VAR_6->data, &VAR_14.icb, VAR_13))
 return 0;

      VAR_15 += sizeof (VAR_14) + FUNC_0 (VAR_14.imp_use_length);
      if (VAR_14.characteristics & VAR_4)
 {

   if (VAR_7 ("..", VAR_1, VAR_13, VAR_12))
     return 1;
 }
      else
 {
   enum grub_fshelp_filetype VAR_16;

   grub_uint8_t VAR_17[VAR_14.file_ident_length];
   grub_uint16_t VAR_18[VAR_14.file_ident_length - 1];
   grub_uint8_t VAR_19[VAR_14.file_ident_length * 2];





   grub_size_t VAR_20 = 0;

   VAR_16 = ((VAR_14.characteristics & VAR_3) ?
    (VAR_1) : (VAR_2));

   if ((FUNC_6 (VAR_6, 0, 0, 0, VAR_15,
       VAR_14.file_ident_length,
       (char *) VAR_17))
       != VAR_14.file_ident_length)
     return 0;

   if (VAR_17[0] == 8)
     {
       unsigned VAR_21;
       VAR_20 = VAR_14.file_ident_length - 1;
       for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
  VAR_18[VAR_21] = VAR_17[VAR_21 + 1];
     }
   if (VAR_17[0] == 16)
     {
       unsigned VAR_22;
       VAR_20 = (VAR_14.file_ident_length - 1) / 2;
       for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++)
  VAR_18[VAR_22] = (VAR_17[2 * VAR_22 + 1] << 8) | VAR_17[2*VAR_22 + 2];
     }
   if (VAR_17[0] == 8 || VAR_17[0] == 16)
     {
       *FUNC_8 (VAR_19, VAR_18, VAR_20) = '\0';

       if (VAR_7 ((char *) VAR_19, VAR_16, VAR_13, VAR_12))
  return 1;
     }
 }


      VAR_15 = (VAR_15 + VAR_14.file_ident_length + 3) & (~3);
    }
  FUNC_3(VAR_13);
  return 0;
}
