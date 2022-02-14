
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * h_master_sat; int h_num_sectors_in_master_sat; int h_secid_first_sector_in_master_sat; int h_num_sectors_in_short_sat; int h_secid_first_sector_in_short_sat; int h_min_size_standard_stream; int h_unused1; int h_secid_first_directory; int h_num_sectors_in_sat; int h_unused0; int h_short_sec_size_p2; int h_sec_size_p2; int h_byte_order; int h_version; int h_revision; int h_uuid; int h_magic; } ;
typedef TYPE_1__ cdf_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int *) ;

void
FUNC_3(cdf_header_t *VAR_0, char *VAR_1)
{
 size_t VAR_2;
 size_t VAR_3 = 0;

 FUNC_0(VAR_0->h_magic);
 FUNC_1(VAR_0->h_uuid);
 FUNC_0(VAR_0->h_revision);
 FUNC_0(VAR_0->h_version);
 FUNC_0(VAR_0->h_byte_order);
 FUNC_0(VAR_0->h_sec_size_p2);
 FUNC_0(VAR_0->h_short_sec_size_p2);
 FUNC_1(VAR_0->h_unused0);
 FUNC_0(VAR_0->h_num_sectors_in_sat);
 FUNC_0(VAR_0->h_secid_first_directory);
 FUNC_1(VAR_0->h_unused1);
 FUNC_0(VAR_0->h_min_size_standard_stream);
 FUNC_0(VAR_0->h_secid_first_sector_in_short_sat);
 FUNC_0(VAR_0->h_num_sectors_in_short_sat);
 FUNC_0(VAR_0->h_secid_first_sector_in_master_sat);
 FUNC_0(VAR_0->h_num_sectors_in_master_sat);
 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0->h_master_sat); VAR_2++)
  FUNC_0(VAR_0->h_master_sat[VAR_2]);
}
