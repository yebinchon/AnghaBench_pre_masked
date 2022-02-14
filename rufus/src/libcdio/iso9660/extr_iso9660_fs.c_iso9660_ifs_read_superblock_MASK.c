
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int iso_extension_mask_t ;
struct TYPE_8__ {scalar_t__ u_joliet_level; int svd; int pvd; } ;
typedef TYPE_1__ iso9660_t ;
struct TYPE_9__ {int* escape_sequences; int type; } ;
typedef TYPE_2__ iso9660_svd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*,scalar_t__,int) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;

bool
FUNC_5 (iso9660_t *VAR_6,
        iso_extension_mask_t VAR_7)
{
  iso9660_svd_t VAR_8;
  int VAR_9;

  if (!VAR_6 || !FUNC_2(VAR_6, &(VAR_6->pvd)))
    return 0;

  VAR_6->u_joliet_level = 0;


  for (VAR_9=1; (0 != FUNC_3 (VAR_6, &VAR_8, VAR_3+VAR_9, 1)); VAR_9++) {
    if (VAR_4 == FUNC_1(VAR_8.type) )
      break;
    if ( VAR_5 == FUNC_1(VAR_8.type) ) {

      if (VAR_6->u_joliet_level == 0)
        FUNC_4(&(VAR_6->svd), &VAR_8, sizeof(iso9660_svd_t));
      if (VAR_8.escape_sequences[0] == 0x25
   && VAR_8.escape_sequences[1] == 0x2f) {
 switch (VAR_8.escape_sequences[2]) {
 case 0x40:
   if (VAR_7 & VAR_0)
     VAR_6->u_joliet_level = 1;
   break;
 case 0x43:
   if (VAR_7 & VAR_1)
     VAR_6->u_joliet_level = 2;
   break;
 case 0x45:
   if (VAR_7 & VAR_2)
     VAR_6->u_joliet_level = 3;
   break;
 default:
   FUNC_0("Supplementary Volume Descriptor found, but not Joliet");
 }
 if (VAR_6->u_joliet_level > 0) {
   FUNC_0("Found Extension: Joliet Level %d", VAR_6->u_joliet_level);
 }
      }
    }
  }

  return 1;
}
