
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ tag_ident; } ;
struct TYPE_8__ {int block_num; int part_ref; } ;
struct TYPE_9__ {TYPE_3__ block; } ;
struct TYPE_6__ {int start; } ;
struct grub_udf_vrs {scalar_t__ tag_ident; int part_num; int root_icb; TYPE_5__ tag; TYPE_4__ root_fileset; int num_part_maps; int part_maps; TYPE_1__ vds; int magic; } ;
struct grub_udf_tag {scalar_t__ tag_ident; int part_num; int root_icb; TYPE_5__ tag; TYPE_4__ root_fileset; int num_part_maps; int part_maps; TYPE_1__ vds; int magic; } ;
struct grub_udf_pd {int dummy; } ;
struct TYPE_7__ {int part_num; } ;
struct grub_udf_partmap {scalar_t__ type; TYPE_2__ type1; int length; } ;
struct grub_udf_lvd {int dummy; } ;
struct grub_udf_fileset {scalar_t__ tag_ident; int part_num; int root_icb; TYPE_5__ tag; TYPE_4__ root_fileset; int num_part_maps; int part_maps; TYPE_1__ vds; int magic; } ;
struct grub_udf_data {size_t npd; size_t npm; int root_icb; struct grub_udf_vrs lvd; struct grub_udf_partmap** pms; struct grub_udf_vrs* pds; int disk; } ;
struct grub_udf_avdp {scalar_t__ tag_ident; int part_num; int root_icb; TYPE_5__ tag; TYPE_4__ root_fileset; int num_part_maps; int part_maps; TYPE_1__ vds; int magic; } ;
typedef int grub_uint32_t ;
typedef int grub_disk_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,int ,int,struct grub_udf_vrs*) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct grub_udf_data*) ;
 struct grub_udf_data* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct grub_udf_data*,int ,int ) ;
 int* VAR_18 ;

