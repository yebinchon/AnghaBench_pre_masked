
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int iso_extension_mask_t ;
typedef int iso9660_stat_t ;
typedef int iso9660_dir_t ;
struct TYPE_9__ {int root_directory_record; } ;
struct TYPE_8__ {int root_directory_record; } ;
struct TYPE_10__ {scalar_t__ u_joliet_level; TYPE_2__ pvd; TYPE_1__ svd; } ;
typedef TYPE_3__ generic_img_private_t ;
typedef int bool_3way_t ;
struct TYPE_11__ {scalar_t__ env; } ;
typedef TYPE_4__ CdIo_t ;




 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static iso9660_stat_t *
FUNC_4 (CdIo_t *VAR_5)
{

  if (!VAR_5) return ((void*)0);

  {
    iso_extension_mask_t VAR_6 = VAR_0;
    generic_img_private_t *VAR_7 = (generic_img_private_t *) VAR_5->env;
    iso9660_dir_t *VAR_8;
    iso9660_stat_t *VAR_9;
    bool_3way_t VAR_10;

    if (!VAR_7->u_joliet_level)
      VAR_6 &= ~VAR_1;


    if ( !FUNC_3 (VAR_5, VAR_6) ) {
      FUNC_2("Could not read ISO-9660 Superblock.");
      return ((void*)0);
    }

    switch(FUNC_1(VAR_5)) {
    case 128:
      VAR_10 = VAR_4;
      break;
    case 129:
      VAR_10 = VAR_3;
      break;
    default:
      VAR_10 = VAR_2;
    }






    VAR_8 = &(VAR_7->pvd.root_directory_record) ;


    VAR_9 = FUNC_0 (VAR_8, ((void*)0),
          VAR_10, VAR_7->u_joliet_level);
    return VAR_9;
  }

}
