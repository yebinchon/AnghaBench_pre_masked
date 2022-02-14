
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int signature_t ;
typedef int signature_rsa_t ;
typedef int part_t ;
struct TYPE_7__ {scalar_t__ st_size; } ;
struct TYPE_9__ {TYPE_1__ stats; int partition_name; } ;
typedef TYPE_3__ part_data_t ;
typedef int part_crc_t ;
struct TYPE_10__ {unsigned int part_count; int outputfile; TYPE_2__* fwinfo; TYPE_3__* parts; int version; int magic; } ;
typedef TYPE_4__ image_info_t ;
typedef int header_t ;
struct TYPE_8__ {scalar_t__ sign; } ;
typedef int FILE ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (char*,TYPE_3__*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static int FUNC_10(image_info_t* VAR_0)
{
 char* VAR_1;
 char* VAR_2;
 u_int32_t VAR_3;
 FILE* VAR_4;
 unsigned int VAR_5;


 VAR_3 = sizeof(header_t);
 if(VAR_0->fwinfo->sign) {
  VAR_3 += sizeof(signature_rsa_t);
 } else {
  VAR_3 += sizeof(signature_t);
 }
 for (VAR_5 = 0; VAR_5 < VAR_0->part_count; ++VAR_5)
 {
  part_data_t* VAR_6 = &VAR_0->parts[VAR_5];
  VAR_3 += sizeof(part_t) + VAR_6->stats.st_size + sizeof(part_crc_t);
 }

 VAR_1 = (char*)FUNC_1(VAR_3, 1);
 if (VAR_1 == ((void*)0))
 {
  FUNC_0("Cannot allocate memory chunk of size '%u'\n", VAR_3);
  return -1;
 }


 FUNC_6(VAR_1, VAR_0->magic, VAR_0->version);
 VAR_2 = VAR_1 + sizeof(header_t);

 for (VAR_5 = 0; VAR_5 < VAR_0->part_count; ++VAR_5)
 {
  part_data_t* VAR_7 = &VAR_0->parts[VAR_5];
  int VAR_8;
  if ((VAR_8 = FUNC_7(VAR_2, VAR_7)) != 0)
  {
   FUNC_0("ERROR: failed writing part %u '%s'\n", VAR_5, VAR_7->partition_name);
  }
  VAR_2 += sizeof(part_t) + VAR_7->stats.st_size + sizeof(part_crc_t);
 }

 if(VAR_0->fwinfo->sign) {
  FUNC_9(VAR_1, VAR_3 - sizeof(signature_rsa_t));
 } else {
  FUNC_8(VAR_1, VAR_3 - sizeof(signature_t));
 }


 if ((VAR_4 = FUNC_3(VAR_0->outputfile, "w")) == ((void*)0))
 {
  FUNC_0("Can not create output file: '%s'\n", VAR_0->outputfile);
  return -10;
 }

 if (FUNC_5(VAR_1, VAR_3, 1, VAR_4) != 1)
 {
  FUNC_0("Could not write %d bytes into file: '%s'\n",
    VAR_3, VAR_0->outputfile);
  return -11;
 }

 FUNC_4(VAR_1);
 FUNC_2(VAR_4);
 return 0;
}
