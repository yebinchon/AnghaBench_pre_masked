
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** h_master_sat; void* h_num_sectors_in_master_sat; void* h_secid_first_sector_in_master_sat; void* h_num_sectors_in_short_sat; void* h_secid_first_sector_in_short_sat; void* h_min_size_standard_stream; void* h_secid_first_directory; void* h_num_sectors_in_sat; void* h_short_sec_size_p2; void* h_sec_size_p2; void* h_byte_order; void* h_version; void* h_revision; void** h_uuid; void* h_magic; } ;
typedef TYPE_1__ cdf_header_t ;


 void* FUNC_0 (int ,void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 size_t FUNC_4 (void**) ;
 int VAR_0 ;

void
FUNC_5(cdf_header_t *VAR_1)
{
 size_t VAR_2;

 VAR_1->h_magic = FUNC_3(VAR_1->h_magic);
 VAR_1->h_uuid[0] = FUNC_3(VAR_1->h_uuid[0]);
 VAR_1->h_uuid[1] = FUNC_3(VAR_1->h_uuid[1]);
 VAR_1->h_revision = FUNC_1(VAR_1->h_revision);
 VAR_1->h_version = FUNC_1(VAR_1->h_version);
 VAR_1->h_byte_order = FUNC_1(VAR_1->h_byte_order);
 VAR_1->h_sec_size_p2 = FUNC_1(VAR_1->h_sec_size_p2);
 VAR_1->h_short_sec_size_p2 = FUNC_1(VAR_1->h_short_sec_size_p2);
 VAR_1->h_num_sectors_in_sat = FUNC_2(VAR_1->h_num_sectors_in_sat);
 VAR_1->h_secid_first_directory = FUNC_2(VAR_1->h_secid_first_directory);
 VAR_1->h_min_size_standard_stream =
     FUNC_2(VAR_1->h_min_size_standard_stream);
 VAR_1->h_secid_first_sector_in_short_sat =
     FUNC_2(FUNC_0(VAR_0, VAR_1->h_secid_first_sector_in_short_sat));
 VAR_1->h_num_sectors_in_short_sat =
     FUNC_2(VAR_1->h_num_sectors_in_short_sat);
 VAR_1->h_secid_first_sector_in_master_sat =
     FUNC_2(FUNC_0(VAR_0, VAR_1->h_secid_first_sector_in_master_sat));
 VAR_1->h_num_sectors_in_master_sat =
     FUNC_2(VAR_1->h_num_sectors_in_master_sat);
 for (VAR_2 = 0; VAR_2 < FUNC_4(VAR_1->h_master_sat); VAR_2++) {
  VAR_1->h_master_sat[VAR_2] =
      FUNC_2(FUNC_0(VAR_0, VAR_1->h_master_sat[VAR_2]));
 }
}
