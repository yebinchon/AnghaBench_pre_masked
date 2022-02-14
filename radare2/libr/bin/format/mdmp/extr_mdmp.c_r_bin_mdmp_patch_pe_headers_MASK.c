
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int section_hdr ;
struct TYPE_8__ {scalar_t__ e_lfanew; } ;
struct TYPE_5__ {int NumberOfSections; scalar_t__ SizeOfOptionalHeader; } ;
struct TYPE_7__ {TYPE_1__ file_header; } ;
struct TYPE_6__ {int VirtualAddress; int PointerToRawData; } ;
typedef int RBuffer ;
typedef TYPE_2__ Pe64_image_section_header ;
typedef TYPE_3__ Pe64_image_nt_headers ;
typedef int Pe64_image_file_header ;
typedef TYPE_4__ Pe64_image_dos_header ;


 int FUNC_0 (int *,scalar_t__,int *,int) ;
 int FUNC_1 (int *,scalar_t__,int const*,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 int VAR_1;
 Pe64_image_dos_header VAR_2;
 Pe64_image_nt_headers VAR_3;

 FUNC_0 (VAR_0, 0, (ut8 *)&VAR_2, sizeof (Pe64_image_dos_header));
 FUNC_0 (VAR_0, VAR_2.e_lfanew, (ut8 *)&VAR_3, sizeof (Pe64_image_nt_headers));


 ut64 VAR_4 = VAR_2.e_lfanew + 4 + sizeof (Pe64_image_file_header) + VAR_3.file_header.SizeOfOptionalHeader;
 Pe64_image_section_header VAR_5;
 for (VAR_1 = 0; VAR_1 < VAR_3.file_header.NumberOfSections; VAR_1++) {
  FUNC_0 (VAR_0, VAR_4 + VAR_1 * sizeof (VAR_5), (ut8 *)&VAR_5, sizeof (VAR_5));
  VAR_5.PointerToRawData = VAR_5.VirtualAddress;
  FUNC_1 (VAR_0, VAR_4 + VAR_1 * sizeof (VAR_5), (const ut8 *)&VAR_5, sizeof (VAR_5));
 }

 return 1;
}