__attribute__((used)) static struct grub_udf_data *
FUNC_8 (grub_disk_t VAR_19)
{
  struct grub_udf_data *VAR_20 = 0;
  struct grub_udf_fileset VAR_21;
  int *VAR_22 = VAR_18;
  grub_uint32_t VAR_23;
  int VAR_24;

  VAR_20 = FUNC_5 (sizeof (struct grub_udf_data));
  if (!VAR_20)
    return 0;

  VAR_20->disk = VAR_19;


  for (VAR_23 = 16;; VAR_23++)
    {
      struct grub_udf_vrs VAR_25;

      if (FUNC_2 (VAR_19, VAR_23 << VAR_1, 0,
     sizeof (struct grub_udf_vrs), &VAR_25))
 {
   FUNC_3 (VAR_0, "not an UDF filesystem");
   goto fail;
 }

      if ((!FUNC_6 (VAR_25.magic, VAR_10, 5)) ||
   (!FUNC_6 (VAR_25.magic, VAR_9, 5)))
 break;

      if ((FUNC_6 (VAR_25.magic, VAR_5, 5)) &&
   (FUNC_6 (VAR_25.magic, VAR_6, 5)) &&
   (FUNC_6 (VAR_25.magic, VAR_7, 5)) &&
   (FUNC_6 (VAR_25.magic, VAR_8, 5)) &&
   (FUNC_6 (VAR_25.magic, VAR_11, 5)))
 {
   FUNC_3 (VAR_0, "not an UDF filesystem");
   goto fail;
 }
    }


  while (1)
    {
      struct grub_udf_avdp VAR_26;

      if (FUNC_2 (VAR_19, *VAR_22 << VAR_1, 0,
     sizeof (struct grub_udf_avdp), &VAR_26))
 {
   FUNC_3 (VAR_0, "not an UDF filesystem");
   goto fail;
 }

      if (FUNC_0 (VAR_26.tag.tag_ident) == VAR_12)
 {
   VAR_23 = FUNC_1 (VAR_26.vds.start);
   break;
 }

      VAR_22++;
      if (*VAR_22 == 0)
 {
   FUNC_3 (VAR_0, "not an UDF filesystem");
   goto fail;
 }
    }

  VAR_20->npd = VAR_20->npm = 0;

  while (1)
    {
      struct grub_udf_tag VAR_27;

      if (FUNC_2 (VAR_19, VAR_23 << VAR_1, 0,
     sizeof (struct grub_udf_tag), &VAR_27))
 {
   FUNC_3 (VAR_0, "not an UDF filesystem");
   goto fail;
 }

      VAR_27.tag_ident = FUNC_0 (VAR_27.tag_ident);
      if (VAR_27.tag_ident == VAR_15)
 {
   if (VAR_20->npd >= VAR_2)
     {
       FUNC_3 (VAR_0, "too many PDs");
       goto fail;
     }

   if (FUNC_2 (VAR_19, VAR_23 << VAR_1, 0,
         sizeof (struct grub_udf_pd),
         &VAR_20->pds[VAR_20->npd]))
     {
       FUNC_3 (VAR_0, "not an UDF filesystem");
       goto fail;
     }

   VAR_20->npd++;
 }
      else if (VAR_27.tag_ident == VAR_14)
 {
   int VAR_28;

   struct grub_udf_partmap *VAR_29;

   if (FUNC_2 (VAR_19, VAR_23 << VAR_1, 0,
         sizeof (struct grub_udf_lvd),
         &VAR_20->lvd))
     {
       FUNC_3 (VAR_0, "not an UDF filesystem");
       goto fail;
     }

   if (VAR_20->npm + FUNC_1 (VAR_20->lvd.num_part_maps) > VAR_3)
     {
       FUNC_3 (VAR_0, "too many partition maps");
       goto fail;
     }

   VAR_29 = (struct grub_udf_partmap *) &VAR_20->lvd.part_maps;
   for (VAR_28 = FUNC_1 (VAR_20->lvd.num_part_maps); VAR_28 > 0; VAR_28--)
     {
       if (VAR_29->type != VAR_4)
  {
    FUNC_3 (VAR_0, "partmap type not supported");
    goto fail;
  }

       VAR_20->pms[VAR_20->npm++] = VAR_29;
       VAR_29 = (struct grub_udf_partmap *) ((char *) VAR_29 +
                                                 FUNC_1 (VAR_29->length));
     }
 }
      else if (VAR_27.tag_ident > VAR_16)
 {
   FUNC_3 (VAR_0, "invalid tag ident");
   goto fail;
 }
      else if (VAR_27.tag_ident == VAR_16)
 break;

      VAR_23++;
    }

  for (VAR_24 = 0; VAR_24 < VAR_20->npm; VAR_24++)
    {
      int VAR_30;

      for (VAR_30 = 0; VAR_30 < VAR_20->npd; VAR_30++)
 if (VAR_20->pms[VAR_24]->type1.part_num == VAR_20->pds[VAR_30].part_num)
   {
     VAR_20->pms[VAR_24]->type1.part_num = VAR_30;
     break;
   }

      if (VAR_30 == VAR_20->npd)
 {
   FUNC_3 (VAR_0, "can\'t find PD");
   goto fail;
 }
    }

  VAR_23 = FUNC_7 (VAR_20,
         VAR_20->lvd.root_fileset.block.part_ref,
         VAR_20->lvd.root_fileset.block.block_num);

  if (VAR_17)
    goto fail;

  if (FUNC_2 (VAR_19, VAR_23 << VAR_1, 0,
        sizeof (struct grub_udf_fileset), &VAR_21))
    {
      FUNC_3 (VAR_0, "not an UDF filesystem");
      goto fail;
    }

  if (FUNC_0 (VAR_21.tag.tag_ident) != VAR_13)
    {
      FUNC_3 (VAR_0, "invalid fileset descriptor");
      goto fail;
    }

  VAR_20->root_icb = VAR_21.root_icb;

  return VAR_20;

fail:
  FUNC_4 (VAR_20);
  return 0;
}
