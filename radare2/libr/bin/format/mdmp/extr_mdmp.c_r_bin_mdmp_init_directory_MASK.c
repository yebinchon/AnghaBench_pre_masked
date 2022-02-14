
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef size_t ut32 ;
struct r_bin_mdmp_obj {scalar_t__ size; int b; TYPE_1__* hdr; int kv; } ;
struct minidump_directory {int dummy; } ;
struct TYPE_2__ {scalar_t__ stream_directory_rva; size_t number_of_streams; } ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (struct r_bin_mdmp_obj*,struct minidump_directory*) ;
 int FUNC_3 (int ,scalar_t__,int *,int) ;
 int FUNC_4 (int ,char*,scalar_t__,int ) ;
 int FUNC_5 (int ,char*,char*,int ) ;

__attribute__((used)) static bool FUNC_6(struct r_bin_mdmp_obj *VAR_0) {
 ut32 VAR_1;
 struct minidump_directory VAR_2;

 FUNC_4 (VAR_0->kv, "mdmp_directory.offset",
   VAR_0->hdr->stream_directory_rva, 0);
 FUNC_5 (VAR_0->kv, "mdmp_directory.format", "[4]E? "
   "(mdmp_stream_type)StreamType "
   "(mdmp_location_descriptor)Location", 0);

 ut64 VAR_3 = VAR_0->hdr->stream_directory_rva;
 ut64 VAR_4 = VAR_3 < VAR_0->size ? VAR_0->size - VAR_3 : 0;
 size_t VAR_5 = FUNC_0 (VAR_0->hdr->number_of_streams, VAR_4 / sizeof (struct minidump_directory));
 if (VAR_5 < VAR_0->hdr->number_of_streams) {
  FUNC_1 ("[ERROR] Number of streams = %u is greater than is supportable by bin size\n",
           VAR_0->hdr->number_of_streams);
 }

 for (VAR_1 = 0; VAR_1 < VAR_5; VAR_1++) {
  ut32 VAR_6 = VAR_1 * sizeof (struct minidump_directory);
  int VAR_7 = FUNC_3 (VAR_0->b, VAR_3 + VAR_6, (ut8*) &VAR_2, sizeof (struct minidump_directory));
  if (VAR_7) {
   if (!FUNC_2 (VAR_0, &VAR_2)) {
    return 0;
   }
  }
 }

 return 1;
}
